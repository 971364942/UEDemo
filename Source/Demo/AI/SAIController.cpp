// Fill out your copyright notice in the Description page of Project Settings.


#include "SAIController.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

void ASAIController::BeginPlay()
{
	Super::BeginPlay();

	if (ensureMsgf(BehaviorTree, TEXT("没有设置行为树")))
	{
		RunBehaviorTree(BehaviorTree);
	}

	APawn* MyPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (MyPawn)
	{
		GetBlackboardComponent()->SetValueAsVector("TargetLocation", MyPawn->GetActorLocation());
	}
}
