// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Inventory/SItemActor.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSItemActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEMO_API UClass* Z_Construct_UClass_ASItemActor();
	DEMO_API UClass* Z_Construct_UClass_ASItemActor_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_USWorldUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(ASItemActor::execHidePickupTipsWidget)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HidePickupTipsWidget(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASItemActor::execShowPickupTipsWidget)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPickupTipsWidget(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASItemActor::execPickUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickUp();
		P_NATIVE_END;
	}
	static FName NAME_ASItemActor_K2_PuckUp = FName(TEXT("K2_PuckUp"));
	void ASItemActor::K2_PuckUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASItemActor_K2_PuckUp),NULL);
	}
	void ASItemActor::StaticRegisterNativesASItemActor()
	{
		UClass* Class = ASItemActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HidePickupTipsWidget", &ASItemActor::execHidePickupTipsWidget },
			{ "PickUp", &ASItemActor::execPickUp },
			{ "ShowPickupTipsWidget", &ASItemActor::execShowPickupTipsWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics
	{
		struct SItemActor_eventHidePickupTipsWidget_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SItemActor_eventHidePickupTipsWidget_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SItemActor_eventHidePickupTipsWidget_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SItemActor_eventHidePickupTipsWidget_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SItemActor_eventHidePickupTipsWidget_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/SItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASItemActor, nullptr, "HidePickupTipsWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::SItemActor_eventHidePickupTipsWidget_Parms), Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASItemActor_K2_PuckUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASItemActor_K2_PuckUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/SItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASItemActor_K2_PuckUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASItemActor, nullptr, "K2_PuckUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASItemActor_K2_PuckUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASItemActor_K2_PuckUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASItemActor_K2_PuckUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASItemActor_K2_PuckUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASItemActor_PickUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASItemActor_PickUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/SItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASItemActor_PickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASItemActor, nullptr, "PickUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASItemActor_PickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASItemActor_PickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASItemActor_PickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASItemActor_PickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics
	{
		struct SItemActor_eventShowPickupTipsWidget_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SItemActor_eventShowPickupTipsWidget_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SItemActor_eventShowPickupTipsWidget_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SItemActor_eventShowPickupTipsWidget_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SItemActor_eventShowPickupTipsWidget_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SItemActor_eventShowPickupTipsWidget_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SItemActor_eventShowPickupTipsWidget_Parms), &Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SItemActor_eventShowPickupTipsWidget_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/SItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASItemActor, nullptr, "ShowPickupTipsWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::SItemActor_eventShowPickupTipsWidget_Parms), Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASItemActor);
	UClass* Z_Construct_UClass_ASItemActor_NoRegister()
	{
		return ASItemActor::StaticClass();
	}
	struct Z_Construct_UClass_ASItemActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PickRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupTipsWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PickupTipsWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollisionComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASItemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASItemActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASItemActor_HidePickupTipsWidget, "HidePickupTipsWidget" }, // 3295316429
		{ &Z_Construct_UFunction_ASItemActor_K2_PuckUp, "K2_PuckUp" }, // 939667458
		{ &Z_Construct_UFunction_ASItemActor_PickUp, "PickUp" }, // 1080023029
		{ &Z_Construct_UFunction_ASItemActor_ShowPickupTipsWidget, "ShowPickupTipsWidget" }, // 1660353621
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/SItemActor.h" },
		{ "ModuleRelativePath", "Inventory/SItemActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemActor_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Inventory/SItemActor.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASItemActor_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASItemActor, ItemID), METADATA_PARAMS(Z_Construct_UClass_ASItemActor_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemActor_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemActor_Statics::NewProp_PickRange_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Inventory/SItemActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASItemActor_Statics::NewProp_PickRange = { "PickRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASItemActor, PickRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASItemActor_Statics::NewProp_PickRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemActor_Statics::NewProp_PickRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemActor_Statics::NewProp_PickupTipsWidget_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Inventory/SItemActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASItemActor_Statics::NewProp_PickupTipsWidget = { "PickupTipsWidget", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASItemActor, PickupTipsWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_USWorldUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASItemActor_Statics::NewProp_PickupTipsWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemActor_Statics::NewProp_PickupTipsWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemActor_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/SItemActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASItemActor_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASItemActor, Widget), Z_Construct_UClass_USWorldUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASItemActor_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemActor_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemActor_Statics::NewProp_WidgetOffset_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Inventory/SItemActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASItemActor_Statics::NewProp_WidgetOffset = { "WidgetOffset", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASItemActor, WidgetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASItemActor_Statics::NewProp_WidgetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemActor_Statics::NewProp_WidgetOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemActor_Statics::NewProp_ItemMeshComp_MetaData[] = {
		{ "Category", "SItemActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/SItemActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASItemActor_Statics::NewProp_ItemMeshComp = { "ItemMeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASItemActor, ItemMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASItemActor_Statics::NewProp_ItemMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemActor_Statics::NewProp_ItemMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASItemActor_Statics::NewProp_BoxCollisionComp_MetaData[] = {
		{ "Category", "SItemActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/SItemActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASItemActor_Statics::NewProp_BoxCollisionComp = { "BoxCollisionComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASItemActor, BoxCollisionComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASItemActor_Statics::NewProp_BoxCollisionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemActor_Statics::NewProp_BoxCollisionComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASItemActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASItemActor_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASItemActor_Statics::NewProp_PickRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASItemActor_Statics::NewProp_PickupTipsWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASItemActor_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASItemActor_Statics::NewProp_WidgetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASItemActor_Statics::NewProp_ItemMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASItemActor_Statics::NewProp_BoxCollisionComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASItemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASItemActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASItemActor_Statics::ClassParams = {
		&ASItemActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASItemActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASItemActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASItemActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASItemActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASItemActor()
	{
		if (!Z_Registration_Info_UClass_ASItemActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASItemActor.OuterSingleton, Z_Construct_UClass_ASItemActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASItemActor.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<ASItemActor>()
	{
		return ASItemActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASItemActor);
	ASItemActor::~ASItemActor() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASItemActor, ASItemActor::StaticClass, TEXT("ASItemActor"), &Z_Registration_Info_UClass_ASItemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASItemActor), 43987454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_2123306236(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
