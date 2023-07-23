// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/GameplayAbility/SGameplayAbility.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameplayAbility() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_USGameplayAbility();
	DEMO_API UClass* Z_Construct_UClass_USGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void USGameplayAbility::StaticRegisterNativesUSGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USGameplayAbility);
	UClass* Z_Construct_UClass_USGameplayAbility_NoRegister()
	{
		return USGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_USGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaCost_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManaCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TempCooldownTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TempCooldownTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayAbility/SGameplayAbility.h" },
		{ "ModuleRelativePath", "GameplayAbility/SGameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameplayAbility_Statics::NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Cooldowns" },
		{ "ModuleRelativePath", "GameplayAbility/SGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGameplayAbility_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USGameplayAbility, CooldownDuration), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_USGameplayAbility_Statics::NewProp_CooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USGameplayAbility_Statics::NewProp_CooldownDuration_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameplayAbility_Statics::NewProp_CooldownTags_MetaData[] = {
		{ "Category", "Cooldowns" },
		{ "ModuleRelativePath", "GameplayAbility/SGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGameplayAbility_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USGameplayAbility, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USGameplayAbility_Statics::NewProp_CooldownTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USGameplayAbility_Statics::NewProp_CooldownTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameplayAbility_Statics::NewProp_ManaCost_MetaData[] = {
		{ "Category", "Costs" },
		{ "ModuleRelativePath", "GameplayAbility/SGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGameplayAbility_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USGameplayAbility, ManaCost), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_USGameplayAbility_Statics::NewProp_ManaCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USGameplayAbility_Statics::NewProp_ManaCost_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameplayAbility_Statics::NewProp_TempCooldownTags_MetaData[] = {
		{ "ModuleRelativePath", "GameplayAbility/SGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGameplayAbility_Statics::NewProp_TempCooldownTags = { "TempCooldownTags", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USGameplayAbility, TempCooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USGameplayAbility_Statics::NewProp_TempCooldownTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USGameplayAbility_Statics::NewProp_TempCooldownTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGameplayAbility_Statics::NewProp_CooldownDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGameplayAbility_Statics::NewProp_CooldownTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGameplayAbility_Statics::NewProp_ManaCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGameplayAbility_Statics::NewProp_TempCooldownTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USGameplayAbility_Statics::ClassParams = {
		&USGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_USGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGameplayAbility.OuterSingleton, Z_Construct_UClass_USGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USGameplayAbility.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USGameplayAbility>()
	{
		return USGameplayAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USGameplayAbility);
	USGameplayAbility::~USGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USGameplayAbility, USGameplayAbility::StaticClass, TEXT("USGameplayAbility"), &Z_Registration_Info_UClass_USGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGameplayAbility), 1416766637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SGameplayAbility_h_1465780919(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
