// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/AI/SAIAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIAttributeSet() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_USAIAttributeSet();
	DEMO_API UClass* Z_Construct_UClass_USAIAttributeSet_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_USAttributeSet();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void USAIAttributeSet::StaticRegisterNativesUSAIAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USAIAttributeSet);
	UClass* Z_Construct_UClass_USAIAttributeSet_NoRegister()
	{
		return USAIAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USAIAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/SAIAttributeSet.h" },
		{ "ModuleRelativePath", "AI/SAIAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USAIAttributeSet_Statics::ClassParams = {
		&USAIAttributeSet::StaticClass,
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
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USAIAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIAttributeSet()
	{
		if (!Z_Registration_Info_UClass_USAIAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USAIAttributeSet.OuterSingleton, Z_Construct_UClass_USAIAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USAIAttributeSet.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USAIAttributeSet>()
	{
		return USAIAttributeSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIAttributeSet);
	USAIAttributeSet::~USAIAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_SAIAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_SAIAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USAIAttributeSet, USAIAttributeSet::StaticClass, TEXT("USAIAttributeSet"), &Z_Registration_Info_UClass_USAIAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USAIAttributeSet), 819799498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_SAIAttributeSet_h_3032927181(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_SAIAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_SAIAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
