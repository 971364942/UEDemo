// Fill out your copyright notice in the Description page of Project Settings.


#include "SBTService_MoveToPlayer.h"

#include "BehaviorTree/BlackboardComponent.h"

void USBTService_MoveToPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (BlackboardComp)
	{
		AActor* PlayerActor = Cast<AActor>(BlackboardComp->GetValueAsObject("PlayerActor"));
		if (PlayerActor)
		{
			FVector MoveTo = PlayerActor->GetActorLocation();
			BlackboardComp->SetValueAsVector("TargetLocation", MoveTo);
		}
	}
}
