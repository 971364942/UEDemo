// Fill out your copyright notice in the Description page of Project Settings.


#include "SBTService_IsChasePlayer.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

void USBTService_IsChasePlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (ensure((BlackboardComp)))
	{
		AActor* Player = Cast<AActor>(BlackboardComp->GetValueAsObject("PlayerActor"));
		if (Player)
		{
			FVector FindPlayerLocation = BlackboardComp->GetValueAsVector("FindPlayerLocation");

			AAIController* AIController = OwnerComp.GetAIOwner();
			if (AIController)
			{
				APawn* AIPawn = AIController->GetPawn();
				//UE_LOG(LogTemp, Log, TEXT("%s"), *AIPawn->GetName());
				if (AIPawn)
				{
					FVector AILocation = AIPawn->GetActorLocation();
					//UE_LOG(LogTemp, Log, TEXT("%s"), *AILocation.ToString());
			
					if (FVector::Distance(FindPlayerLocation, AILocation) >= ChaseDistance)
					{
						BlackboardComp->SetValueAsBool(IsChasePlayerKey, false);

						BlackboardComp->SetValueAsObject("PlayerActor", nullptr);
					}
					else
					{
						BlackboardComp->SetValueAsBool(IsChasePlayerKey, true);
					}
	
					return;
				}
			}
		}
		
		BlackboardComp->SetValueAsBool(IsChasePlayerKey, false);
	}
}
