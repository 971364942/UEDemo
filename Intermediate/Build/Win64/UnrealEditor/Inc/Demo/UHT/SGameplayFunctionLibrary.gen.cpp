// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Framework/SGameplayFunctionLibrary.h"
#include "Demo/Inventory/SInventoryStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameplayFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEMO_API UClass* Z_Construct_UClass_USGameplayFunctionLibrary();
	DEMO_API UClass* Z_Construct_UClass_USGameplayFunctionLibrary_NoRegister();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FSItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics
	{
		struct SGameplayFunctionLibrary_eventOnCompletionChange_Parms
		{
			bool bCompletion;
			int32 TableID;
		};
		static void NewProp_bCompletion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompletion;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TableID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::NewProp_bCompletion_SetBit(void* Obj)
	{
		((SGameplayFunctionLibrary_eventOnCompletionChange_Parms*)Obj)->bCompletion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::NewProp_bCompletion = { "bCompletion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SGameplayFunctionLibrary_eventOnCompletionChange_Parms), &Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::NewProp_bCompletion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::NewProp_TableID = { "TableID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SGameplayFunctionLibrary_eventOnCompletionChange_Parms, TableID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::NewProp_bCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::NewProp_TableID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Framework/SGameplayFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameplayFunctionLibrary, nullptr, "OnCompletionChange__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::SGameplayFunctionLibrary_eventOnCompletionChange_Parms), Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USGameplayFunctionLibrary::execGetItemBy_ID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemID);
		P_GET_OBJECT(UDataTable,Z_Param_TaskTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSItem*)Z_Param__Result=USGameplayFunctionLibrary::GetItemBy_ID(Z_Param_ItemID,Z_Param_TaskTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USGameplayFunctionLibrary::execSetTableTaskCompletionByID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TableID);
		P_GET_UBOOL(Z_Param_IsCompletion);
		P_GET_OBJECT(UDataTable,Z_Param_TaskTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		USGameplayFunctionLibrary::SetTableTaskCompletionByID(Z_Param_TableID,Z_Param_IsCompletion,Z_Param_TaskTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USGameplayFunctionLibrary::execSetOnCompletionChange)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnCompletionChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		USGameplayFunctionLibrary::SetOnCompletionChange(FOnCompletionChange(Z_Param_OnCompletionChange));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USGameplayFunctionLibrary::execAssertTrigger)
	{
		P_GET_UBOOL(Z_Param_bIsAssert);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssertText);
		P_FINISH;
		P_NATIVE_BEGIN;
		USGameplayFunctionLibrary::AssertTrigger(Z_Param_bIsAssert,Z_Param_AssertText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USGameplayFunctionLibrary::execAttackTurnTrace)
	{
		P_GET_OBJECT(AActor,Z_Param_SourceActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=USGameplayFunctionLibrary::AttackTurnTrace(Z_Param_SourceActor,Z_Param_Radius);
		P_NATIVE_END;
	}
	void USGameplayFunctionLibrary::StaticRegisterNativesUSGameplayFunctionLibrary()
	{
		UClass* Class = USGameplayFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssertTrigger", &USGameplayFunctionLibrary::execAssertTrigger },
			{ "AttackTurnTrace", &USGameplayFunctionLibrary::execAttackTurnTrace },
			{ "GetItemBy_ID", &USGameplayFunctionLibrary::execGetItemBy_ID },
			{ "SetOnCompletionChange", &USGameplayFunctionLibrary::execSetOnCompletionChange },
			{ "SetTableTaskCompletionByID", &USGameplayFunctionLibrary::execSetTableTaskCompletionByID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics
	{
		struct SGameplayFunctionLibrary_eventAssertTrigger_Parms
		{
			bool bIsAssert;
			FString AssertText;
		};
		static void NewProp_bIsAssert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAssert;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssertText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::NewProp_bIsAssert_SetBit(void* Obj)
	{
		((SGameplayFunctionLibrary_eventAssertTrigger_Parms*)Obj)->bIsAssert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::NewProp_bIsAssert = { "bIsAssert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SGameplayFunctionLibrary_eventAssertTrigger_Parms), &Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::NewProp_bIsAssert_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::NewProp_AssertText = { "AssertText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SGameplayFunctionLibrary_eventAssertTrigger_Parms, AssertText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::NewProp_bIsAssert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::NewProp_AssertText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assert" },
		{ "ModuleRelativePath", "Framework/SGameplayFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameplayFunctionLibrary, nullptr, "AssertTrigger", nullptr, nullptr, sizeof(Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::SGameplayFunctionLibrary_eventAssertTrigger_Parms), Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics
	{
		struct SGameplayFunctionLibrary_eventAttackTurnTrace_Parms
		{
			AActor* SourceActor;
			float Radius;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SGameplayFunctionLibrary_eventAttackTurnTrace_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SGameplayFunctionLibrary_eventAttackTurnTrace_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SGameplayFunctionLibrary_eventAttackTurnTrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::NewProp_SourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Framework/SGameplayFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameplayFunctionLibrary, nullptr, "AttackTurnTrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::SGameplayFunctionLibrary_eventAttackTurnTrace_Parms), Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics
	{
		struct SGameplayFunctionLibrary_eventGetItemBy_ID_Parms
		{
			int32 ItemID;
			UDataTable* TaskTable;
			FSItem ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskTable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SGameplayFunctionLibrary_eventGetItemBy_ID_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::NewProp_TaskTable = { "TaskTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SGameplayFunctionLibrary_eventGetItemBy_ID_Parms, TaskTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SGameplayFunctionLibrary_eventGetItemBy_ID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSItem, METADATA_PARAMS(nullptr, 0) }; // 3710124915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::NewProp_TaskTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Framework/SGameplayFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameplayFunctionLibrary, nullptr, "GetItemBy_ID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::SGameplayFunctionLibrary_eventGetItemBy_ID_Parms), Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange_Statics
	{
		struct SGameplayFunctionLibrary_eventSetOnCompletionChange_Parms
		{
			FScriptDelegate OnCompletionChange;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnCompletionChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange_Statics::NewProp_OnCompletionChange = { "OnCompletionChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SGameplayFunctionLibrary_eventSetOnCompletionChange_Parms, OnCompletionChange), Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1387759799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange_Statics::NewProp_OnCompletionChange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "Framework/SGameplayFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameplayFunctionLibrary, nullptr, "SetOnCompletionChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange_Statics::SGameplayFunctionLibrary_eventSetOnCompletionChange_Parms), Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics
	{
		struct SGameplayFunctionLibrary_eventSetTableTaskCompletionByID_Parms
		{
			int32 TableID;
			bool IsCompletion;
			UDataTable* TaskTable;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TableID;
		static void NewProp_IsCompletion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCompletion;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::NewProp_TableID = { "TableID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SGameplayFunctionLibrary_eventSetTableTaskCompletionByID_Parms, TableID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::NewProp_IsCompletion_SetBit(void* Obj)
	{
		((SGameplayFunctionLibrary_eventSetTableTaskCompletionByID_Parms*)Obj)->IsCompletion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::NewProp_IsCompletion = { "IsCompletion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SGameplayFunctionLibrary_eventSetTableTaskCompletionByID_Parms), &Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::NewProp_IsCompletion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::NewProp_TaskTable = { "TaskTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SGameplayFunctionLibrary_eventSetTableTaskCompletionByID_Parms, TaskTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::NewProp_TableID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::NewProp_IsCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::NewProp_TaskTable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "Framework/SGameplayFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameplayFunctionLibrary, nullptr, "SetTableTaskCompletionByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::SGameplayFunctionLibrary_eventSetTableTaskCompletionByID_Parms), Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USGameplayFunctionLibrary);
	UClass* Z_Construct_UClass_USGameplayFunctionLibrary_NoRegister()
	{
		return USGameplayFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USGameplayFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USGameplayFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USGameplayFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USGameplayFunctionLibrary_AssertTrigger, "AssertTrigger" }, // 1768440309
		{ &Z_Construct_UFunction_USGameplayFunctionLibrary_AttackTurnTrace, "AttackTurnTrace" }, // 42069118
		{ &Z_Construct_UFunction_USGameplayFunctionLibrary_GetItemBy_ID, "GetItemBy_ID" }, // 3204271865
		{ &Z_Construct_UDelegateFunction_USGameplayFunctionLibrary_OnCompletionChange__DelegateSignature, "OnCompletionChange__DelegateSignature" }, // 1387759799
		{ &Z_Construct_UFunction_USGameplayFunctionLibrary_SetOnCompletionChange, "SetOnCompletionChange" }, // 3807278129
		{ &Z_Construct_UFunction_USGameplayFunctionLibrary_SetTableTaskCompletionByID, "SetTableTaskCompletionByID" }, // 2933652934
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameplayFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Framework/SGameplayFunctionLibrary.h" },
		{ "ModuleRelativePath", "Framework/SGameplayFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USGameplayFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGameplayFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USGameplayFunctionLibrary_Statics::ClassParams = {
		&USGameplayFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USGameplayFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USGameplayFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USGameplayFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USGameplayFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGameplayFunctionLibrary.OuterSingleton, Z_Construct_UClass_USGameplayFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USGameplayFunctionLibrary.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USGameplayFunctionLibrary>()
	{
		return USGameplayFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USGameplayFunctionLibrary);
	USGameplayFunctionLibrary::~USGameplayFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USGameplayFunctionLibrary, USGameplayFunctionLibrary::StaticClass, TEXT("USGameplayFunctionLibrary"), &Z_Registration_Info_UClass_USGameplayFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGameplayFunctionLibrary), 1599911308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_2699211043(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
