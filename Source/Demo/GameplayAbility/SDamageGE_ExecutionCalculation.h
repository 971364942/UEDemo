// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "SDamageGE_ExecutionCalculation.generated.h"

/**
 * 
 */
UCLASS()
class DEMO_API USDamageGE_ExecutionCalculation : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

	USDamageGE_ExecutionCalculation();

	void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
	
};
