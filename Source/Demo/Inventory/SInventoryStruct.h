// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SInventoryEnum.h"
#include "Engine/DataTable.h"
#include "Engine/UserDefinedStruct.h"
#include "SInventoryStruct.generated.h"

USTRUCT(BlueprintType)
struct FItem
{
	GENERATED_BODY()

	FItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EItemType> ItemType;
	
};

USTRUCT(BlueprintType)
struct FInventoryItem
{
	GENERATED_BODY()

	FInventoryItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Quantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int InventoryIndex;

};

USTRUCT(BlueprintType)
struct FInventory : public FTableRowBase
{
	GENERATED_BODY()

	FInventory();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInventoryItem> Weapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInventoryItem> Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInventoryItem> Consumable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInventoryItem> Material;
	
};

/**
 * 
 */
UCLASS()
class DEMO_API USInventoryStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
};
