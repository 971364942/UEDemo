// Fill out your copyright notice in the Description page of Project Settings.


#include "SInteractableCharacter.h"


// Sets default values
ASInteractableCharacter::ASInteractableCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASInteractableCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASInteractableCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ASInteractableCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ASInteractableCharacter::OnActorLoaded_Implementation()
{

}

FText ASInteractableCharacter::GetInteractText_Implementation(APawn* InstigatorPawn)
{
	if (!InteractText.IsEmpty())
	{
		return InteractText;
	}
	return FText::GetEmpty();
}

void ASInteractableCharacter::Interact_Implementation(APawn* InstigatorPawn)
{
	
}

