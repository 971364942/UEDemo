// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbility/SAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef DEMO_SAttributeSet_generated_h
#error "SAttributeSet.generated.h already included, missing '#pragma once' in SAttributeSet.h"
#endif
#define DEMO_SAttributeSet_generated_h

#define FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_SPARSE_DATA
#define FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAttackMultiplierInternal); \
	DECLARE_FUNCTION(execOnRep_AttackMultiplier); \
	DECLARE_FUNCTION(execOnRep_Attack); \
	DECLARE_FUNCTION(execOnRep_Defense); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAttackMultiplierInternal); \
	DECLARE_FUNCTION(execOnRep_AttackMultiplier); \
	DECLARE_FUNCTION(execOnRep_Attack); \
	DECLARE_FUNCTION(execOnRep_Defense); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_ACCESSORS
#define FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSAttributeSet(); \
	friend struct Z_Construct_UClass_USAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(USAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Defense, \
		Attack, \
		AttackMultiplier, \
		NETFIELD_REP_END=AttackMultiplier	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USAttributeSet) \
public:


#define FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSAttributeSet(); \
	friend struct Z_Construct_UClass_USAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(USAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Defense, \
		Attack, \
		AttackMultiplier, \
		NETFIELD_REP_END=AttackMultiplier	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USAttributeSet) \
public:


#define FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAttributeSet(USAttributeSet&&); \
	NO_API USAttributeSet(const USAttributeSet&); \
public: \
	NO_API virtual ~USAttributeSet();


#define FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAttributeSet(USAttributeSet&&); \
	NO_API USAttributeSet(const USAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USAttributeSet) \
	NO_API virtual ~USAttributeSet();


#define FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_21_PROLOG
#define FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_RPC_WRAPPERS \
	FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_ACCESSORS \
	FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_INCLASS \
	FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_SPARSE_DATA \
	FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_ACCESSORS \
	FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_INCLASS_NO_PURE_DECLS \
	FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class USAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_Demo_Source_Demo_GameplayAbility_SAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
