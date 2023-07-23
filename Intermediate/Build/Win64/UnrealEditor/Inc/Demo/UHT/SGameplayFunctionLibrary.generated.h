// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/SGameplayFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDataTable;
struct FSItem;
#ifdef DEMO_SGameplayFunctionLibrary_generated_h
#error "SGameplayFunctionLibrary.generated.h already included, missing '#pragma once' in SGameplayFunctionLibrary.h"
#endif
#define DEMO_SGameplayFunctionLibrary_generated_h

#define FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_28_DELEGATE \
struct SGameplayFunctionLibrary_eventOnCompletionChange_Parms \
{ \
	bool bCompletion; \
	int32 TableID; \
}; \
static inline void FOnCompletionChange_DelegateWrapper(const FScriptDelegate& OnCompletionChange, bool bCompletion, int32 TableID) \
{ \
	SGameplayFunctionLibrary_eventOnCompletionChange_Parms Parms; \
	Parms.bCompletion=bCompletion ? true : false; \
	Parms.TableID=TableID; \
	OnCompletionChange.ProcessDelegate<UObject>(&Parms); \
}


#define FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemBy_ID); \
	DECLARE_FUNCTION(execSetTableTaskCompletionByID); \
	DECLARE_FUNCTION(execSetOnCompletionChange); \
	DECLARE_FUNCTION(execAssertTrigger); \
	DECLARE_FUNCTION(execAttackTurnTrace);


#define FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemBy_ID); \
	DECLARE_FUNCTION(execSetTableTaskCompletionByID); \
	DECLARE_FUNCTION(execSetOnCompletionChange); \
	DECLARE_FUNCTION(execAssertTrigger); \
	DECLARE_FUNCTION(execAttackTurnTrace);


#define FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_ACCESSORS
#define FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGameplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_USGameplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USGameplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(USGameplayFunctionLibrary)


#define FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSGameplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_USGameplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USGameplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(USGameplayFunctionLibrary)


#define FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGameplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameplayFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGameplayFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameplayFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USGameplayFunctionLibrary(USGameplayFunctionLibrary&&); \
	NO_API USGameplayFunctionLibrary(const USGameplayFunctionLibrary&); \
public: \
	NO_API virtual ~USGameplayFunctionLibrary();


#define FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGameplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USGameplayFunctionLibrary(USGameplayFunctionLibrary&&); \
	NO_API USGameplayFunctionLibrary(const USGameplayFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGameplayFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameplayFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameplayFunctionLibrary) \
	NO_API virtual ~USGameplayFunctionLibrary();


#define FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_15_PROLOG
#define FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_ACCESSORS \
	FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_INCLASS \
	FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_ACCESSORS \
	FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class USGameplayFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_Framework_SGameplayFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
