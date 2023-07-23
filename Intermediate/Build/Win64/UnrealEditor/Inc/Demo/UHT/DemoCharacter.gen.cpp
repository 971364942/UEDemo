// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/PlayerCharacter/DemoCharacter.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEMO_API UClass* Z_Construct_UClass_ADemoCharacter();
	DEMO_API UClass* Z_Construct_UClass_ADemoCharacter_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_USInteractableActorComponent_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_USPlayerAttributeSet_NoRegister();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnInput__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Demo_OnInput__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnInput__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnInput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnInput__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Demo_OnInput__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnInput__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Demo_OnInput__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnInput__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ADemoCharacter::execNormalAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NormalAttack_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADemoCharacter::execSetAttackMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttackMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttackMultiplier(Z_Param_AttackMultiplier);
		P_NATIVE_END;
	}
	struct DemoCharacter_eventK2_OnHealthChanged_Parms
	{
		AActor* K2_Instigator;
	};
	static FName NAME_ADemoCharacter_K2_OnHealthChanged = FName(TEXT("K2_OnHealthChanged"));
	void ADemoCharacter::K2_OnHealthChanged(AActor* K2_Instigator)
	{
		DemoCharacter_eventK2_OnHealthChanged_Parms Parms;
		Parms.K2_Instigator=K2_Instigator;
		ProcessEvent(FindFunctionChecked(NAME_ADemoCharacter_K2_OnHealthChanged),&Parms);
	}
	static FName NAME_ADemoCharacter_K2_OnPhysicalChanged = FName(TEXT("K2_OnPhysicalChanged"));
	void ADemoCharacter::K2_OnPhysicalChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADemoCharacter_K2_OnPhysicalChanged),NULL);
	}
	static FName NAME_ADemoCharacter_NormalAttack = FName(TEXT("NormalAttack"));
	void ADemoCharacter::NormalAttack()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADemoCharacter_NormalAttack),NULL);
	}
	void ADemoCharacter::StaticRegisterNativesADemoCharacter()
	{
		UClass* Class = ADemoCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NormalAttack", &ADemoCharacter::execNormalAttack },
			{ "SetAttackMultiplier", &ADemoCharacter::execSetAttackMultiplier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_K2_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged_Statics::NewProp_K2_Instigator = { "K2_Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DemoCharacter_eventK2_OnHealthChanged_Parms, K2_Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged_Statics::NewProp_K2_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoCharacter, nullptr, "K2_OnHealthChanged", nullptr, nullptr, sizeof(DemoCharacter_eventK2_OnHealthChanged_Parms), Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemoCharacter_K2_OnPhysicalChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemoCharacter_K2_OnPhysicalChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoCharacter_K2_OnPhysicalChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoCharacter, nullptr, "K2_OnPhysicalChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemoCharacter_K2_OnPhysicalChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacter_K2_OnPhysicalChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemoCharacter_K2_OnPhysicalChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoCharacter_K2_OnPhysicalChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemoCharacter_NormalAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemoCharacter_NormalAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoCharacter_NormalAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoCharacter, nullptr, "NormalAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemoCharacter_NormalAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacter_NormalAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemoCharacter_NormalAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoCharacter_NormalAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier_Statics
	{
		struct DemoCharacter_eventSetAttackMultiplier_Parms
		{
			float AttackMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier_Statics::NewProp_AttackMultiplier = { "AttackMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DemoCharacter_eventSetAttackMultiplier_Parms, AttackMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier_Statics::NewProp_AttackMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoCharacter, nullptr, "SetAttackMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier_Statics::DemoCharacter_eventSetAttackMultiplier_Parms), Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADemoCharacter);
	UClass* Z_Construct_UClass_ADemoCharacter_NoRegister()
	{
		return ADemoCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADemoCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableActorComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableActorComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryInteract_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryInteract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryInteract_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryInteract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
		static const UECodeGen_Private::FClassPropertyParams NewProp_MyAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MyAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPrimaryInteract_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrimaryInteract;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceActorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttack_MetaData[];
#endif
		static void NewProp_bIsAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInTurn_MetaData[];
#endif
		static void NewProp_bInTurn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInTurn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GA_Jump_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GA_Jump;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GA_NormalAttack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GA_NormalAttack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GA_NormalAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GA_Block_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GA_Block;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GA_StopBlock_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GA_StopBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GA_Dodge_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GA_Dodge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandCollisionBoxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandCollisionBoxComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandCollisionBoxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandCollisionBoxComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeDilationScopeBoxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeDilationScopeBoxComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADemoCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADemoCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADemoCharacter_K2_OnHealthChanged, "K2_OnHealthChanged" }, // 1913573269
		{ &Z_Construct_UFunction_ADemoCharacter_K2_OnPhysicalChanged, "K2_OnPhysicalChanged" }, // 2749991056
		{ &Z_Construct_UFunction_ADemoCharacter_NormalAttack, "NormalAttack" }, // 66182206
		{ &Z_Construct_UFunction_ADemoCharacter_SetAttackMultiplier, "SetAttackMultiplier" }, // 3265658276
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacter/DemoCharacter.h" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_InteractableActorComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_InteractableActorComp = { "InteractableActorComp", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, InteractableActorComp), Z_Construct_UClass_USInteractableActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_InteractableActorComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_InteractableActorComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttackAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttackAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_BlockAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_BlockAction = { "BlockAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, BlockAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_BlockAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_BlockAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_PrimaryInteract_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_PrimaryInteract = { "PrimaryInteract", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, PrimaryInteract), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_PrimaryInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_PrimaryInteract_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_SecondaryInteract_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_SecondaryInteract = { "SecondaryInteract", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, SecondaryInteract), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_SecondaryInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_SecondaryInteract_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_FunctionKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_FunctionKey = { "FunctionKey", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, FunctionKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_FunctionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_FunctionKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_DodgeAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_DodgeAction = { "DodgeAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, DodgeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_DodgeAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_DodgeAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GameplayAbilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AbilitySystem_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_MyAbilities_Inner = { "MyAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_MyAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_MyAbilities = { "MyAbilities", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, MyAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_MyAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_MyAbilities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, AttributeSet), Z_Construct_UClass_USPlayerAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_OnPrimaryInteract_MetaData[] = {
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_OnPrimaryInteract = { "OnPrimaryInteract", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, OnPrimaryInteract), Z_Construct_UDelegateFunction_Demo_OnInput__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_OnPrimaryInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_OnPrimaryInteract_MetaData)) }; // 768921964
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_HitResults_MetaData[] = {
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_HitResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_HitResults_MetaData)) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_TraceActorLocation_MetaData[] = {
		{ "Category", "DemoCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_TraceActorLocation = { "TraceActorLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, TraceActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_TraceActorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_TraceActorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bIsAttack_MetaData[] = {
		{ "Category", "DemoCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bIsAttack_SetBit(void* Obj)
	{
		((ADemoCharacter*)Obj)->bIsAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bIsAttack = { "bIsAttack", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADemoCharacter), &Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bIsAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bIsAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bIsAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bInTurn_MetaData[] = {
		{ "Category", "DemoCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bInTurn_SetBit(void* Obj)
	{
		((ADemoCharacter*)Obj)->bInTurn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bInTurn = { "bInTurn", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADemoCharacter), &Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bInTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bInTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bInTurn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "DemoCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, AttackRange), METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Jump_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Jump = { "GA_Jump", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, GA_Jump), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Jump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Jump_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_NormalAttack_Inner = { "GA_NormalAttack", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_NormalAttack_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_NormalAttack = { "GA_NormalAttack", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, GA_NormalAttack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_NormalAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_NormalAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Block_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Block = { "GA_Block", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, GA_Block), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Block_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Block_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_StopBlock_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_StopBlock = { "GA_StopBlock", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, GA_StopBlock), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_StopBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_StopBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Dodge_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Dodge = { "GA_Dodge", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, GA_Dodge), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Dodge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Dodge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_LeftHandCollisionBoxComp_MetaData[] = {
		{ "Category", "DemoCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_LeftHandCollisionBoxComp = { "LeftHandCollisionBoxComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, LeftHandCollisionBoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_LeftHandCollisionBoxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_LeftHandCollisionBoxComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_RightHandCollisionBoxComp_MetaData[] = {
		{ "Category", "DemoCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_RightHandCollisionBoxComp = { "RightHandCollisionBoxComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, RightHandCollisionBoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_RightHandCollisionBoxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_RightHandCollisionBoxComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoCharacter_Statics::NewProp_TimeDilationScopeBoxComp_MetaData[] = {
		{ "Category", "DemoCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter/DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacter_Statics::NewProp_TimeDilationScopeBoxComp = { "TimeDilationScopeBoxComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADemoCharacter, TimeDilationScopeBoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_TimeDilationScopeBoxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::NewProp_TimeDilationScopeBoxComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADemoCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_InteractableActorComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_BlockAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_PrimaryInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_SecondaryInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_FunctionKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_DodgeAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AbilitySystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_MyAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_MyAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_OnPrimaryInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_HitResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_HitResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_TraceActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bIsAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_bInTurn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Jump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_NormalAttack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_NormalAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Block,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_StopBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_GA_Dodge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_LeftHandCollisionBoxComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_RightHandCollisionBoxComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacter_Statics::NewProp_TimeDilationScopeBoxComp,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADemoCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ADemoCharacter, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADemoCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemoCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADemoCharacter_Statics::ClassParams = {
		&ADemoCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADemoCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADemoCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADemoCharacter()
	{
		if (!Z_Registration_Info_UClass_ADemoCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADemoCharacter.OuterSingleton, Z_Construct_UClass_ADemoCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADemoCharacter.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<ADemoCharacter>()
	{
		return ADemoCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADemoCharacter);
	ADemoCharacter::~ADemoCharacter() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADemoCharacter, ADemoCharacter::StaticClass, TEXT("ADemoCharacter"), &Z_Registration_Info_UClass_ADemoCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADemoCharacter), 868667573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_2233423914(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
