// Fill out your copyright notice in the Description page of Project Settings.


#include "SBTTaskNode_ExecuteGameplayAbility.h"

#include "AbilitySystemComponent.h"
#include "AIController.h"

EBTNodeResult::Type USBTTaskNode_ExecuteGameplayAbility::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if (AIController)
	{
		APawn* AIPawn = AIController->GetPawn();
		UAbilitySystemComponent* AbilitySystem = AIPawn->FindComponentByClass<UAbilitySystemComponent>();
		if (AbilitySystem)
		{
			if (ensure(GameplayAbility))
			{
				AbilitySystem->TryActivateAbilityByClass(GameplayAbility);

				return EBTNodeResult::Succeeded;
			}
		}
	}

	return  EBTNodeResult::Failed;
}
