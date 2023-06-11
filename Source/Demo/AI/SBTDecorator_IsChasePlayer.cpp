// Fill out your copyright notice in the Description page of Project Settings.


#include "SBTDecorator_IsChasePlayer.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

void USBTDecorator_IsChasePlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
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
				AActor* AIAActor = AIController->GetPawn();
				UE_LOG(LogTemp, Log, TEXT("%s"), *AIAActor->GetName());
				if (AIAActor)
				{
					FVector AILocation = AIAActor->GetActorLocation();
					UE_LOG(LogTemp, Log, TEXT("%s"), *AILocation.ToString());
				
					if (FVector::Distance(FindPlayerLocation, AILocation) >= ChaseDistance)
					{
						BlackboardComp->SetValueAsBool(IsChasePlayer, false);

						BlackboardComp->SetValueAsObject("PlayerActor", nullptr);
					}
					else
					{
						BlackboardComp->SetValueAsBool(IsChasePlayer, true);
					}
		
					return;
				}
			}
		}
		
		BlackboardComp->SetValueAsBool(IsChasePlayer, false);
	}
}
