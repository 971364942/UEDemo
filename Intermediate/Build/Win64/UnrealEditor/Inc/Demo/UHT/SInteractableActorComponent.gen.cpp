// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Interactable/SInteractableActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSInteractableActorComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEMO_API UClass* Z_Construct_UClass_USInteractableActorComponent();
	DEMO_API UClass* Z_Construct_UClass_USInteractableActorComponent_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_USWorldUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(USInteractableActorComponent::execServerLostFocusedActor)
	{
		P_GET_OBJECT(AActor,Z_Param_InFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerLostFocusedActor_Implementation(Z_Param_InFocus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USInteractableActorComponent::execServerInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_InFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerInteract_Implementation(Z_Param_InFocus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USInteractableActorComponent::execPrimaryInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrimaryInteract();
		P_NATIVE_END;
	}
	struct SInteractableActorComponent_eventServerInteract_Parms
	{
		AActor* InFocus;
	};
	struct SInteractableActorComponent_eventServerLostFocusedActor_Parms
	{
		AActor* InFocus;
	};
	static FName NAME_USInteractableActorComponent_ServerInteract = FName(TEXT("ServerInteract"));
	void USInteractableActorComponent::ServerInteract(AActor* InFocus)
	{
		SInteractableActorComponent_eventServerInteract_Parms Parms;
		Parms.InFocus=InFocus;
		ProcessEvent(FindFunctionChecked(NAME_USInteractableActorComponent_ServerInteract),&Parms);
	}
	static FName NAME_USInteractableActorComponent_ServerLostFocusedActor = FName(TEXT("ServerLostFocusedActor"));
	void USInteractableActorComponent::ServerLostFocusedActor(AActor* InFocus)
	{
		SInteractableActorComponent_eventServerLostFocusedActor_Parms Parms;
		Parms.InFocus=InFocus;
		ProcessEvent(FindFunctionChecked(NAME_USInteractableActorComponent_ServerLostFocusedActor),&Parms);
	}
	void USInteractableActorComponent::StaticRegisterNativesUSInteractableActorComponent()
	{
		UClass* Class = USInteractableActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrimaryInteract", &USInteractableActorComponent::execPrimaryInteract },
			{ "ServerInteract", &USInteractableActorComponent::execServerInteract },
			{ "ServerLostFocusedActor", &USInteractableActorComponent::execServerLostFocusedActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USInteractableActorComponent_PrimaryInteract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USInteractableActorComponent_PrimaryInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable/SInteractableActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USInteractableActorComponent_PrimaryInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInteractableActorComponent, nullptr, "PrimaryInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USInteractableActorComponent_PrimaryInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USInteractableActorComponent_PrimaryInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USInteractableActorComponent_PrimaryInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USInteractableActorComponent_PrimaryInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USInteractableActorComponent_ServerInteract_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USInteractableActorComponent_ServerInteract_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SInteractableActorComponent_eventServerInteract_Parms, InFocus), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USInteractableActorComponent_ServerInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USInteractableActorComponent_ServerInteract_Statics::NewProp_InFocus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USInteractableActorComponent_ServerInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable/SInteractableActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USInteractableActorComponent_ServerInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInteractableActorComponent, nullptr, "ServerInteract", nullptr, nullptr, sizeof(SInteractableActorComponent_eventServerInteract_Parms), Z_Construct_UFunction_USInteractableActorComponent_ServerInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USInteractableActorComponent_ServerInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USInteractableActorComponent_ServerInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USInteractableActorComponent_ServerInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USInteractableActorComponent_ServerInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USInteractableActorComponent_ServerInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SInteractableActorComponent_eventServerLostFocusedActor_Parms, InFocus), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor_Statics::NewProp_InFocus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable/SInteractableActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInteractableActorComponent, nullptr, "ServerLostFocusedActor", nullptr, nullptr, sizeof(SInteractableActorComponent_eventServerLostFocusedActor_Parms), Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USInteractableActorComponent);
	UClass* Z_Construct_UClass_USInteractableActorComponent_NoRegister()
	{
		return USInteractableActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_USInteractableActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TraceDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannelArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannelArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionChannelArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWidgetInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultWidgetInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastTickFocusedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastTickFocusedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USInteractableActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USInteractableActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USInteractableActorComponent_PrimaryInteract, "PrimaryInteract" }, // 2034427527
		{ &Z_Construct_UFunction_USInteractableActorComponent_ServerInteract, "ServerInteract" }, // 973875071
		{ &Z_Construct_UFunction_USInteractableActorComponent_ServerLostFocusedActor, "ServerLostFocusedActor" }, // 2351493219
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInteractableActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Interactable/SInteractableActorComponent.h" },
		{ "ModuleRelativePath", "Interactable/SInteractableActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_DefaultWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Interactable/SInteractableActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_DefaultWidgetClass = { "DefaultWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USInteractableActorComponent, DefaultWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USWorldUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_DefaultWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_DefaultWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Interactable/SInteractableActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USInteractableActorComponent, TraceRadius), METADATA_PARAMS(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_TraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_TraceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Interactable/SInteractableActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USInteractableActorComponent, TraceDistance), METADATA_PARAMS(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_TraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_TraceDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_CollisionChannelArray_Inner = { "CollisionChannelArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_CollisionChannelArray_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Interactable/SInteractableActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_CollisionChannelArray = { "CollisionChannelArray", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USInteractableActorComponent, CollisionChannelArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_CollisionChannelArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_CollisionChannelArray_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_FocusedActor_MetaData[] = {
		{ "ModuleRelativePath", "Interactable/SInteractableActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_FocusedActor = { "FocusedActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USInteractableActorComponent, FocusedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_FocusedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_FocusedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_DefaultWidgetInstance_MetaData[] = {
		{ "Category", "SInteractableActorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactable/SInteractableActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_DefaultWidgetInstance = { "DefaultWidgetInstance", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USInteractableActorComponent, DefaultWidgetInstance), Z_Construct_UClass_USWorldUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_DefaultWidgetInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_DefaultWidgetInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_LastTickFocusedActor_MetaData[] = {
		{ "ModuleRelativePath", "Interactable/SInteractableActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_LastTickFocusedActor = { "LastTickFocusedActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USInteractableActorComponent, LastTickFocusedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_LastTickFocusedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_LastTickFocusedActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USInteractableActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_DefaultWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_TraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_TraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_CollisionChannelArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_CollisionChannelArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_FocusedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_DefaultWidgetInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInteractableActorComponent_Statics::NewProp_LastTickFocusedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USInteractableActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USInteractableActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USInteractableActorComponent_Statics::ClassParams = {
		&USInteractableActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USInteractableActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USInteractableActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USInteractableActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USInteractableActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USInteractableActorComponent()
	{
		if (!Z_Registration_Info_UClass_USInteractableActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USInteractableActorComponent.OuterSingleton, Z_Construct_UClass_USInteractableActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USInteractableActorComponent.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USInteractableActorComponent>()
	{
		return USInteractableActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USInteractableActorComponent);
	USInteractableActorComponent::~USInteractableActorComponent() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USInteractableActorComponent, USInteractableActorComponent::StaticClass, TEXT("USInteractableActorComponent"), &Z_Registration_Info_UClass_USInteractableActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USInteractableActorComponent), 4081594839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_1305253620(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
