// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "Animation/AnimInstance.h"
#include "SAnimInstance.generated.h"

class UAbilitySystemComponent;

/**
 * 
 */
UCLASS()
class DEMO_API USAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	
	USAnimInstance(const FObjectInitializer& ObjectInitializer);

	virtual void InitializeWithAbilitySystem(UAbilitySystemComponent* ASC);

protected:

	virtual void NativeInitializeAnimation() override;

	UPROPERTY(EditDefaultsOnly, Category = "GameplayTags")
	FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;
	
};
