// Fill out your copyright notice in the Description page of Project Settings.


#include "STroll.h"

#include "AbilitySystemComponent.h"
#include "SAIAttributeSet.h"

// Sets default values
ASTroll::ASTroll()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystem");

	AttributeSet = CreateDefaultSubobject<USAIAttributeSet>("AttributeSet");


}

// Called when the game starts or when spawned
void ASTroll::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTroll::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASTroll::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent* ASTroll::GetAbilitySystemComponent() const
{
	return AbilitySystem;
}

