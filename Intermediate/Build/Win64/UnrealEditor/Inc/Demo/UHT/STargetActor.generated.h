// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "STargetActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DEMO_STargetActor_generated_h
#error "STargetActor.generated.h already included, missing '#pragma once' in STargetActor.h"
#endif
#define DEMO_STargetActor_generated_h

#define FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_RPC_WRAPPERS
#define FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_ACCESSORS
#define FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_CALLBACK_WRAPPERS
#define FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTargetActor(); \
	friend struct Z_Construct_UClass_ASTargetActor_Statics; \
public: \
	DECLARE_CLASS(ASTargetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ASTargetActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASTargetActor*>(this); }


#define FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASTargetActor(); \
	friend struct Z_Construct_UClass_ASTargetActor_Statics; \
public: \
	DECLARE_CLASS(ASTargetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ASTargetActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASTargetActor*>(this); }


#define FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTargetActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTargetActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTargetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTargetActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTargetActor(ASTargetActor&&); \
	NO_API ASTargetActor(const ASTargetActor&); \
public: \
	NO_API virtual ~ASTargetActor();


#define FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTargetActor(ASTargetActor&&); \
	NO_API ASTargetActor(const ASTargetActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTargetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTargetActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTargetActor) \
	NO_API virtual ~ASTargetActor();


#define FID_ue_Demo_Source_Demo_Public_STargetActor_h_13_PROLOG
#define FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_ACCESSORS \
	FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_CALLBACK_WRAPPERS \
	FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_INCLASS \
	FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_ACCESSORS \
	FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_CALLBACK_WRAPPERS \
	FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_Public_STargetActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ASTargetActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_Public_STargetActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
