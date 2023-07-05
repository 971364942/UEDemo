// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SInteractableInterface.h"
#include "GameFramework/Character.h"
#include "SInteractableCharacter.generated.h"

UCLASS()
class DEMO_API ASInteractableCharacter : public ACharacter, public ISInteractableInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASInteractableCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="InteractText")
	FText InteractText;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void OnActorLoaded_Implementation() override;

	virtual FText GetInteractText_Implementation(APawn* InstigatorPawn) override;

	virtual void Interact_Implementation(APawn* InstigatorPawn) override;
};
