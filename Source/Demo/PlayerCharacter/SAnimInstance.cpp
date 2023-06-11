// Fill out your copyright notice in the Description page of Project Settings.


#include "SAnimInstance.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"


USAnimInstance::USAnimInstance(const FObjectInitializer& ObjectInitializer)
{
}

void USAnimInstance::InitializeWithAbilitySystem(UAbilitySystemComponent* ASC)
{
	check(ASC);

	GameplayTagPropertyMap.Initialize(this, ASC);
}

void USAnimInstance::NativeInitializeAnimation()
{
	AActor* OwningActor = GetOwningActor();
	if (OwningActor)
	{
		UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OwningActor);
		if (ASC)
		{
			InitializeWithAbilitySystem(ASC);
		}
	}
}