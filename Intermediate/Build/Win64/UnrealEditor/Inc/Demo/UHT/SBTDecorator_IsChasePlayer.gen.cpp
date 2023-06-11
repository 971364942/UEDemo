// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/AI/SBTDecorator_IsChasePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBTDecorator_IsChasePlayer() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	DEMO_API UClass* Z_Construct_UClass_USBTDecorator_IsChasePlayer();
	DEMO_API UClass* Z_Construct_UClass_USBTDecorator_IsChasePlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void USBTDecorator_IsChasePlayer::StaticRegisterNativesUSBTDecorator_IsChasePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USBTDecorator_IsChasePlayer);
	UClass* Z_Construct_UClass_USBTDecorator_IsChasePlayer_NoRegister()
	{
		return USBTDecorator_IsChasePlayer::StaticClass();
	}
	struct Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsChasePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IsChasePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChaseDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/SBTDecorator_IsChasePlayer.h" },
		{ "ModuleRelativePath", "AI/SBTDecorator_IsChasePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::NewProp_IsChasePlayer_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "AI/SBTDecorator_IsChasePlayer.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::NewProp_IsChasePlayer = { "IsChasePlayer", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBTDecorator_IsChasePlayer, IsChasePlayer), METADATA_PARAMS(Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::NewProp_IsChasePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::NewProp_IsChasePlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::NewProp_ChaseDistance_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "AI/SBTDecorator_IsChasePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::NewProp_ChaseDistance = { "ChaseDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBTDecorator_IsChasePlayer, ChaseDistance), METADATA_PARAMS(Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::NewProp_ChaseDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::NewProp_ChaseDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::NewProp_IsChasePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::NewProp_ChaseDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBTDecorator_IsChasePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::ClassParams = {
		&USBTDecorator_IsChasePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBTDecorator_IsChasePlayer()
	{
		if (!Z_Registration_Info_UClass_USBTDecorator_IsChasePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USBTDecorator_IsChasePlayer.OuterSingleton, Z_Construct_UClass_USBTDecorator_IsChasePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USBTDecorator_IsChasePlayer.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USBTDecorator_IsChasePlayer>()
	{
		return USBTDecorator_IsChasePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBTDecorator_IsChasePlayer);
	USBTDecorator_IsChasePlayer::~USBTDecorator_IsChasePlayer() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_SBTDecorator_IsChasePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_SBTDecorator_IsChasePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USBTDecorator_IsChasePlayer, USBTDecorator_IsChasePlayer::StaticClass, TEXT("USBTDecorator_IsChasePlayer"), &Z_Registration_Info_UClass_USBTDecorator_IsChasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USBTDecorator_IsChasePlayer), 172098318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_SBTDecorator_IsChasePlayer_h_1442345993(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_SBTDecorator_IsChasePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_SBTDecorator_IsChasePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
