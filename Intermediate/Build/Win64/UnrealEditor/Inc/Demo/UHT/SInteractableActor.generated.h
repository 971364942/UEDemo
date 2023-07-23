// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable/SInteractableActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_SInteractableActor_generated_h
#error "SInteractableActor.generated.h already included, missing '#pragma once' in SInteractableActor.h"
#endif
#define DEMO_SInteractableActor_generated_h

#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_RPC_WRAPPERS
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_ACCESSORS
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASInteractableActor(); \
	friend struct Z_Construct_UClass_ASInteractableActor_Statics; \
public: \
	DECLARE_CLASS(ASInteractableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ASInteractableActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASInteractableActor*>(this); }


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASInteractableActor(); \
	friend struct Z_Construct_UClass_ASInteractableActor_Statics; \
public: \
	DECLARE_CLASS(ASInteractableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ASInteractableActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASInteractableActor*>(this); }


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASInteractableActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASInteractableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASInteractableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASInteractableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASInteractableActor(ASInteractableActor&&); \
	NO_API ASInteractableActor(const ASInteractableActor&); \
public: \
	NO_API virtual ~ASInteractableActor();


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASInteractableActor(ASInteractableActor&&); \
	NO_API ASInteractableActor(const ASInteractableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASInteractableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASInteractableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASInteractableActor) \
	NO_API virtual ~ASInteractableActor();


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_10_PROLOG
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_ACCESSORS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_INCLASS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_ACCESSORS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ASInteractableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_Interactable_SInteractableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
