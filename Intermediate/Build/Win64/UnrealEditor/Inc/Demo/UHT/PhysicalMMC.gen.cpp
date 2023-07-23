// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/GameplayAbility/PhysicalMMC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMMC() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UPhysicalMMC();
	DEMO_API UClass* Z_Construct_UClass_UPhysicalMMC_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void UPhysicalMMC::StaticRegisterNativesUPhysicalMMC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicalMMC);
	UClass* Z_Construct_UClass_UPhysicalMMC_NoRegister()
	{
		return UPhysicalMMC::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMMC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMMC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMMC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayAbility/PhysicalMMC.h" },
		{ "ModuleRelativePath", "GameplayAbility/PhysicalMMC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMMC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMMC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMMC_Statics::ClassParams = {
		&UPhysicalMMC::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMMC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMMC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMMC()
	{
		if (!Z_Registration_Info_UClass_UPhysicalMMC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicalMMC.OuterSingleton, Z_Construct_UClass_UPhysicalMMC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicalMMC.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UPhysicalMMC>()
	{
		return UPhysicalMMC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMMC);
	UPhysicalMMC::~UPhysicalMMC() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_PhysicalMMC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_PhysicalMMC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicalMMC, UPhysicalMMC::StaticClass, TEXT("UPhysicalMMC"), &Z_Registration_Info_UClass_UPhysicalMMC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicalMMC), 1047316484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_PhysicalMMC_h_1230243968(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_PhysicalMMC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_PhysicalMMC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
