// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/GameplayAbility/SDamageGE_ExecutionCalculation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDamageGE_ExecutionCalculation() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_USDamageGE_ExecutionCalculation();
	DEMO_API UClass* Z_Construct_UClass_USDamageGE_ExecutionCalculation_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void USDamageGE_ExecutionCalculation::StaticRegisterNativesUSDamageGE_ExecutionCalculation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USDamageGE_ExecutionCalculation);
	UClass* Z_Construct_UClass_USDamageGE_ExecutionCalculation_NoRegister()
	{
		return USDamageGE_ExecutionCalculation::StaticClass();
	}
	struct Z_Construct_UClass_USDamageGE_ExecutionCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USDamageGE_ExecutionCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USDamageGE_ExecutionCalculation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayAbility/SDamageGE_ExecutionCalculation.h" },
		{ "ModuleRelativePath", "GameplayAbility/SDamageGE_ExecutionCalculation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USDamageGE_ExecutionCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDamageGE_ExecutionCalculation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USDamageGE_ExecutionCalculation_Statics::ClassParams = {
		&USDamageGE_ExecutionCalculation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USDamageGE_ExecutionCalculation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USDamageGE_ExecutionCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USDamageGE_ExecutionCalculation()
	{
		if (!Z_Registration_Info_UClass_USDamageGE_ExecutionCalculation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USDamageGE_ExecutionCalculation.OuterSingleton, Z_Construct_UClass_USDamageGE_ExecutionCalculation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USDamageGE_ExecutionCalculation.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USDamageGE_ExecutionCalculation>()
	{
		return USDamageGE_ExecutionCalculation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USDamageGE_ExecutionCalculation);
	USDamageGE_ExecutionCalculation::~USDamageGE_ExecutionCalculation() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SDamageGE_ExecutionCalculation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SDamageGE_ExecutionCalculation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USDamageGE_ExecutionCalculation, USDamageGE_ExecutionCalculation::StaticClass, TEXT("USDamageGE_ExecutionCalculation"), &Z_Registration_Info_UClass_USDamageGE_ExecutionCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDamageGE_ExecutionCalculation), 2179452373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SDamageGE_ExecutionCalculation_h_1317416563(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SDamageGE_ExecutionCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SDamageGE_ExecutionCalculation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
