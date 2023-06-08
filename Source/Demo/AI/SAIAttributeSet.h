// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "SAIAttributeSet.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnValueChanged, AActor*);

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class DEMO_API USAIAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	USAIAttributeSet();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

public:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Health", ReplicatedUsing="OnRep_Health")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(USAIAttributeSet, Health);
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldValue);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Health", ReplicatedUsing="OnRep_HealthMax")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(USAIAttributeSet, MaxHealth);
	UFUNCTION()
	void OnRep_HealthMax(const FGameplayAttributeData& OldValue);

	FOnValueChanged OnHealthChanged;
	
};
