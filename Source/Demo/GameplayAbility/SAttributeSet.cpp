// Fill out your copyright notice in the Description page of Project Settings.


#include "SAttributeSet.h"

#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"


USAttributeSet::USAttributeSet():
	Health(100.0f),
	MaxHealth(100.0f),
	Defense(10.0f),
	Attack(10.0f),	
	AttackMultiplier(1.0f)
{
	
}

void USAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(USAttributeSet, Health);
	DOREPLIFETIME(USAttributeSet, MaxHealth);
	DOREPLIFETIME(USAttributeSet, Defense);
	DOREPLIFETIME(USAttributeSet, Attack);
	DOREPLIFETIME(USAttributeSet, AttackMultiplier);
	
}

void USAttributeSet::OnRep_Health(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USAttributeSet, Health, OldValue);
}

void USAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USAttributeSet, MaxHealth, OldValue);
}

void USAttributeSet::OnRep_Defense(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USAttributeSet, Defense, OldValue);
}

void USAttributeSet::OnRep_Attack(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USAttributeSet, Attack, OldValue);
}

void USAttributeSet::OnRep_AttackMultiplier(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USAttributeSet, AttackMultiplier, OldValue);
}

void USAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
		//UE_LOG(LogTemp, Warning, TEXT("%f, %f, %f"), Health.GetBaseValue(), Health.GetCurrentValue(), NewValue);
	}
}

void USAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));

		OnHealthChanged.Broadcast(Data.EffectSpec.GetContext().GetInstigator(), Data.EvaluatedData.Magnitude);
	}
}

void USAttributeSet::SetAttackMultiplierInternal(float AttackMultiplierValue)
{
	this->SetAttackMultiplier(AttackMultiplierValue);
}