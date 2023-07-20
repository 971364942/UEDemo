// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerAttributeSet.h"

#include "DemoCharacter.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"

USPlayerAttributeSet::USPlayerAttributeSet():
	Physical(200.0f),
	MaxPhysical(200.0f),
	MoveSeep(500.0f)
{
	
}

void USPlayerAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(USPlayerAttributeSet, Physical);
	DOREPLIFETIME(USPlayerAttributeSet, MaxPhysical);
}


void USPlayerAttributeSet::OnRep_Physical(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USPlayerAttributeSet, Physical, OldValue);
}

void USPlayerAttributeSet::OnRep_MaxPhysical(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USPlayerAttributeSet, MaxHealth, OldValue);
}

void USPlayerAttributeSet::OnRep_MoveSeep(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USPlayerAttributeSet, MoveSeep, OldValue);
}

void USPlayerAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	
	if (Attribute == GetPhysicalAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxPhysical());
		//UE_LOG(LogTemp, Warning, TEXT("%f, %f, %f"), Physical.GetBaseValue(), Physical.GetCurrentValue(), NewValue);
	}
}

void USPlayerAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetPhysicalAttribute())
	{
		SetPhysical(FMath::Clamp(GetPhysical(), 0.0f, GetMaxPhysical()));
		
		OnPhysicalChanged.Broadcast(GetOwningActor(), Data.EvaluatedData.Magnitude);
	}
	
	/*ASTargetActor* TargetCharacter = nullptr;
	ASCharacter* PlayerCharacter = nullptr;

	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		TargetCharacter = Cast<ASTargetActor>(Data.Target.AbilityActorInfo->AvatarActor.Get());
		PlayerCharacter = Cast<ASCharacter>(Data.Target.AbilityActorInfo->AvatarActor.Get());
	}

	if (TargetCharacter)
	{
		if (Data.EvaluatedData.Attribute == GetHealthAttribute())
		{
			TargetCharacter->OnHealthChanged();
		}

		if (Data.EvaluatedData.Attribute == GetPhysicalAttribute())
		{
			//TargetCharacter->OnPhysicalChanged();
		}
	}

	if (PlayerCharacter)
	{
		if (Data.EvaluatedData.Attribute == GetHealthAttribute())
		{
			PlayerCharacter->OnHealthChanged();
		}

		if (Data.EvaluatedData.Attribute == GetPhysicalAttribute())
		{
			PlayerCharacter->OnPhysicalChanged();
		}
	}	*/
	
}
