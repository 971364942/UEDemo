// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameplayFunctionLibrary.h"

#include "AbilitySystemInterface.h"
#include "Engine/DataTable.h"
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

void USGameplayFunctionLibrary::AssertTrigger(bool bIsAssert, FString AssertText)
{
	ensureMsgf(!bIsAssert, TEXT("%s"), *AssertText);
}

static USGameplayFunctionLibrary::FOnCompletionChange CompletionChange;
void USGameplayFunctionLibrary::SetOnCompletionChange(FOnCompletionChange OnCompletionChange)
{
	CompletionChange = OnCompletionChange;
}

void USGameplayFunctionLibrary::SetTableTaskCompletionByID(int TableID, bool IsCompletion)
{
	FName TableName = FName(*FString::Printf(TEXT("%d"), TableID));

	FString TaskTablePath = TEXT("/Game/MyDemo/BluePrints/Task/DT_Task");
	UDataTable* TaskTable = LoadObject<UDataTable>(nullptr, *TaskTablePath);

	const UScriptStruct* RowStruct = TaskTable->GetRowStruct();

	TArray<FName> RowNames = TaskTable->GetRowNames();
	for (const FName& Name : RowNames)
	{
		if (Name == TableName)
		{
			// 获取对应行的数据
			uint8* RowData = TaskTable->FindRowUnchecked(Name);

			for (TFieldIterator<FProperty> It(RowStruct); It; ++It)
			{
				const FName PropertyName = It->GetFName();
				FString PropertyNameString = PropertyName.ToString();

				if (PropertyNameString.Contains(TEXT("Completion")))
				{
					FProperty* Property = RowStruct->FindPropertyByName(*PropertyNameString);
					if (Property)
					{
						bool* ValuePtr = reinterpret_cast<bool*>(Property->ContainerPtrToValuePtr<uint8>(RowData));
						if (ValuePtr)
						{
							// 修改值
							*ValuePtr = IsCompletion;

							CompletionChange.ExecuteIfBound(IsCompletion, TableID);
							
							break;
						}
					}
				}
			}
			
			break;
		}
	}
}
