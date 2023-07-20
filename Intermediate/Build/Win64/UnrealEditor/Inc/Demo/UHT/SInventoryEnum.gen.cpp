// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Inventory/SInventoryEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSInventoryEnum() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_USInventoryEnum();
	DEMO_API UClass* Z_Construct_UClass_USInventoryEnum_NoRegister();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ESItemType();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESItemType;
	static UEnum* ESItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_ESItemType, Z_Construct_UPackage__Script_Demo(), TEXT("ESItemType"));
		}
		return Z_Registration_Info_UEnum_ESItemType.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<ESItemType>()
	{
		return ESItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_ESItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_ESItemType_Statics::Enumerators[] = {
		{ "Weapon", (int64)Weapon },
		{ "Armor", (int64)Armor },
		{ "Consumable", (int64)Consumable },
		{ "Material", (int64)Material },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_ESItemType_Statics::Enum_MetaDataParams[] = {
		{ "Armor.Comment", "//\xe9\x98\xb2\xe5\x85\xb7\n" },
		{ "Armor.DisplayName", "Armor" },
		{ "Armor.Name", "Armor" },
		{ "Armor.ToolTip", "\xe9\x98\xb2\xe5\x85\xb7" },
		{ "BlueprintType", "true" },
		{ "Consumable.Comment", "//\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81\n" },
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "Consumable" },
		{ "Consumable.ToolTip", "\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81" },
		{ "Material.Comment", "//\xe6\x9d\x90\xe6\x96\x99\n" },
		{ "Material.DisplayName", "Material" },
		{ "Material.Name", "Material" },
		{ "Material.ToolTip", "\xe6\x9d\x90\xe6\x96\x99" },
		{ "ModuleRelativePath", "Inventory/SInventoryEnum.h" },
		{ "Weapon.Comment", "//\xe6\xad\xa6\xe5\x99\xa8\n" },
		{ "Weapon.DisplayName", "Weapon" },
		{ "Weapon.Name", "Weapon" },
		{ "Weapon.ToolTip", "\xe6\xad\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_ESItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"ESItemType",
		"ESItemType",
		Z_Construct_UEnum_Demo_ESItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ESItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Demo_ESItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ESItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Demo_ESItemType()
	{
		if (!Z_Registration_Info_UEnum_ESItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESItemType.InnerSingleton, Z_Construct_UEnum_Demo_ESItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESItemType.InnerSingleton;
	}
	void USInventoryEnum::StaticRegisterNativesUSInventoryEnum()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USInventoryEnum);
	UClass* Z_Construct_UClass_USInventoryEnum_NoRegister()
	{
		return USInventoryEnum::StaticClass();
	}
	struct Z_Construct_UClass_USInventoryEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USInventoryEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedEnum,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInventoryEnum_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Inventory/SInventoryEnum.h" },
		{ "ModuleRelativePath", "Inventory/SInventoryEnum.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USInventoryEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USInventoryEnum>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USInventoryEnum_Statics::ClassParams = {
		&USInventoryEnum::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USInventoryEnum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USInventoryEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USInventoryEnum()
	{
		if (!Z_Registration_Info_UClass_USInventoryEnum.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USInventoryEnum.OuterSingleton, Z_Construct_UClass_USInventoryEnum_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USInventoryEnum.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USInventoryEnum>()
	{
		return USInventoryEnum::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USInventoryEnum);
	USInventoryEnum::~USInventoryEnum() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_Statics::EnumInfo[] = {
		{ ESItemType_StaticEnum, TEXT("ESItemType"), &Z_Registration_Info_UEnum_ESItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 615398626U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USInventoryEnum, USInventoryEnum::StaticClass, TEXT("USInventoryEnum"), &Z_Registration_Info_UClass_USInventoryEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USInventoryEnum), 3895850803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_2824669352(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
