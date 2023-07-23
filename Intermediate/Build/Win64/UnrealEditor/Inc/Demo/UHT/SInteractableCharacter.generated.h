// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable/SInteractableCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_SInteractableCharacter_generated_h
#error "SInteractableCharacter.generated.h already included, missing '#pragma once' in SInteractableCharacter.h"
#endif
#define DEMO_SInteractableCharacter_generated_h

#define FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_RPC_WRAPPERS
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_ACCESSORS
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASInteractableCharacter(); \
	friend struct Z_Construct_UClass_ASInteractableCharacter_Statics; \
public: \
	DECLARE_CLASS(ASInteractableCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ASInteractableCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASInteractableCharacter*>(this); }


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASInteractableCharacter(); \
	friend struct Z_Construct_UClass_ASInteractableCharacter_Statics; \
public: \
	DECLARE_CLASS(ASInteractableCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ASInteractableCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASInteractableCharacter*>(this); }


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASInteractableCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASInteractableCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASInteractableCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASInteractableCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASInteractableCharacter(ASInteractableCharacter&&); \
	NO_API ASInteractableCharacter(const ASInteractableCharacter&); \
public: \
	NO_API virtual ~ASInteractableCharacter();


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASInteractableCharacter(ASInteractableCharacter&&); \
	NO_API ASInteractableCharacter(const ASInteractableCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASInteractableCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASInteractableCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASInteractableCharacter) \
	NO_API virtual ~ASInteractableCharacter();


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_10_PROLOG
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_ACCESSORS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_INCLASS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_ACCESSORS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ASInteractableCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_Interactable_SInteractableCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
