// Fill out your copyright notice in the Description page of Project Settings.


#include "SInventoryStruct.h"

FItem::FItem()
	: ID(0)
	, Icon(nullptr)
	, ItemType()
{
}

FInventoryItem::FInventoryItem()
	: ItemID(0)
	, Quantity(0)
	, InventoryIndex(0)
{
}

FInventory::FInventory()
{
}
