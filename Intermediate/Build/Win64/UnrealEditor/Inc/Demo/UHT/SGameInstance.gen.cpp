// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Framework/SGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameInstance() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_USGameInstance();
	DEMO_API UClass* Z_Construct_UClass_USGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void USGameInstance::StaticRegisterNativesUSGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USGameInstance);
	UClass* Z_Construct_UClass_USGameInstance_NoRegister()
	{
		return USGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Framework/SGameInstance.h" },
		{ "ModuleRelativePath", "Framework/SGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USGameInstance_Statics::ClassParams = {
		&USGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USGameInstance()
	{
		if (!Z_Registration_Info_UClass_USGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGameInstance.OuterSingleton, Z_Construct_UClass_USGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USGameInstance.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USGameInstance>()
	{
		return USGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USGameInstance);
	USGameInstance::~USGameInstance() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USGameInstance, USGameInstance::StaticClass, TEXT("USGameInstance"), &Z_Registration_Info_UClass_USGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGameInstance), 4095515939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameInstance_h_2337494935(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
