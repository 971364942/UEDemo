// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/SGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_SGameMode_generated_h
#error "SGameMode.generated.h already included, missing '#pragma once' in SGameMode.h"
#endif
#define DEMO_SGameMode_generated_h

#define FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_RPC_WRAPPERS
#define FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_ACCESSORS
#define FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoGameMode(); \
	friend struct Z_Construct_UClass_ADemoGameMode_Statics; \
public: \
	DECLARE_CLASS(ADemoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), DEMO_API) \
	DECLARE_SERIALIZER(ADemoGameMode)


#define FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADemoGameMode(); \
	friend struct Z_Construct_UClass_ADemoGameMode_Statics; \
public: \
	DECLARE_CLASS(ADemoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), DEMO_API) \
	DECLARE_SERIALIZER(ADemoGameMode)


#define FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEMO_API ADemoGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEMO_API, ADemoGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEMO_API ADemoGameMode(ADemoGameMode&&); \
	DEMO_API ADemoGameMode(const ADemoGameMode&); \
public: \
	DEMO_API virtual ~ADemoGameMode();


#define FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEMO_API ADemoGameMode(ADemoGameMode&&); \
	DEMO_API ADemoGameMode(const ADemoGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEMO_API, ADemoGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemoGameMode) \
	DEMO_API virtual ~ADemoGameMode();


#define FID_ue_Demo_Source_Demo_Framework_SGameMode_h_9_PROLOG
#define FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_ACCESSORS \
	FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_INCLASS \
	FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_ACCESSORS \
	FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Framework_SGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ADemoGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_Framework_SGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
