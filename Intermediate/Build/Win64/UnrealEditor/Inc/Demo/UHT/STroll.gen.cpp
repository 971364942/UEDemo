// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/AI/STroll.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTroll() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_ASTroll();
	DEMO_API UClass* Z_Construct_UClass_ASTroll_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_USAIAttributeSet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(ASTroll::execTrollDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrollDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASTroll::execOnPawnSee)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnSee(Z_Param_Pawn);
		P_NATIVE_END;
	}
	struct STroll_eventK2_OnHealthChanged_Parms
	{
		AActor* Actor;
	};
	static FName NAME_ASTroll_K2_OnHealthChanged = FName(TEXT("K2_OnHealthChanged"));
	void ASTroll::K2_OnHealthChanged(AActor* Actor)
	{
		STroll_eventK2_OnHealthChanged_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_ASTroll_K2_OnHealthChanged),&Parms);
	}
	static FName NAME_ASTroll_K2_TrollDeath = FName(TEXT("K2_TrollDeath"));
	void ASTroll::K2_TrollDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASTroll_K2_TrollDeath),NULL);
	}
	void ASTroll::StaticRegisterNativesASTroll()
	{
		UClass* Class = ASTroll::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnSee", &ASTroll::execOnPawnSee },
			{ "TrollDeath", &ASTroll::execTrollDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASTroll_K2_OnHealthChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTroll_K2_OnHealthChanged_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(STroll_eventK2_OnHealthChanged_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTroll_K2_OnHealthChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTroll_K2_OnHealthChanged_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTroll_K2_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/STroll.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTroll_K2_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTroll, nullptr, "K2_OnHealthChanged", nullptr, nullptr, sizeof(STroll_eventK2_OnHealthChanged_Parms), Z_Construct_UFunction_ASTroll_K2_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTroll_K2_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTroll_K2_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTroll_K2_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTroll_K2_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTroll_K2_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASTroll_K2_TrollDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTroll_K2_TrollDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/STroll.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTroll_K2_TrollDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTroll, nullptr, "K2_TrollDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTroll_K2_TrollDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTroll_K2_TrollDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTroll_K2_TrollDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTroll_K2_TrollDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASTroll_OnPawnSee_Statics
	{
		struct STroll_eventOnPawnSee_Parms
		{
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTroll_OnPawnSee_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(STroll_eventOnPawnSee_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTroll_OnPawnSee_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTroll_OnPawnSee_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTroll_OnPawnSee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/STroll.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTroll_OnPawnSee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTroll, nullptr, "OnPawnSee", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASTroll_OnPawnSee_Statics::STroll_eventOnPawnSee_Parms), Z_Construct_UFunction_ASTroll_OnPawnSee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTroll_OnPawnSee_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTroll_OnPawnSee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTroll_OnPawnSee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTroll_OnPawnSee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTroll_OnPawnSee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASTroll_TrollDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTroll_TrollDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/STroll.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTroll_TrollDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTroll, nullptr, "TrollDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTroll_TrollDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTroll_TrollDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTroll_TrollDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTroll_TrollDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTroll);
	UClass* Z_Construct_UClass_ASTroll_NoRegister()
	{
		return ASTroll::StaticClass();
	}
	struct Z_Construct_UClass_ASTroll_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTroll_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASTroll_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTroll_K2_OnHealthChanged, "K2_OnHealthChanged" }, // 2548887849
		{ &Z_Construct_UFunction_ASTroll_K2_TrollDeath, "K2_TrollDeath" }, // 1717590720
		{ &Z_Construct_UFunction_ASTroll_OnPawnSee, "OnPawnSee" }, // 1746157278
		{ &Z_Construct_UFunction_ASTroll_TrollDeath, "TrollDeath" }, // 2004552931
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTroll_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/STroll.h" },
		{ "ModuleRelativePath", "AI/STroll.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTroll_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GameplayAbilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/STroll.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTroll_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTroll, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTroll_Statics::NewProp_AbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTroll_Statics::NewProp_AbilitySystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTroll_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/STroll.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTroll_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTroll, AttributeSet), Z_Construct_UClass_USAIAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTroll_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTroll_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTroll_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "STroll" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/STroll.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTroll_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTroll, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTroll_Statics::NewProp_PawnSensingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTroll_Statics::NewProp_PawnSensingComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTroll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTroll_Statics::NewProp_AbilitySystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTroll_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTroll_Statics::NewProp_PawnSensingComp,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASTroll_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASTroll, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTroll_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTroll>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTroll_Statics::ClassParams = {
		&ASTroll::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASTroll_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTroll_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTroll_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTroll_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTroll()
	{
		if (!Z_Registration_Info_UClass_ASTroll.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTroll.OuterSingleton, Z_Construct_UClass_ASTroll_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASTroll.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<ASTroll>()
	{
		return ASTroll::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTroll);
	ASTroll::~ASTroll() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_STroll_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_STroll_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASTroll, ASTroll::StaticClass, TEXT("ASTroll"), &Z_Registration_Info_UClass_ASTroll, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTroll), 4278872355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_STroll_h_2402883981(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_STroll_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_AI_STroll_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
