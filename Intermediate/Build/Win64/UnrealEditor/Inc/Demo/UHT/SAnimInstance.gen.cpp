// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/PlayerCharacter/SAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAnimInstance() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_USAnimInstance();
	DEMO_API UClass* Z_Construct_UClass_USAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void USAnimInstance::StaticRegisterNativesUSAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USAnimInstance);
	UClass* Z_Construct_UClass_USAnimInstance_NoRegister()
	{
		return USAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagPropertyMap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagPropertyMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerCharacter/SAnimInstance.h" },
		{ "ModuleRelativePath", "PlayerCharacter/SAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAnimInstance_Statics::NewProp_GameplayTagPropertyMap_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "PlayerCharacter/SAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAnimInstance_Statics::NewProp_GameplayTagPropertyMap = { "GameplayTagPropertyMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USAnimInstance, GameplayTagPropertyMap), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, METADATA_PARAMS(Z_Construct_UClass_USAnimInstance_Statics::NewProp_GameplayTagPropertyMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAnimInstance_Statics::NewProp_GameplayTagPropertyMap_MetaData)) }; // 2885114522
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAnimInstance_Statics::NewProp_GameplayTagPropertyMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USAnimInstance_Statics::ClassParams = {
		&USAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAnimInstance()
	{
		if (!Z_Registration_Info_UClass_USAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USAnimInstance.OuterSingleton, Z_Construct_UClass_USAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USAnimInstance.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USAnimInstance>()
	{
		return USAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAnimInstance);
	USAnimInstance::~USAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_SAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_SAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USAnimInstance, USAnimInstance::StaticClass, TEXT("USAnimInstance"), &Z_Registration_Info_UClass_USAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USAnimInstance), 3715128824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_SAnimInstance_h_3488729596(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_SAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_SAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
