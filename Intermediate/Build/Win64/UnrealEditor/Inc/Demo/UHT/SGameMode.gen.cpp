// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Framework/SGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameMode() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_ADemoGameMode();
	DEMO_API UClass* Z_Construct_UClass_ADemoGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void ADemoGameMode::StaticRegisterNativesADemoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADemoGameMode);
	UClass* Z_Construct_UClass_ADemoGameMode_NoRegister()
	{
		return ADemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Framework/SGameMode.h" },
		{ "ModuleRelativePath", "Framework/SGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADemoGameMode_Statics::ClassParams = {
		&ADemoGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADemoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADemoGameMode()
	{
		if (!Z_Registration_Info_UClass_ADemoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADemoGameMode.OuterSingleton, Z_Construct_UClass_ADemoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADemoGameMode.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<ADemoGameMode>()
	{
		return ADemoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADemoGameMode);
	ADemoGameMode::~ADemoGameMode() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADemoGameMode, ADemoGameMode::StaticClass, TEXT("ADemoGameMode"), &Z_Registration_Info_UClass_ADemoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADemoGameMode), 703839883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameMode_h_761595294(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
