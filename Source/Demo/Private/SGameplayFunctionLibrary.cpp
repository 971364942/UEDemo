// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameplayFunctionLibrary.h"

#include "AbilitySystemInterface.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

FVector USGameplayFunctionLibrary::AttackTurnTrace(AActor* SourceActor, float Radius)
{
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectQueryParams;
	ObjectQueryParams.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic));
	
	TArray<AActor*> ActorsToIgnore;
	
	TArray<FHitResult> HitResults;
	
	bool TraceHit = UKismetSystemLibrary::SphereTraceMultiForObjects(SourceActor->GetWorld(), SourceActor->GetActorLocation(), SourceActor->GetActorLocation(), Radius, ObjectQueryParams, false, ActorsToIgnore, EDrawDebugTrace::None, HitResults, true);

	HitResults.Sort([SourceActor](const FHitResult&A, const FHitResult&B)
	{
		float fA = UKismetMathLibrary::Abs(UKismetMathLibrary::NormalizedDeltaRotator(UKismetMathLibrary::FindLookAtRotation(SourceActor->GetActorLocation(), A.Location),SourceActor->GetActorRotation()).Yaw);
		float fB = UKismetMathLibrary::Abs(UKismetMathLibrary::NormalizedDeltaRotator(UKismetMathLibrary::FindLookAtRotation(SourceActor->GetActorLocation(), B.Location),SourceActor->GetActorRotation()).Yaw);
		return fA<fB;
	});

	for (FHitResult HitResult : HitResults)
	{
		AActor* TraceActor = HitResult.GetActor();
		if (TraceActor != nullptr && UKismetSystemLibrary::DoesImplementInterface(TraceActor, UAbilitySystemInterface::StaticClass()))
		{
			return TraceActor->GetActorLocation();
		}
	}
	
	if (HitResults.IsValidIndex(0))
	{
		return HitResults[0].GetActor()->GetActorLocation();
	}

	return FVector(0);
	
}
