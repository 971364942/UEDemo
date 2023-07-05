// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SGameplayFunctionLibrary.generated.h"

class UDataTable;

/**
 * 
 */
UCLASS()
class DEMO_API USGameplayFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="Gameplay")
	static FVector AttackTurnTrace(AActor* SourceActor, float Radius);

	UFUNCTION(BlueprintCallable, Category="Assert")
	static void AssertTrigger (bool bIsAssert, FString AssertText);

public:
	
	DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCompletionChange, bool, bCompletion, int, TableID);
	UFUNCTION(BlueprintCallable, Category="DataTable")
	static void SetOnCompletionChange(FOnCompletionChange OnCompletionChange);
	
	UFUNCTION(BlueprintCallable, Category="DataTable")
	static void SetTableTaskCompletionByID(int TableID, bool IsCompletion);
	
	
}; 
