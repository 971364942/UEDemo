// Fill out your copyright notice in the Description page of Project Settings.


#include "SInteractableActor.h"

// Sets default values
ASInteractableActor::ASInteractableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComp");
	RootComponent = StaticMeshComp;

}

// Called when the game starts or when spawned
void ASInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASInteractableActor::OnActorLoaded_Implementation()
{
	
}

FText ASInteractableActor::GetInteractText_Implementation(APawn* InstigatorPawn)
{
	if (!InteractText.IsEmpty())
	{
		return InteractText;
	}
	return FText::GetEmpty();
}

void ASInteractableActor::Interact_Implementation(APawn* InstigatorPawn)
{
	
}

