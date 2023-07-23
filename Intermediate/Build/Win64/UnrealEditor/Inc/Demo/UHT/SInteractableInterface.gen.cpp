// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Interactable/SInteractableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSInteractableInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	DEMO_API UClass* Z_Construct_UClass_USInteractableInterface();
	DEMO_API UClass* Z_Construct_UClass_USInteractableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(ISInteractableInterface::execLostFocusedActor)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LostFocusedActor_Implementation(Z_Param_InstigatorPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISInteractableInterface::execInteract)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_InstigatorPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISInteractableInterface::execGetInteractText)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInteractText_Implementation(Z_Param_InstigatorPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISInteractableInterface::execOnActorLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorLoaded_Implementation();
		P_NATIVE_END;
	}
	struct SInteractableInterface_eventGetInteractText_Parms
	{
		APawn* InstigatorPawn;
		FText ReturnValue;
	};
	struct SInteractableInterface_eventInteract_Parms
	{
		APawn* InstigatorPawn;
	};
	struct SInteractableInterface_eventLostFocusedActor_Parms
	{
		APawn* InstigatorPawn;
	};
	FText ISInteractableInterface::GetInteractText(APawn* InstigatorPawn)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractText instead.");
		SInteractableInterface_eventGetInteractText_Parms Parms;
		return Parms.ReturnValue;
	}
	void ISInteractableInterface::Interact(APawn* InstigatorPawn)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void ISInteractableInterface::LostFocusedActor(APawn* InstigatorPawn)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LostFocusedActor instead.");
	}
	void ISInteractableInterface::OnActorLoaded()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnActorLoaded instead.");
	}
	void USInteractableInterface::StaticRegisterNativesUSInteractableInterface()
	{
		UClass* Class = USInteractableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInteractText", &ISInteractableInterface::execGetInteractText },
			{ "Interact", &ISInteractableInterface::execInteract },
			{ "LostFocusedActor", &ISInteractableInterface::execLostFocusedActor },
			{ "OnActorLoaded", &ISInteractableInterface::execOnActorLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SInteractableInterface_eventGetInteractText_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SInteractableInterface_eventGetInteractText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics::NewProp_InstigatorPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractText" },
		{ "ModuleRelativePath", "Interactable/SInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInteractableInterface, nullptr, "GetInteractText", nullptr, nullptr, sizeof(SInteractableInterface_eventGetInteractText_Parms), Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USInteractableInterface_GetInteractText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USInteractableInterface_GetInteractText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USInteractableInterface_Interact_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USInteractableInterface_Interact_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SInteractableInterface_eventInteract_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USInteractableInterface_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USInteractableInterface_Interact_Statics::NewProp_InstigatorPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USInteractableInterface_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable/SInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USInteractableInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInteractableInterface, nullptr, "Interact", nullptr, nullptr, sizeof(SInteractableInterface_eventInteract_Parms), Z_Construct_UFunction_USInteractableInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USInteractableInterface_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USInteractableInterface_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USInteractableInterface_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USInteractableInterface_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USInteractableInterface_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USInteractableInterface_LostFocusedActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USInteractableInterface_LostFocusedActor_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SInteractableInterface_eventLostFocusedActor_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USInteractableInterface_LostFocusedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USInteractableInterface_LostFocusedActor_Statics::NewProp_InstigatorPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USInteractableInterface_LostFocusedActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable/SInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USInteractableInterface_LostFocusedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInteractableInterface, nullptr, "LostFocusedActor", nullptr, nullptr, sizeof(SInteractableInterface_eventLostFocusedActor_Parms), Z_Construct_UFunction_USInteractableInterface_LostFocusedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USInteractableInterface_LostFocusedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USInteractableInterface_LostFocusedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USInteractableInterface_LostFocusedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USInteractableInterface_LostFocusedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USInteractableInterface_LostFocusedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USInteractableInterface_OnActorLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USInteractableInterface_OnActorLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable/SInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USInteractableInterface_OnActorLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInteractableInterface, nullptr, "OnActorLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USInteractableInterface_OnActorLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USInteractableInterface_OnActorLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USInteractableInterface_OnActorLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USInteractableInterface_OnActorLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USInteractableInterface);
	UClass* Z_Construct_UClass_USInteractableInterface_NoRegister()
	{
		return USInteractableInterface::StaticClass();
	}
	struct Z_Construct_UClass_USInteractableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USInteractableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USInteractableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USInteractableInterface_GetInteractText, "GetInteractText" }, // 4054650940
		{ &Z_Construct_UFunction_USInteractableInterface_Interact, "Interact" }, // 1365142160
		{ &Z_Construct_UFunction_USInteractableInterface_LostFocusedActor, "LostFocusedActor" }, // 2281855297
		{ &Z_Construct_UFunction_USInteractableInterface_OnActorLoaded, "OnActorLoaded" }, // 3273212398
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInteractableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable/SInteractableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USInteractableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISInteractableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USInteractableInterface_Statics::ClassParams = {
		&USInteractableInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USInteractableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USInteractableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USInteractableInterface()
	{
		if (!Z_Registration_Info_UClass_USInteractableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USInteractableInterface.OuterSingleton, Z_Construct_UClass_USInteractableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USInteractableInterface.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USInteractableInterface>()
	{
		return USInteractableInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USInteractableInterface);
	USInteractableInterface::~USInteractableInterface() {}
	static FName NAME_USInteractableInterface_GetInteractText = FName(TEXT("GetInteractText"));
	FText ISInteractableInterface::Execute_GetInteractText(UObject* O, APawn* InstigatorPawn)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USInteractableInterface::StaticClass()));
		SInteractableInterface_eventGetInteractText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USInteractableInterface_GetInteractText);
		if (Func)
		{
			Parms.InstigatorPawn=InstigatorPawn;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISInteractableInterface*)(O->GetNativeInterfaceAddress(USInteractableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetInteractText_Implementation(InstigatorPawn);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USInteractableInterface_Interact = FName(TEXT("Interact"));
	void ISInteractableInterface::Execute_Interact(UObject* O, APawn* InstigatorPawn)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USInteractableInterface::StaticClass()));
		SInteractableInterface_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USInteractableInterface_Interact);
		if (Func)
		{
			Parms.InstigatorPawn=InstigatorPawn;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISInteractableInterface*)(O->GetNativeInterfaceAddress(USInteractableInterface::StaticClass())))
		{
			I->Interact_Implementation(InstigatorPawn);
		}
	}
	static FName NAME_USInteractableInterface_LostFocusedActor = FName(TEXT("LostFocusedActor"));
	void ISInteractableInterface::Execute_LostFocusedActor(UObject* O, APawn* InstigatorPawn)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USInteractableInterface::StaticClass()));
		SInteractableInterface_eventLostFocusedActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USInteractableInterface_LostFocusedActor);
		if (Func)
		{
			Parms.InstigatorPawn=InstigatorPawn;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISInteractableInterface*)(O->GetNativeInterfaceAddress(USInteractableInterface::StaticClass())))
		{
			I->LostFocusedActor_Implementation(InstigatorPawn);
		}
	}
	static FName NAME_USInteractableInterface_OnActorLoaded = FName(TEXT("OnActorLoaded"));
	void ISInteractableInterface::Execute_OnActorLoaded(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USInteractableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USInteractableInterface_OnActorLoaded);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISInteractableInterface*)(O->GetNativeInterfaceAddress(USInteractableInterface::StaticClass())))
		{
			I->OnActorLoaded_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USInteractableInterface, USInteractableInterface::StaticClass, TEXT("USInteractableInterface"), &Z_Registration_Info_UClass_USInteractableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USInteractableInterface), 3133808498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_3503007222(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
