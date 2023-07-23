// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Interactable/SInteractableCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSInteractableCharacter() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_ASInteractableCharacter();
	DEMO_API UClass* Z_Construct_UClass_ASInteractableCharacter_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_USInteractableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void ASInteractableCharacter::StaticRegisterNativesASInteractableCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASInteractableCharacter);
	UClass* Z_Construct_UClass_ASInteractableCharacter_NoRegister()
	{
		return ASInteractableCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASInteractableCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InteractText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASInteractableCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASInteractableCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Interactable/SInteractableCharacter.h" },
		{ "ModuleRelativePath", "Interactable/SInteractableCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASInteractableCharacter_Statics::NewProp_InteractText_MetaData[] = {
		{ "Category", "InteractText" },
		{ "ModuleRelativePath", "Interactable/SInteractableCharacter.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASInteractableCharacter_Statics::NewProp_InteractText = { "InteractText", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASInteractableCharacter, InteractText), METADATA_PARAMS(Z_Construct_UClass_ASInteractableCharacter_Statics::NewProp_InteractText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASInteractableCharacter_Statics::NewProp_InteractText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASInteractableCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASInteractableCharacter_Statics::NewProp_InteractText,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASInteractableCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(ASInteractableCharacter, ISInteractableInterface), false },  // 3133808498
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASInteractableCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASInteractableCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASInteractableCharacter_Statics::ClassParams = {
		&ASInteractableCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASInteractableCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASInteractableCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASInteractableCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASInteractableCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASInteractableCharacter()
	{
		if (!Z_Registration_Info_UClass_ASInteractableCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASInteractableCharacter.OuterSingleton, Z_Construct_UClass_ASInteractableCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASInteractableCharacter.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<ASInteractableCharacter>()
	{
		return ASInteractableCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASInteractableCharacter);
	ASInteractableCharacter::~ASInteractableCharacter() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASInteractableCharacter, ASInteractableCharacter::StaticClass, TEXT("ASInteractableCharacter"), &Z_Registration_Info_UClass_ASInteractableCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASInteractableCharacter), 649526896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_488854435(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
