// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "SBTDecorator_IsChasePlayer.generated.h"

/**
 * 
 */
UCLASS()
class DEMO_API USBTDecorator_IsChasePlayer : public UBTService
{
	GENERATED_BODY()

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category="Setting")
	FName IsChasePlayer;

	UPROPERTY(EditAnywhere, Category="Setting")
	float ChaseDistance;
};
