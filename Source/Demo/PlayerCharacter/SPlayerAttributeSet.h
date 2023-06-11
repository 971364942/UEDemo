// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "SAttributeSet.h"
#include "SPlayerAttributeSet.generated.h"


/**
 * 
 */
UCLASS()
class DEMO_API USPlayerAttributeSet : public USAttributeSet
{
	GENERATED_BODY()

public:

	USPlayerAttributeSet();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Physical", ReplicatedUsing="OnRep_Physical")
	FGameplayAttributeData Physical;
	ATTRIBUTE_ACCESSORS(USPlayerAttributeSet, Physical);
	UFUNCTION()
	void OnRep_Physical(const FGameplayAttributeData& OldValue);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Physical", ReplicatedUsing="OnRep_MaxPhysical")
	FGameplayAttributeData MaxPhysical;
	ATTRIBUTE_ACCESSORS(USPlayerAttributeSet, MaxPhysical);
	UFUNCTION()
	void OnRep_MaxPhysical(const FGameplayAttributeData& OldValue);

	FOnValueChanged OnPhysicalChanged;
	
};
