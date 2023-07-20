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
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ESItemType();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FSInventory();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FSInventoryItem();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FSItem();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

static_assert(std::is_polymorphic<FSItem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSItem cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SItem;
class UScriptStruct* FSItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSItem, Z_Construct_UPackage__Script_Demo(), TEXT("SItem"));
	}
	return Z_Registration_Info_UScriptStruct_SItem.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FSItem>()
{
	return FSItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSItem_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "SItem" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSItem, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SItem" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSItem, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSItem_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSItem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSItem_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "SItem" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSItem, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSItem_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSItem_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "SItem" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSItem, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "SItem" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSItem, ItemType), Z_Construct_UEnum_Demo_ESItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemType_MetaData)) }; // 615398626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "Category", "SItem" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSItem, ItemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSItem_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSItem_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSItem_Statics::NewProp_ItemMesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SItem",
		sizeof(FSItem),
		alignof(FSItem),
		Z_Construct_UScriptStruct_FSItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSItem()
	{
		if (!Z_Registration_Info_UScriptStruct_SItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SItem.InnerSingleton, Z_Construct_UScriptStruct_FSItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SItem.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSInventoryItem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSInventoryItem cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SInventoryItem;
class UScriptStruct* FSInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SInventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SInventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSInventoryItem, Z_Construct_UPackage__Script_Demo(), TEXT("SInventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_SInventoryItem.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FSInventoryItem>()
{
	return FSInventoryItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSInventoryItem_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSInventoryItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "SInventoryItem" },
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81ID\n" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81ID" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSInventoryItem, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "SInventoryItem" },
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe9\x87\x8f\n" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe9\x87\x8f" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSInventoryItem, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_InventoryIndex_MetaData[] = {
		{ "Category", "SInventoryItem" },
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe6\x89\x80\xe5\x9c\xa8\xe4\xbd\x8d\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe6\x89\x80\xe5\x9c\xa8\xe4\xbd\x8d\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSInventoryItem, InventoryIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_InventoryIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_InventoryIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewProp_InventoryIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SInventoryItem",
		sizeof(FSInventoryItem),
		alignof(FSInventoryItem),
		Z_Construct_UScriptStruct_FSInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSInventoryItem()
	{
		if (!Z_Registration_Info_UScriptStruct_SInventoryItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SInventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FSInventoryItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SInventoryItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SInventory;
class UScriptStruct* FSInventory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SInventory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SInventory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSInventory, Z_Construct_UPackage__Script_Demo(), TEXT("SInventory"));
	}
	return Z_Registration_Info_UScriptStruct_SInventory.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FSInventory>()
{
	return FSInventory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSInventory_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSInventory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSInventory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSInventory>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Weapon_Inner = { "Weapon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSInventoryItem, METADATA_PARAMS(nullptr, 0) }; // 645750956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "SInventory" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSInventory, Weapon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Weapon_MetaData)) }; // 645750956
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Armor_Inner = { "Armor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSInventoryItem, METADATA_PARAMS(nullptr, 0) }; // 645750956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "SInventory" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSInventory, Armor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Armor_MetaData)) }; // 645750956
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Consumable_Inner = { "Consumable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSInventoryItem, METADATA_PARAMS(nullptr, 0) }; // 645750956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Consumable_MetaData[] = {
		{ "Category", "SInventory" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Consumable = { "Consumable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSInventory, Consumable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Consumable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Consumable_MetaData)) }; // 645750956
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Material_Inner = { "Material", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSInventoryItem, METADATA_PARAMS(nullptr, 0) }; // 645750956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "SInventory" },
		{ "ModuleRelativePath", "Inventory/SInventoryStruct.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSInventory, Material), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Material_MetaData)) }; // 645750956
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Weapon_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Armor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Armor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Consumable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Consumable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Material_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSInventory_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSInventory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		&NewStructOps,
		"SInventory",
		sizeof(FSInventory),
		alignof(FSInventory),
		Z_Construct_UScriptStruct_FSInventory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSInventory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSInventory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSInventory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSInventory()
	{
		if (!Z_Registration_Info_UScriptStruct_SInventory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SInventory.InnerSingleton, Z_Construct_UScriptStruct_FSInventory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SInventory.InnerSingleton;
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
		{ FSItem::StaticStruct, Z_Construct_UScriptStruct_FSItem_Statics::NewStructOps, TEXT("SItem"), &Z_Registration_Info_UScriptStruct_SItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSItem), 3710124915U) },
		{ FSInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FSInventoryItem_Statics::NewStructOps, TEXT("SInventoryItem"), &Z_Registration_Info_UScriptStruct_SInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSInventoryItem), 645750956U) },
		{ FSInventory::StaticStruct, Z_Construct_UScriptStruct_FSInventory_Statics::NewStructOps, TEXT("SInventory"), &Z_Registration_Info_UScriptStruct_SInventory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSInventory), 3050077975U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USInventoryStruct, USInventoryStruct::StaticClass, TEXT("USInventoryStruct"), &Z_Registration_Info_UClass_USInventoryStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USInventoryStruct), 45906008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_273787378(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
