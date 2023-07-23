// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable/SInteractableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef DEMO_SInteractableInterface_generated_h
#error "SInteractableInterface.generated.h already included, missing '#pragma once' in SInteractableInterface.h"
#endif
#define DEMO_SInteractableInterface_generated_h

#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_RPC_WRAPPERS \
	virtual void LostFocusedActor_Implementation(APawn* InstigatorPawn) {}; \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
	virtual FText GetInteractText_Implementation(APawn* InstigatorPawn) { return FText::GetEmpty(); }; \
	virtual void OnActorLoaded_Implementation() {}; \
 \
	DECLARE_FUNCTION(execLostFocusedActor); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execGetInteractText); \
	DECLARE_FUNCTION(execOnActorLoaded);


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void LostFocusedActor_Implementation(APawn* InstigatorPawn) {}; \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
	virtual FText GetInteractText_Implementation(APawn* InstigatorPawn) { return FText::GetEmpty(); }; \
	virtual void OnActorLoaded_Implementation() {}; \
 \
	DECLARE_FUNCTION(execLostFocusedActor); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execGetInteractText); \
	DECLARE_FUNCTION(execOnActorLoaded);


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_ACCESSORS
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_CALLBACK_WRAPPERS
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEMO_API USInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USInteractableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEMO_API, USInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInteractableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEMO_API USInteractableInterface(USInteractableInterface&&); \
	DEMO_API USInteractableInterface(const USInteractableInterface&); \
public: \
	DEMO_API virtual ~USInteractableInterface();


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEMO_API USInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEMO_API USInteractableInterface(USInteractableInterface&&); \
	DEMO_API USInteractableInterface(const USInteractableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEMO_API, USInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInteractableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USInteractableInterface) \
	DEMO_API virtual ~USInteractableInterface();


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSInteractableInterface(); \
	friend struct Z_Construct_UClass_USInteractableInterface_Statics; \
public: \
	DECLARE_CLASS(USInteractableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Demo"), DEMO_API) \
	DECLARE_SERIALIZER(USInteractableInterface)


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISInteractableInterface() {} \
public: \
	typedef USInteractableInterface UClassType; \
	typedef ISInteractableInterface ThisClass; \
	static FText Execute_GetInteractText(UObject* O, APawn* InstigatorPawn); \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	static void Execute_LostFocusedActor(UObject* O, APawn* InstigatorPawn); \
	static void Execute_OnActorLoaded(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISInteractableInterface() {} \
public: \
	typedef USInteractableInterface UClassType; \
	typedef ISInteractableInterface ThisClass; \
	static FText Execute_GetInteractText(UObject* O, APawn* InstigatorPawn); \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	static void Execute_LostFocusedActor(UObject* O, APawn* InstigatorPawn); \
	static void Execute_OnActorLoaded(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_10_PROLOG
#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_ACCESSORS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_CALLBACK_WRAPPERS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_ACCESSORS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_CALLBACK_WRAPPERS \
	FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class USInteractableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_Interactable_SInteractableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
