// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCharacter/DemoCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DEMO_DemoCharacter_generated_h
#error "DemoCharacter.generated.h already included, missing '#pragma once' in DemoCharacter.h"
#endif
#define DEMO_DemoCharacter_generated_h

#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_14_DELEGATE \
static inline void FOnInput_DelegateWrapper(const FMulticastScriptDelegate& OnInput) \
{ \
	OnInput.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_RPC_WRAPPERS \
	virtual void NormalAttack_Implementation(); \
 \
	DECLARE_FUNCTION(execNormalAttack); \
	DECLARE_FUNCTION(execSetAttackMultiplier);


#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NormalAttack_Implementation(); \
 \
	DECLARE_FUNCTION(execNormalAttack); \
	DECLARE_FUNCTION(execSetAttackMultiplier);


#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_ACCESSORS
#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_CALLBACK_WRAPPERS
#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoCharacter(); \
	friend struct Z_Construct_UClass_ADemoCharacter_Statics; \
public: \
	DECLARE_CLASS(ADemoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ADemoCharacter*>(this); }


#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesADemoCharacter(); \
	friend struct Z_Construct_UClass_ADemoCharacter_Statics; \
public: \
	DECLARE_CLASS(ADemoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ADemoCharacter*>(this); }


#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoCharacter(ADemoCharacter&&); \
	NO_API ADemoCharacter(const ADemoCharacter&); \
public: \
	NO_API virtual ~ADemoCharacter();


#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoCharacter(ADemoCharacter&&); \
	NO_API ADemoCharacter(const ADemoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemoCharacter) \
	NO_API virtual ~ADemoCharacter();


#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_17_PROLOG
#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_ACCESSORS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_CALLBACK_WRAPPERS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_INCLASS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_ACCESSORS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_CALLBACK_WRAPPERS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ADemoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_PlayerCharacter_DemoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
