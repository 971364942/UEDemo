// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/PlayerCharacter/SPlayerAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerAttributeSet() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_USAttributeSet();
	DEMO_API UClass* Z_Construct_UClass_USPlayerAttributeSet();
	DEMO_API UClass* Z_Construct_UClass_USPlayerAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(USPlayerAttributeSet::execOnRep_MoveSeep)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MoveSeep(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPlayerAttributeSet::execOnRep_MaxPhysical)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxPhysical(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPlayerAttributeSet::execOnRep_Physical)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Physical(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	void USPlayerAttributeSet::StaticRegisterNativesUSPlayerAttributeSet()
	{
		UClass* Class = USPlayerAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_MaxPhysical", &USPlayerAttributeSet::execOnRep_MaxPhysical },
			{ "OnRep_MoveSeep", &USPlayerAttributeSet::execOnRep_MoveSeep },
			{ "OnRep_Physical", &USPlayerAttributeSet::execOnRep_Physical },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics
	{
		struct SPlayerAttributeSet_eventOnRep_MaxPhysical_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SPlayerAttributeSet_eventOnRep_MaxPhysical_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter/SPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPlayerAttributeSet, nullptr, "OnRep_MaxPhysical", nullptr, nullptr, sizeof(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::SPlayerAttributeSet_eventOnRep_MaxPhysical_Parms), Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics
	{
		struct SPlayerAttributeSet_eventOnRep_MoveSeep_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SPlayerAttributeSet_eventOnRep_MoveSeep_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter/SPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPlayerAttributeSet, nullptr, "OnRep_MoveSeep", nullptr, nullptr, sizeof(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::SPlayerAttributeSet_eventOnRep_MoveSeep_Parms), Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics
	{
		struct SPlayerAttributeSet_eventOnRep_Physical_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SPlayerAttributeSet_eventOnRep_Physical_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter/SPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPlayerAttributeSet, nullptr, "OnRep_Physical", nullptr, nullptr, sizeof(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::SPlayerAttributeSet_eventOnRep_Physical_Parms), Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USPlayerAttributeSet);
	UClass* Z_Construct_UClass_USPlayerAttributeSet_NoRegister()
	{
		return USPlayerAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USPlayerAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Physical_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Physical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPhysical_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPhysical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSeep_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveSeep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USPlayerAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USPlayerAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MaxPhysical, "OnRep_MaxPhysical" }, // 3856187078
		{ &Z_Construct_UFunction_USPlayerAttributeSet_OnRep_MoveSeep, "OnRep_MoveSeep" }, // 2137539935
		{ &Z_Construct_UFunction_USPlayerAttributeSet_OnRep_Physical, "OnRep_Physical" }, // 4140675190
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPlayerAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerCharacter/SPlayerAttributeSet.h" },
		{ "ModuleRelativePath", "PlayerCharacter/SPlayerAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_Physical_MetaData[] = {
		{ "Category", "Physical" },
		{ "ModuleRelativePath", "PlayerCharacter/SPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_Physical = { "Physical", "OnRep_Physical", (EPropertyFlags)0x0010000100010025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USPlayerAttributeSet, Physical), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_Physical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_Physical_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_MaxPhysical_MetaData[] = {
		{ "Category", "Physical" },
		{ "ModuleRelativePath", "PlayerCharacter/SPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_MaxPhysical = { "MaxPhysical", "OnRep_MaxPhysical", (EPropertyFlags)0x0010000100010025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USPlayerAttributeSet, MaxPhysical), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_MaxPhysical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_MaxPhysical_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_MoveSeep_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "PlayerCharacter/SPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_MoveSeep = { "MoveSeep", "OnRep_MoveSeep", (EPropertyFlags)0x0010000100010025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USPlayerAttributeSet, MoveSeep), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_MoveSeep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_MoveSeep_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USPlayerAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_Physical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_MaxPhysical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPlayerAttributeSet_Statics::NewProp_MoveSeep,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USPlayerAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USPlayerAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USPlayerAttributeSet_Statics::ClassParams = {
		&USPlayerAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USPlayerAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USPlayerAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USPlayerAttributeSet()
	{
		if (!Z_Registration_Info_UClass_USPlayerAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USPlayerAttributeSet.OuterSingleton, Z_Construct_UClass_USPlayerAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USPlayerAttributeSet.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USPlayerAttributeSet>()
	{
		return USPlayerAttributeSet::StaticClass();
	}

	void USPlayerAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Physical(TEXT("Physical"));
		static const FName Name_MaxPhysical(TEXT("MaxPhysical"));
		static const FName Name_MoveSeep(TEXT("MoveSeep"));

		const bool bIsValid = true
			&& Name_Physical == ClassReps[(int32)ENetFields_Private::Physical].Property->GetFName()
			&& Name_MaxPhysical == ClassReps[(int32)ENetFields_Private::MaxPhysical].Property->GetFName()
			&& Name_MoveSeep == ClassReps[(int32)ENetFields_Private::MoveSeep].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USPlayerAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USPlayerAttributeSet);
	USPlayerAttributeSet::~USPlayerAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USPlayerAttributeSet, USPlayerAttributeSet::StaticClass, TEXT("USPlayerAttributeSet"), &Z_Registration_Info_UClass_USPlayerAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USPlayerAttributeSet), 1369146062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_107225883(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
