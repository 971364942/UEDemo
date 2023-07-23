// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Public/STargetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTargetActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEMO_API UClass* Z_Construct_UClass_ASTargetActor();
	DEMO_API UClass* Z_Construct_UClass_ASTargetActor_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_USPlayerAttributeSet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	struct STargetActor_eventK2_OnHealthChanged_Parms
	{
		AActor* K2_Instigator;
	};
	static FName NAME_ASTargetActor_K2_OnHealthChanged = FName(TEXT("K2_OnHealthChanged"));
	void ASTargetActor::K2_OnHealthChanged(AActor* K2_Instigator)
	{
		STargetActor_eventK2_OnHealthChanged_Parms Parms;
		Parms.K2_Instigator=K2_Instigator;
		ProcessEvent(FindFunctionChecked(NAME_ASTargetActor_K2_OnHealthChanged),&Parms);
	}
	void ASTargetActor::StaticRegisterNativesASTargetActor()
	{
	}
	struct Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_K2_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged_Statics::NewProp_K2_Instigator = { "K2_Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(STargetActor_eventK2_OnHealthChanged_Parms, K2_Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged_Statics::NewProp_K2_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/STargetActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTargetActor, nullptr, "K2_OnHealthChanged", nullptr, nullptr, sizeof(STargetActor_eventK2_OnHealthChanged_Parms), Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTargetActor);
	UClass* Z_Construct_UClass_ASTargetActor_NoRegister()
	{
		return ASTargetActor::StaticClass();
	}
	struct Z_Construct_UClass_ASTargetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_MyAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MyAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTargetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASTargetActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTargetActor_K2_OnHealthChanged, "K2_OnHealthChanged" }, // 955287708
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTargetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STargetActor.h" },
		{ "ModuleRelativePath", "Public/STargetActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTargetActor_Statics::NewProp_TargetMesh_MetaData[] = {
		{ "Category", "STargetActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STargetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTargetActor_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTargetActor, TargetMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTargetActor_Statics::NewProp_TargetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTargetActor_Statics::NewProp_TargetMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTargetActor_Statics::NewProp_AbilitySystemComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GameplayAbilites" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STargetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTargetActor_Statics::NewProp_AbilitySystemComp = { "AbilitySystemComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTargetActor, AbilitySystemComp), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTargetActor_Statics::NewProp_AbilitySystemComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTargetActor_Statics::NewProp_AbilitySystemComp_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASTargetActor_Statics::NewProp_MyAbilities_Inner = { "MyAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTargetActor_Statics::NewProp_MyAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/STargetActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASTargetActor_Statics::NewProp_MyAbilities = { "MyAbilities", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTargetActor, MyAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASTargetActor_Statics::NewProp_MyAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTargetActor_Statics::NewProp_MyAbilities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTargetActor_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STargetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTargetActor_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTargetActor, AttributeSet), Z_Construct_UClass_USPlayerAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTargetActor_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTargetActor_Statics::NewProp_AttributeSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTargetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTargetActor_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTargetActor_Statics::NewProp_AbilitySystemComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTargetActor_Statics::NewProp_MyAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTargetActor_Statics::NewProp_MyAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTargetActor_Statics::NewProp_AttributeSet,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASTargetActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASTargetActor, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTargetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTargetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTargetActor_Statics::ClassParams = {
		&ASTargetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASTargetActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTargetActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTargetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTargetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTargetActor()
	{
		if (!Z_Registration_Info_UClass_ASTargetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTargetActor.OuterSingleton, Z_Construct_UClass_ASTargetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASTargetActor.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<ASTargetActor>()
	{
		return ASTargetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTargetActor);
	ASTargetActor::~ASTargetActor() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Public_STargetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Public_STargetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASTargetActor, ASTargetActor::StaticClass, TEXT("ASTargetActor"), &Z_Registration_Info_UClass_ASTargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTargetActor), 1020603902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Public_STargetActor_h_3594457025(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Public_STargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_Public_STargetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
