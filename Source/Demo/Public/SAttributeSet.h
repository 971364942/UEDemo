// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "SAttributeSet.generated.h"

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
class DEMO_API USAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:

	USAttributeSet();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Health", ReplicatedUsing="OnRep_Health")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(USAttributeSet, Health);
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldValue);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Health", ReplicatedUsing="OnRep_MaxHealth")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(USAttributeSet, MaxHealth);
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldValue);
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Attribute", ReplicatedUsing="OnRep_Defense")
	FGameplayAttributeData Defense;
	ATTRIBUTE_ACCESSORS(USAttributeSet, Defense);
	UFUNCTION()
	void OnRep_Defense(const FGameplayAttributeData& OldValue);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Attribute", ReplicatedUsing="OnRep_Attack")
	FGameplayAttributeData Attack;
	ATTRIBUTE_ACCESSORS(USAttributeSet, Attack);
	UFUNCTION()
	void OnRep_Attack(const FGameplayAttributeData& OldValue);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Attribute", ReplicatedUsing="OnRep_AttackMultiplier")
	FGameplayAttributeData AttackMultiplier;
	ATTRIBUTE_ACCESSORS(USAttributeSet, AttackMultiplier);
	UFUNCTION()
	void OnRep_AttackMultiplier(const FGameplayAttributeData& OldValue);
		
	FOnValueChanged OnHealthChanged;
	
};
