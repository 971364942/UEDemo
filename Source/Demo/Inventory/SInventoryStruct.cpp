// Fill out your copyright notice in the Description page of Project Settings.


#include "SInventoryStruct.h"

FSItem::FSItem()
	: ID(0)
	, ItemIcon(nullptr)
	, ItemType()
{
}

FSInventoryItem::FSInventoryItem()
	: ItemID(0)
	, Quantity(0)
	, InventoryIndex(0)
{
}

FSInventory::FSInventory()
{
}
