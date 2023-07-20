// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/SInventoryStruct.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_SInventoryStruct_generated_h
#error "SInventoryStruct.generated.h already included, missing '#pragma once' in SInventoryStruct.h"
#endif
#define DEMO_SInventoryStruct_generated_h

#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSItem_Statics; \
	DEMO_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DEMO_API UScriptStruct* StaticStruct<struct FSItem>();

#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSInventoryItem_Statics; \
	DEMO_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DEMO_API UScriptStruct* StaticStruct<struct FSInventoryItem>();

#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSInventory_Statics; \
	DEMO_API static class UScriptStruct* StaticStruct();


template<> DEMO_API UScriptStruct* StaticStruct<struct FSInventory>();

#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_RPC_WRAPPERS
#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_ACCESSORS
#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSInventoryStruct(); \
	friend struct Z_Construct_UClass_USInventoryStruct_Statics; \
public: \
	DECLARE_CLASS(USInventoryStruct, UUserDefinedStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(USInventoryStruct)


#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_INCLASS \
private: \
	static void StaticRegisterNativesUSInventoryStruct(); \
	friend struct Z_Construct_UClass_USInventoryStruct_Statics; \
public: \
	DECLARE_CLASS(USInventoryStruct, UUserDefinedStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(USInventoryStruct)


#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USInventoryStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USInventoryStruct) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USInventoryStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInventoryStruct); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USInventoryStruct(USInventoryStruct&&); \
	NO_API USInventoryStruct(const USInventoryStruct&); \
public: \
	NO_API virtual ~USInventoryStruct();


#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USInventoryStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USInventoryStruct(USInventoryStruct&&); \
	NO_API USInventoryStruct(const USInventoryStruct&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USInventoryStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInventoryStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USInventoryStruct) \
	NO_API virtual ~USInventoryStruct();


#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_88_PROLOG
#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_ACCESSORS \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_INCLASS \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_ACCESSORS \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class USInventoryStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_Inventory_SInventoryStruct_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
