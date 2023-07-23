// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable/SInteractableActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DEMO_SInteractableActorComponent_generated_h
#error "SInteractableActorComponent.generated.h already included, missing '#pragma once' in SInteractableActorComponent.h"
#endif
#define DEMO_SInteractableActorComponent_generated_h

#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_RPC_WRAPPERS \
	virtual void ServerLostFocusedActor_Implementation(AActor* InFocus); \
	virtual void ServerInteract_Implementation(AActor* InFocus); \
 \
	DECLARE_FUNCTION(execServerLostFocusedActor); \
	DECLARE_FUNCTION(execServerInteract); \
	DECLARE_FUNCTION(execPrimaryInteract);


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerLostFocusedActor_Implementation(AActor* InFocus); \
	virtual void ServerInteract_Implementation(AActor* InFocus); \
 \
	DECLARE_FUNCTION(execServerLostFocusedActor); \
	DECLARE_FUNCTION(execServerInteract); \
	DECLARE_FUNCTION(execPrimaryInteract);


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_ACCESSORS
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_CALLBACK_WRAPPERS
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSInteractableActorComponent(); \
	friend struct Z_Construct_UClass_USInteractableActorComponent_Statics; \
public: \
	DECLARE_CLASS(USInteractableActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(USInteractableActorComponent)


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSInteractableActorComponent(); \
	friend struct Z_Construct_UClass_USInteractableActorComponent_Statics; \
public: \
	DECLARE_CLASS(USInteractableActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(USInteractableActorComponent)


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USInteractableActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USInteractableActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USInteractableActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInteractableActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USInteractableActorComponent(USInteractableActorComponent&&); \
	NO_API USInteractableActorComponent(const USInteractableActorComponent&); \
public: \
	NO_API virtual ~USInteractableActorComponent();


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USInteractableActorComponent(USInteractableActorComponent&&); \
	NO_API USInteractableActorComponent(const USInteractableActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USInteractableActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInteractableActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USInteractableActorComponent) \
	NO_API virtual ~USInteractableActorComponent();


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_11_PROLOG
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_ACCESSORS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_CALLBACK_WRAPPERS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_INCLASS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_ACCESSORS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_CALLBACK_WRAPPERS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class USInteractableActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_Interactable_SInteractableActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
