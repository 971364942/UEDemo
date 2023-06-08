// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SInteractableInterface.h"
#include "GameFramework/Actor.h"
#include "SInteractableActor.generated.h"

UCLASS()
class DEMO_API ASInteractableActor : public AActor, public ISInteractableInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASInteractableActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	class UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="InteractText")
	FText InteractText;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnActorLoaded_Implementation() override;

	virtual FText GetInteractText_Implementation(APawn* InstigatorPawn) override;

	virtual void Interact_Implementation(APawn* InstigatorPawn) override;
	
};
