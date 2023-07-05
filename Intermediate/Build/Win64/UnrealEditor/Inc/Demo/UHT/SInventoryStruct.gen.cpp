// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Inventory/SInventoryStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSInventoryStruct() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_USInventoryStruct();
	DEMO_API UClass* Z_Construct_UClass_USInventoryStruct_NoRegister();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EItemType();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FInventory();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Item;
class UScriptStruct* FItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Item.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Item.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItem, Z_Construct_UPackage__Script_Demo(), TEXT("Item"));
	}
	return Z_Registration_Info_UScriptStruct_Item.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FItem>()
{
	return FItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItem, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItem, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItem, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItem, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItem, ItemType), Z_Construct_UEnum_Demo_EItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemType_MetaData)) }; // 3513624848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		&NewStructOps,
		"Item",
		sizeof(FItem),
		alignof(FItem),
		Z_Construct_UScriptStruct_FItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItem()
	{
		if (!Z_Registration_Info_UScriptStruct_Item.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Item.InnerSingleton, Z_Construct_UScriptStruct_FItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Item.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItem;
class UScriptStruct* FInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, Z_Construct_UPackage__Script_Demo(), TEXT("InventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FInventoryItem>()
{
	return FInventoryItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInventoryItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InventoryIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInventoryItem, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInventoryItem, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_InventoryIndex_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInventoryItem, InventoryIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_InventoryIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_InventoryIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_InventoryIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		&NewStructOps,
		"InventoryItem",
		sizeof(FInventoryItem),
		alignof(FInventoryItem),
		Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
	{
		if (!Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInventory>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventory cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Inventory;
class UScriptStruct* FInventory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Inventory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Inventory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventory, Z_Construct_UPackage__Script_Demo(), TEXT("Inventory"));
	}
	return Z_Registration_Info_UScriptStruct_Inventory.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FInventory>()
{
	return FInventory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Weapon_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Armor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Armor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Consumable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Consumable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Consumable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventory>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Weapon_Inner = { "Weapon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) }; // 890288488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInventory, Weapon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Weapon_MetaData)) }; // 890288488
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Armor_Inner = { "Armor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) }; // 890288488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInventory, Armor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Armor_MetaData)) }; // 890288488
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Consumable_Inner = { "Consumable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) }; // 890288488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Consumable_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Consumable = { "Consumable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInventory, Consumable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Consumable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Consumable_MetaData)) }; // 890288488
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Material_Inner = { "Material", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) }; // 890288488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInventory, Material), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Material_MetaData)) }; // 890288488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Weapon_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Armor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Armor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Consumable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Consumable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Material_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventory_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Inventory",
		sizeof(FInventory),
		alignof(FInventory),
		Z_Construct_UScriptStruct_FInventory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventory()
	{
		if (!Z_Registration_Info_UScriptStruct_Inventory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Inventory.InnerSingleton, Z_Construct_UScriptStruct_FInventory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Inventory.InnerSingleton;
	}
	void USInventoryStruct::StaticRegisterNativesUSInventoryStruct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USInventoryStruct);
	UClass* Z_Construct_UClass_USInventoryStruct_NoRegister()
	{
		return USInventoryStruct::StaticClass();
	}
	struct Z_Construct_UClass_USInventoryStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USInventoryStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInventoryStruct_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Inventory/SInventoryStruct.h" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USInventoryStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USInventoryStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USInventoryStruct_Statics::ClassParams = {
		&USInventoryStruct::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USInventoryStruct_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USInventoryStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USInventoryStruct()
	{
		if (!Z_Registration_Info_UClass_USInventoryStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USInventoryStruct.OuterSingleton, Z_Construct_UClass_USInventoryStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USInventoryStruct.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USInventoryStruct>()
	{
		return USInventoryStruct::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USInventoryStruct);
	USInventoryStruct::~USInventoryStruct() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_Statics::ScriptStructInfo[] = {
		{ FItem::StaticStruct, Z_Construct_UScriptStruct_FItem_Statics::NewStructOps, TEXT("Item"), &Z_Registration_Info_UScriptStruct_Item, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItem), 216679433U) },
		{ FInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps, TEXT("InventoryItem"), &Z_Registration_Info_UScriptStruct_InventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItem), 890288488U) },
		{ FInventory::StaticStruct, Z_Construct_UScriptStruct_FInventory_Statics::NewStructOps, TEXT("Inventory"), &Z_Registration_Info_UScriptStruct_Inventory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventory), 2984802768U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USInventoryStruct, USInventoryStruct::StaticClass, TEXT("USInventoryStruct"), &Z_Registration_Info_UClass_USInventoryStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USInventoryStruct), 45906008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_1518217536(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
