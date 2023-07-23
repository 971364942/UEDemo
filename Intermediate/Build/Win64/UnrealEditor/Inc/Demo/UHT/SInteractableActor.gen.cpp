// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Interactable/SInteractableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSInteractableActor() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_ASInteractableActor();
	DEMO_API UClass* Z_Construct_UClass_ASInteractableActor_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_USInteractableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void ASInteractableActor::StaticRegisterNativesASInteractableActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASInteractableActor);
	UClass* Z_Construct_UClass_ASInteractableActor_NoRegister()
	{
		return ASInteractableActor::StaticClass();
	}
	struct Z_Construct_UClass_ASInteractableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InteractText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASInteractableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASInteractableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactable/SInteractableActor.h" },
		{ "ModuleRelativePath", "Interactable/SInteractableActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASInteractableActor_Statics::NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "SInteractableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactable/SInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASInteractableActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASInteractableActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASInteractableActor_Statics::NewProp_StaticMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASInteractableActor_Statics::NewProp_StaticMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASInteractableActor_Statics::NewProp_InteractText_MetaData[] = {
		{ "Category", "InteractText" },
		{ "ModuleRelativePath", "Interactable/SInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASInteractableActor_Statics::NewProp_InteractText = { "InteractText", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASInteractableActor, InteractText), METADATA_PARAMS(Z_Construct_UClass_ASInteractableActor_Statics::NewProp_InteractText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASInteractableActor_Statics::NewProp_InteractText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASInteractableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASInteractableActor_Statics::NewProp_StaticMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASInteractableActor_Statics::NewProp_InteractText,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASInteractableActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(ASInteractableActor, ISInteractableInterface), false },  // 3133808498
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASInteractableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASInteractableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASInteractableActor_Statics::ClassParams = {
		&ASInteractableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASInteractableActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASInteractableActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASInteractableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASInteractableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASInteractableActor()
	{
		if (!Z_Registration_Info_UClass_ASInteractableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASInteractableActor.OuterSingleton, Z_Construct_UClass_ASInteractableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASInteractableActor.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<ASInteractableActor>()
	{
		return ASInteractableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASInteractableActor);
	ASInteractableActor::~ASInteractableActor() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASInteractableActor, ASInteractableActor::StaticClass, TEXT("ASInteractableActor"), &Z_Registration_Info_UClass_ASInteractableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASInteractableActor), 1175026323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_3337200755(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
