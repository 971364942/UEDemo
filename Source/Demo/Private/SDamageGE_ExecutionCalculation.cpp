// Fill out your copyright notice in the Description page of Project Settings.


#include "SDamageGE_ExecutionCalculation.h"

#include "SAttributeSet.h"


struct SDamageStatics
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Health);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Attack);
	DECLARE_ATTRIBUTE_CAPTUREDEF(AttackMultiplier);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Defense);

	SDamageStatics()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(USAttributeSet, Health, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(USAttributeSet, Attack, Source, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(USAttributeSet, AttackMultiplier, Source, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(USAttributeSet, Defense, Target, false);
	}
};

static const SDamageStatics& DamageStatics()
{
    static SDamageStatics DmgStatics;
    return DmgStatics;
}

USDamageGE_ExecutionCalculation::USDamageGE_ExecutionCalculation()
{
	RelevantAttributesToCapture.Add(DamageStatics().HealthDef);
	RelevantAttributesToCapture.Add(DamageStatics().AttackDef);
	RelevantAttributesToCapture.Add(DamageStatics().AttackMultiplierDef);
	RelevantAttributesToCapture.Add(DamageStatics().DefenseDef);
	
}

void USDamageGE_ExecutionCalculation::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	Super::Execute_Implementation(ExecutionParams, OutExecutionOutput);

	UAbilitySystemComponent* TargetAbilitySystemComponent = ExecutionParams.GetTargetAbilitySystemComponent();
	UAbilitySystemComponent* SourceAbilitySystemComponent = ExecutionParams.GetSourceAbilitySystemComponent();

	AActor* TargetActor = TargetAbilitySystemComponent ? SourceAbilitySystemComponent->GetAvatarActor() : nullptr;
	AActor* SourceActor = SourceAbilitySystemComponent ? SourceAbilitySystemComponent->GetAvatarActor() : nullptr;

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
	
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Health = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().HealthDef, EvaluationParameters, Health);
	
	float Attack = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().AttackDef, EvaluationParameters,	Attack);

	float AttackMultiplier = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().AttackMultiplierDef, EvaluationParameters,	AttackMultiplier);

	float Defense = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().DefenseDef, EvaluationParameters, Defense);

	float DamageDone = Attack * (Attack/(Attack+Defense)) * AttackMultiplier;
	
	if (TargetTags->HasTag(FGameplayTag::RequestGameplayTag("Ability.Buff.Block")))
	{
		DamageDone *= 0.5f;
	}

	if (TargetTags->HasTag(FGameplayTag::RequestGameplayTag("Ability.Buff.StrikeBack")))
	{
		DamageDone = 0.0f;
	}
	
	DamageDone = FMath::RoundToInt(DamageDone);
	if (DamageDone > 0.f)
	{
		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(DamageStatics().HealthProperty, EGameplayModOp::Additive, -DamageDone));
	}
}
