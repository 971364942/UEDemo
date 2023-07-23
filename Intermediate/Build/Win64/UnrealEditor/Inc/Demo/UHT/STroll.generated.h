// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/STroll.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
#ifdef DEMO_STroll_generated_h
#error "STroll.generated.h already included, missing '#pragma once' in STroll.h"
#endif
#define DEMO_STroll_generated_h

#define FID_ue_Demo_Source_Demo_AI_STroll_h_13_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_AI_STroll_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTrollDeath); \
	DECLARE_FUNCTION(execOnPawnSee);


#define FID_ue_Demo_Source_Demo_AI_STroll_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTrollDeath); \
	DECLARE_FUNCTION(execOnPawnSee);


#define FID_ue_Demo_Source_Demo_AI_STroll_h_13_ACCESSORS
#define FID_ue_Demo_Source_Demo_AI_STroll_h_13_CALLBACK_WRAPPERS
#define FID_ue_Demo_Source_Demo_AI_STroll_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTroll(); \
	friend struct Z_Construct_UClass_ASTroll_Statics; \
public: \
	DECLARE_CLASS(ASTroll, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ASTroll) \
	virtual UObject* _getUObject() const override { return const_cast<ASTroll*>(this); }


#define FID_ue_Demo_Source_Demo_AI_STroll_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASTroll(); \
	friend struct Z_Construct_UClass_ASTroll_Statics; \
public: \
	DECLARE_CLASS(ASTroll, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ASTroll) \
	virtual UObject* _getUObject() const override { return const_cast<ASTroll*>(this); }


#define FID_ue_Demo_Source_Demo_AI_STroll_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTroll(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTroll) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTroll); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTroll); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTroll(ASTroll&&); \
	NO_API ASTroll(const ASTroll&); \
public: \
	NO_API virtual ~ASTroll();


#define FID_ue_Demo_Source_Demo_AI_STroll_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTroll(ASTroll&&); \
	NO_API ASTroll(const ASTroll&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTroll); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTroll); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTroll) \
	NO_API virtual ~ASTroll();


#define FID_ue_Demo_Source_Demo_AI_STroll_h_10_PROLOG
#define FID_ue_Demo_Source_Demo_AI_STroll_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_AI_STroll_h_13_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_AI_STroll_h_13_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_AI_STroll_h_13_ACCESSORS \
	FID_ue_Demo_Source_Demo_AI_STroll_h_13_CALLBACK_WRAPPERS \
	FID_ue_Demo_Source_Demo_AI_STroll_h_13_INCLASS \
	FID_ue_Demo_Source_Demo_AI_STroll_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_AI_STroll_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_AI_STroll_h_13_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_AI_STroll_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_AI_STroll_h_13_ACCESSORS \
	FID_ue_Demo_Source_Demo_AI_STroll_h_13_CALLBACK_WRAPPERS \
	FID_ue_Demo_Source_Demo_AI_STroll_h_13_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_AI_STroll_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ASTroll>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_AI_STroll_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
