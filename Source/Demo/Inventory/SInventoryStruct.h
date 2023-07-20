// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SInventoryEnum.h"
#include "Engine/DataTable.h"
#include "Engine/UserDefinedStruct.h"
#include "SInventoryStruct.generated.h"

USTRUCT(BlueprintType)
struct FSItem : public FTableRowBase
{
	GENERATED_BODY()

	FSItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESItemType> ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* ItemMesh;
	
	explicit operator bool() const
	{
		return ID != 0;
	}
	
};

USTRUCT(BlueprintType)
struct FSInventoryItem : public FTableRowBase
{
	GENERATED_BODY()

	FSInventoryItem();

	//物品ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ItemID;

	//物品数量
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Quantity;
	
	//物品所在位置
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int InventoryIndex;

};

USTRUCT(BlueprintType)
struct FSInventory
{
	GENERATED_BODY()

	FSInventory();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSInventoryItem> Weapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSInventoryItem> Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSInventoryItem> Consumable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSInventoryItem> Material;
	
};

/**
 * 
 */
UCLASS()
class DEMO_API USInventoryStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
};
