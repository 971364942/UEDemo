// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCharacter/SPlayerAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef DEMO_SPlayerAttributeSet_generated_h
#error "SPlayerAttributeSet.generated.h already included, missing '#pragma once' in SPlayerAttributeSet.h"
#endif
#define DEMO_SPlayerAttributeSet_generated_h

#define FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MoveSeep); \
	DECLARE_FUNCTION(execOnRep_MaxPhysical); \
	DECLARE_FUNCTION(execOnRep_Physical);


#define FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MoveSeep); \
	DECLARE_FUNCTION(execOnRep_MaxPhysical); \
	DECLARE_FUNCTION(execOnRep_Physical);


#define FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_ACCESSORS
#define FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSPlayerAttributeSet(); \
	friend struct Z_Construct_UClass_USPlayerAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USPlayerAttributeSet, USAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(USPlayerAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Physical=NETFIELD_REP_START, \
		MaxPhysical, \
		MoveSeep, \
		NETFIELD_REP_END=MoveSeep	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSPlayerAttributeSet(); \
	friend struct Z_Construct_UClass_USPlayerAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USPlayerAttributeSet, USAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(USPlayerAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Physical=NETFIELD_REP_START, \
		MaxPhysical, \
		MoveSeep, \
		NETFIELD_REP_END=MoveSeep	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USPlayerAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USPlayerAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USPlayerAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USPlayerAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USPlayerAttributeSet(USPlayerAttributeSet&&); \
	NO_API USPlayerAttributeSet(const USPlayerAttributeSet&); \
public: \
	NO_API virtual ~USPlayerAttributeSet();


#define FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USPlayerAttributeSet(USPlayerAttributeSet&&); \
	NO_API USPlayerAttributeSet(const USPlayerAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USPlayerAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USPlayerAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USPlayerAttributeSet) \
	NO_API virtual ~USPlayerAttributeSet();


#define FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_15_PROLOG
#define FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_ACCESSORS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_INCLASS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_ACCESSORS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class USPlayerAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_PlayerCharacter_SPlayerAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
