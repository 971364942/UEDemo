// Fill out your copyright notice in the Description page of Project Settings.


#include "STroll.h"

#include "AbilitySystemComponent.h"
#include "SAIAttributeSet.h"
#include "SAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Demo/PlayerCharacter/DemoCharacter.h"
#include "Perception/PawnSensingComponent.h"

// Sets default values
ASTroll::ASTroll()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystem");

	AttributeSet = CreateDefaultSubobject<USAIAttributeSet>("AttributeSet");

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensingComp");

}

UAbilitySystemComponent* ASTroll::GetAbilitySystemComponent() const
{
	return AbilitySystem;
}

// Called when the game starts or when spawned
void ASTroll::BeginPlay()
{
	Super::BeginPlay();
	
	AttributeSet->OnHealthChanged.AddUObject(this, &ASTroll::OnHealthChanged);
}

void ASTroll::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	PawnSensingComp->OnSeePawn.AddDynamic(this, &ASTroll::OnPawnSee);
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

void ASTroll::OnHealthChanged(AActor* Actor, float HealthChangeValue)
{
	K2_OnHealthChanged(Actor);

	OnPawnSee(Cast<APawn>(Actor));
	
	if (AttributeSet->GetHealth() == 0 && HealthChangeValue < 0)
	{
		TrollDeath();
	}
}

void ASTroll::OnPawnSee(APawn* Pawn)
{
	ADemoCharacter* PlayerActor = Cast<ADemoCharacter>(Pawn);
	
	if (PlayerActor)
	{
		ASAIController* AIController = Cast<ASAIController>(GetController());
		if (AIController)
		{
			UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
			if (BlackboardComp)
			{
				if (BlackboardComp->GetValueAsVector("FindPlayerLocation") == FVector(0))
				{
					BlackboardComp->SetValueAsObject("PlayerActor", PlayerActor);
					
					FVector FindPlayerLocation = GetActorLocation();
					BlackboardComp->SetValueAsVector("FindPlayerLocation", FindPlayerLocation);
				}
			}
		}
	}
}

void ASTroll::TrollDeath()
{
	K2_TrollDeath();
	
	ASAIController* TrollController = Cast<ASAIController>(GetController());

	if (TrollController)
	{
		TrollController->Destroy();
	}
}

