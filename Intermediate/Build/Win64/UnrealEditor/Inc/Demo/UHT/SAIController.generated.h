// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/SAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_SAIController_generated_h
#error "SAIController.generated.h already included, missing '#pragma once' in SAIController.h"
#endif
#define DEMO_SAIController_generated_h

#define FID_ue_Demo_Source_Demo_AI_SAIController_h_15_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_AI_SAIController_h_15_RPC_WRAPPERS
#define FID_ue_Demo_Source_Demo_AI_SAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ue_Demo_Source_Demo_AI_SAIController_h_15_ACCESSORS
#define FID_ue_Demo_Source_Demo_AI_SAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAIController(); \
	friend struct Z_Construct_UClass_ASAIController_Statics; \
public: \
	DECLARE_CLASS(ASAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ASAIController)


#define FID_ue_Demo_Source_Demo_AI_SAIController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASAIController(); \
	friend struct Z_Construct_UClass_ASAIController_Statics; \
public: \
	DECLARE_CLASS(ASAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ASAIController)


#define FID_ue_Demo_Source_Demo_AI_SAIController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAIController(ASAIController&&); \
	NO_API ASAIController(const ASAIController&); \
public: \
	NO_API virtual ~ASAIController();


#define FID_ue_Demo_Source_Demo_AI_SAIController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAIController(ASAIController&&); \
	NO_API ASAIController(const ASAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIController) \
	NO_API virtual ~ASAIController();


#define FID_ue_Demo_Source_Demo_AI_SAIController_h_12_PROLOG
#define FID_ue_Demo_Source_Demo_AI_SAIController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_AI_SAIController_h_15_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_AI_SAIController_h_15_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_AI_SAIController_h_15_ACCESSORS \
	FID_ue_Demo_Source_Demo_AI_SAIController_h_15_INCLASS \
	FID_ue_Demo_Source_Demo_AI_SAIController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_AI_SAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_AI_SAIController_h_15_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_AI_SAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_AI_SAIController_h_15_ACCESSORS \
	FID_ue_Demo_Source_Demo_AI_SAIController_h_15_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_AI_SAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ASAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_AI_SAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
