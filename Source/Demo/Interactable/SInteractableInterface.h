// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SInteractableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USInteractableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DEMO_API ISInteractableInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent)
	void OnActorLoaded();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="InteractText")
	FText GetInteractText(APawn* InstigatorPawn);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact(APawn* InstigatorPawn);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void LostFocusedActor(APawn* InstigatorPawn);
	
};
