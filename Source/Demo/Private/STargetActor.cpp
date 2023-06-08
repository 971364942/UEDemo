// Fill out your copyright notice in the Description page of Project Settings.


#include "STargetActor.h"

#include "AbilitySystemComponent.h"
#include "GameplayAbilitySpec.h"
#include "../PlayerCharacter/SAttributeSet.h"


// Sets default values
ASTargetActor::ASTargetActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TargetMesh = CreateDefaultSubobject<UStaticMeshComponent>("TargetMesh");
	RootComponent = TargetMesh;

	AbilitySystemComp = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComp");

	AttributeSet = CreateDefaultSubobject<USAttributeSet>("AttributeSet");
}

// Called when the game starts or when spawned
void ASTargetActor::BeginPlay()
{
	Super::BeginPlay();

	AttributeSet->OnHealthChanged.AddUObject(this, &ASTargetActor::OnHealthChanged);

	if (AbilitySystemComp)
	{
		if (MyAbilities.Num() > 0)
		{
			for (auto i = 0; i < MyAbilities.Num(); i++)
			{
				if (MyAbilities[i] == nullptr)
				{
					continue;
				}
				AbilitySystemComp->GiveAbility(FGameplayAbilitySpec(MyAbilities[i], 1, 0));
			}
		}

		AbilitySystemComp->InitAbilityActorInfo(this, this);
	}
}

// Called every frame
void ASTargetActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UAbilitySystemComponent* ASTargetActor::GetAbilitySystemComponent() const
{
	return AbilitySystemComp;
}

void ASTargetActor::OnHealthChanged(AActor* SInstigator)
{
	K2_OnHealthChanged(SInstigator);
}

