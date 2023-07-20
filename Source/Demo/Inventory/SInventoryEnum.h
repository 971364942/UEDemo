// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "SInventoryEnum.generated.h"

UENUM(BlueprintType)
enum ESItemType
{
	//武器
	Weapon UMETA(DisplayName = "Weapon"),
	//防具
	Armor UMETA(DisplayName = "Armor"),
	//消耗品
	Consumable UMETA(DisplayName = "Consumable"),
	//材料
	Material UMETA(DisplayName = "Material"),
};

/**
 * 
 */
UCLASS()
class DEMO_API USInventoryEnum : public UUserDefinedEnum
{
	GENERATED_BODY()
	
};
