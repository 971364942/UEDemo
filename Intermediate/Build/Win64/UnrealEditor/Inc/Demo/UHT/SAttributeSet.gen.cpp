// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/GameplayAbility/SAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAttributeSet() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_USAttributeSet();
	DEMO_API UClass* Z_Construct_UClass_USAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(USAttributeSet::execSetAttackMultiplierInternal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttackMultiplierValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttackMultiplierInternal(Z_Param_AttackMultiplierValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAttributeSet::execOnRep_AttackMultiplier)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttackMultiplier(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAttributeSet::execOnRep_Attack)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Attack(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAttributeSet::execOnRep_Defense)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Defense(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	void USAttributeSet::StaticRegisterNativesUSAttributeSet()
	{
		UClass* Class = USAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Attack", &USAttributeSet::execOnRep_Attack },
			{ "OnRep_AttackMultiplier", &USAttributeSet::execOnRep_AttackMultiplier },
			{ "OnRep_Defense", &USAttributeSet::execOnRep_Defense },
			{ "OnRep_Health", &USAttributeSet::execOnRep_Health },
			{ "OnRep_MaxHealth", &USAttributeSet::execOnRep_MaxHealth },
			{ "SetAttackMultiplierInternal", &USAttributeSet::execSetAttackMultiplierInternal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics
	{
		struct SAttributeSet_eventOnRep_Attack_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SAttributeSet_eventOnRep_Attack_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbility/SAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAttributeSet, nullptr, "OnRep_Attack", nullptr, nullptr, sizeof(Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::SAttributeSet_eventOnRep_Attack_Parms), Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAttributeSet_OnRep_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USAttributeSet_OnRep_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics
	{
		struct SAttributeSet_eventOnRep_AttackMultiplier_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SAttributeSet_eventOnRep_AttackMultiplier_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbility/SAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAttributeSet, nullptr, "OnRep_AttackMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::SAttributeSet_eventOnRep_AttackMultiplier_Parms), Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics
	{
		struct SAttributeSet_eventOnRep_Defense_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SAttributeSet_eventOnRep_Defense_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbility/SAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAttributeSet, nullptr, "OnRep_Defense", nullptr, nullptr, sizeof(Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::SAttributeSet_eventOnRep_Defense_Parms), Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAttributeSet_OnRep_Defense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USAttributeSet_OnRep_Defense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics
	{
		struct SAttributeSet_eventOnRep_Health_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SAttributeSet_eventOnRep_Health_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbility/SAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::SAttributeSet_eventOnRep_Health_Parms), Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics
	{
		struct SAttributeSet_eventOnRep_MaxHealth_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SAttributeSet_eventOnRep_MaxHealth_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbility/SAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::SAttributeSet_eventOnRep_MaxHealth_Parms), Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal_Statics
	{
		struct SAttributeSet_eventSetAttackMultiplierInternal_Parms
		{
			float AttackMultiplierValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackMultiplierValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal_Statics::NewProp_AttackMultiplierValue = { "AttackMultiplierValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SAttributeSet_eventSetAttackMultiplierInternal_Parms, AttackMultiplierValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal_Statics::NewProp_AttackMultiplierValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "GameplayAbility/SAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAttributeSet, nullptr, "SetAttackMultiplierInternal", nullptr, nullptr, sizeof(Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal_Statics::SAttributeSet_eventSetAttackMultiplierInternal_Parms), Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USAttributeSet);
	UClass* Z_Construct_UClass_USAttributeSet_NoRegister()
	{
		return USAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Defense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAttributeSet_OnRep_Attack, "OnRep_Attack" }, // 3991344085
		{ &Z_Construct_UFunction_USAttributeSet_OnRep_AttackMultiplier, "OnRep_AttackMultiplier" }, // 1212818186
		{ &Z_Construct_UFunction_USAttributeSet_OnRep_Defense, "OnRep_Defense" }, // 2140136043
		{ &Z_Construct_UFunction_USAttributeSet_OnRep_Health, "OnRep_Health" }, // 3301888590
		{ &Z_Construct_UFunction_USAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 1186615441
		{ &Z_Construct_UFunction_USAttributeSet_SetAttackMultiplierInternal, "SetAttackMultiplierInternal" }, // 2901266886
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayAbility/SAttributeSet.h" },
		{ "ModuleRelativePath", "GameplayAbility/SAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameplayAbility/SAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100010025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeSet_Statics::NewProp_Health_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameplayAbility/SAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100010025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USAttributeSet_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeSet_Statics::NewProp_MaxHealth_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAttributeSet_Statics::NewProp_Defense_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameplayAbility/SAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAttributeSet_Statics::NewProp_Defense = { "Defense", "OnRep_Defense", (EPropertyFlags)0x0010000100010025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USAttributeSet, Defense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USAttributeSet_Statics::NewProp_Defense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeSet_Statics::NewProp_Defense_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAttributeSet_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameplayAbility/SAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAttributeSet_Statics::NewProp_Attack = { "Attack", "OnRep_Attack", (EPropertyFlags)0x0010000100010025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USAttributeSet, Attack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USAttributeSet_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeSet_Statics::NewProp_Attack_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAttributeSet_Statics::NewProp_AttackMultiplier_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameplayAbility/SAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAttributeSet_Statics::NewProp_AttackMultiplier = { "AttackMultiplier", "OnRep_AttackMultiplier", (EPropertyFlags)0x0010000100010025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USAttributeSet, AttackMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USAttributeSet_Statics::NewProp_AttackMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeSet_Statics::NewProp_AttackMultiplier_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAttributeSet_Statics::NewProp_Defense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAttributeSet_Statics::NewProp_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAttributeSet_Statics::NewProp_AttackMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USAttributeSet_Statics::ClassParams = {
		&USAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAttributeSet()
	{
		if (!Z_Registration_Info_UClass_USAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USAttributeSet.OuterSingleton, Z_Construct_UClass_USAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USAttributeSet.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USAttributeSet>()
	{
		return USAttributeSet::StaticClass();
	}

	void USAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_Defense(TEXT("Defense"));
		static const FName Name_Attack(TEXT("Attack"));
		static const FName Name_AttackMultiplier(TEXT("AttackMultiplier"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_Defense == ClassReps[(int32)ENetFields_Private::Defense].Property->GetFName()
			&& Name_Attack == ClassReps[(int32)ENetFields_Private::Attack].Property->GetFName()
			&& Name_AttackMultiplier == ClassReps[(int32)ENetFields_Private::AttackMultiplier].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAttributeSet);
	USAttributeSet::~USAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USAttributeSet, USAttributeSet::StaticClass, TEXT("USAttributeSet"), &Z_Registration_Info_UClass_USAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USAttributeSet), 830211953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_68711202(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
