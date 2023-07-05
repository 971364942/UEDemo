// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/SInventoryEnum.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_SInventoryEnum_generated_h
#error "SInventoryEnum.generated.h already included, missing '#pragma once' in SInventoryEnum.h"
#endif
#define DEMO_SInventoryEnum_generated_h

#define FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_RPC_WRAPPERS
#define FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_ACCESSORS
#define FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSInventoryEnum(); \
	friend struct Z_Construct_UClass_USInventoryEnum_Statics; \
public: \
	DECLARE_CLASS(USInventoryEnum, UUserDefinedEnum, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(USInventoryEnum)


#define FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUSInventoryEnum(); \
	friend struct Z_Construct_UClass_USInventoryEnum_Statics; \
public: \
	DECLARE_CLASS(USInventoryEnum, UUserDefinedEnum, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(USInventoryEnum)


#define FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USInventoryEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USInventoryEnum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USInventoryEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInventoryEnum); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USInventoryEnum(USInventoryEnum&&); \
	NO_API USInventoryEnum(const USInventoryEnum&); \
public: \
	NO_API virtual ~USInventoryEnum();


#define FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USInventoryEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USInventoryEnum(USInventoryEnum&&); \
	NO_API USInventoryEnum(const USInventoryEnum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USInventoryEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInventoryEnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USInventoryEnum) \
	NO_API virtual ~USInventoryEnum();


#define FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_25_PROLOG
#define FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_ACCESSORS \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_INCLASS \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_ACCESSORS \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class USInventoryEnum>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_Inventory_SInventoryEnum_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(Weapon) \
	op(Armor) \
	op(Consumable) \
	op(Material) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
