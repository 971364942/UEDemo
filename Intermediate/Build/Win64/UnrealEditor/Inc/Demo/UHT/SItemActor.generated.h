// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/SItemActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DEMO_SItemActor_generated_h
#error "SItemActor.generated.h already included, missing '#pragma once' in SItemActor.h"
#endif
#define DEMO_SItemActor_generated_h

#define FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHidePickupTipsWidget); \
	DECLARE_FUNCTION(execShowPickupTipsWidget); \
	DECLARE_FUNCTION(execPickUp);


#define FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHidePickupTipsWidget); \
	DECLARE_FUNCTION(execShowPickupTipsWidget); \
	DECLARE_FUNCTION(execPickUp);


#define FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_ACCESSORS
#define FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_CALLBACK_WRAPPERS
#define FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASItemActor(); \
	friend struct Z_Construct_UClass_ASItemActor_Statics; \
public: \
	DECLARE_CLASS(ASItemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ASItemActor)


#define FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASItemActor(); \
	friend struct Z_Construct_UClass_ASItemActor_Statics; \
public: \
	DECLARE_CLASS(ASItemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ASItemActor)


#define FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASItemActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASItemActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASItemActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASItemActor(ASItemActor&&); \
	NO_API ASItemActor(const ASItemActor&); \
public: \
	NO_API virtual ~ASItemActor();


#define FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASItemActor(ASItemActor&&); \
	NO_API ASItemActor(const ASItemActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASItemActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASItemActor) \
	NO_API virtual ~ASItemActor();


#define FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_13_PROLOG
#define FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_ACCESSORS \
	FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_CALLBACK_WRAPPERS \
	FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_INCLASS \
	FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_ACCESSORS \
	FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_CALLBACK_WRAPPERS \
	FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Inventory_SItemActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ASItemActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_Inventory_SItemActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
