// Fill out your copyright notice in the Description page of Project Settings.


#include "SAttributeSet.h"

#include "DemoCharacter.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"

USAttributeSet::USAttributeSet():
	Health(1000.0f),
	MaxHealth(1000.0f),
	Physical(200.0f),
	MaxPhysical(200.0f),
	Defense(100.0f),
	Attack(100.0f),
	AttackMultiplier(1.0f)
{
	
}

void USAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(USAttributeSet, Health);
	DOREPLIFETIME(USAttributeSet, MaxHealth);
	DOREPLIFETIME(USAttributeSet, Physical);
	DOREPLIFETIME(USAttributeSet, MaxPhysical);
	DOREPLIFETIME(USAttributeSet, Defense);
	DOREPLIFETIME(USAttributeSet, Attack);
	DOREPLIFETIME(USAttributeSet, AttackMultiplier);
	
}

void USAttributeSet::OnRep_Health(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USAttributeSet, Health, OldValue);
}

void USAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USAttributeSet, MaxHealth, OldValue);
}

void USAttributeSet::OnRep_Physical(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USAttributeSet, Physical, OldValue);
}

void USAttributeSet::OnRep_MaxPhysical(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USAttributeSet, MaxHealth, OldValue);
}

void USAttributeSet::OnRep_Defense(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USAttributeSet, Defense, OldValue);
}

void USAttributeSet::OnRep_Attack(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USAttributeSet, Attack, OldValue);
}

void USAttributeSet::OnRep_AttackMultiplier(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USAttributeSet, AttackMultiplier, OldValue);
}

void USAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}
	
	if (Attribute == GetPhysicalAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxPhysical());
	}
	
}

void USAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		OnHealthChanged.Broadcast(Data.EffectSpec.GetContext().GetInstigator());
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
