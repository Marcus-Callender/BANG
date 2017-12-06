// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BANG_BangCharacter_generated_h
#error "BangCharacter.generated.h already included, missing '#pragma once' in BangCharacter.h"
#endif
#define BANG_BangCharacter_generated_h

#define Bang_4_17_Source_Bang_BangCharacter_h_20_RPC_WRAPPERS
#define Bang_4_17_Source_Bang_BangCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Bang_4_17_Source_Bang_BangCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABangCharacter(); \
	friend BANG_API class UClass* Z_Construct_UClass_ABangCharacter(); \
public: \
	DECLARE_CLASS(ABangCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bang"), NO_API) \
	DECLARE_SERIALIZER(ABangCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Bang_4_17_Source_Bang_BangCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesABangCharacter(); \
	friend BANG_API class UClass* Z_Construct_UClass_ABangCharacter(); \
public: \
	DECLARE_CLASS(ABangCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bang"), NO_API) \
	DECLARE_SERIALIZER(ABangCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Bang_4_17_Source_Bang_BangCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABangCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABangCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABangCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABangCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABangCharacter(ABangCharacter&&); \
	NO_API ABangCharacter(const ABangCharacter&); \
public:


#define Bang_4_17_Source_Bang_BangCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABangCharacter(ABangCharacter&&); \
	NO_API ABangCharacter(const ABangCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABangCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABangCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABangCharacter)


#define Bang_4_17_Source_Bang_BangCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ABangCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABangCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(ABangCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(ABangCharacter, IdleAnimation); } \
	FORCEINLINE static uint32 __PPO__RangedAttackAnim() { return STRUCT_OFFSET(ABangCharacter, RangedAttackAnim); } \
	FORCEINLINE static uint32 __PPO__MeleeAttackAnim() { return STRUCT_OFFSET(ABangCharacter, MeleeAttackAnim); } \
	FORCEINLINE static uint32 __PPO__RunningAnimationLegs() { return STRUCT_OFFSET(ABangCharacter, RunningAnimationLegs); } \
	FORCEINLINE static uint32 __PPO__IdleAnimationLegs() { return STRUCT_OFFSET(ABangCharacter, IdleAnimationLegs); } \
	FORCEINLINE static uint32 __PPO__m_torsoFlipbook() { return STRUCT_OFFSET(ABangCharacter, m_torsoFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_legsFlipbook() { return STRUCT_OFFSET(ABangCharacter, m_legsFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_projectile() { return STRUCT_OFFSET(ABangCharacter, m_projectile); } \
	FORCEINLINE static uint32 __PPO__m_animationLockTime() { return STRUCT_OFFSET(ABangCharacter, m_animationLockTime); }


#define Bang_4_17_Source_Bang_BangCharacter_h_17_PROLOG
#define Bang_4_17_Source_Bang_BangCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bang_4_17_Source_Bang_BangCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Bang_4_17_Source_Bang_BangCharacter_h_20_RPC_WRAPPERS \
	Bang_4_17_Source_Bang_BangCharacter_h_20_INCLASS \
	Bang_4_17_Source_Bang_BangCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bang_4_17_Source_Bang_BangCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bang_4_17_Source_Bang_BangCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Bang_4_17_Source_Bang_BangCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Bang_4_17_Source_Bang_BangCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Bang_4_17_Source_Bang_BangCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bang_4_17_Source_Bang_BangCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
