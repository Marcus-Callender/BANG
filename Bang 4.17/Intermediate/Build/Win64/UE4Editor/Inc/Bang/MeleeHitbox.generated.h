// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BANG_MeleeHitbox_generated_h
#error "MeleeHitbox.generated.h already included, missing '#pragma once' in MeleeHitbox.h"
#endif
#define BANG_MeleeHitbox_generated_h

#define Bang_4_17_Source_Bang_MeleeHitbox_h_12_RPC_WRAPPERS
#define Bang_4_17_Source_Bang_MeleeHitbox_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Bang_4_17_Source_Bang_MeleeHitbox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMeleeHitbox(); \
	friend BANG_API class UClass* Z_Construct_UClass_AMeleeHitbox(); \
public: \
	DECLARE_CLASS(AMeleeHitbox, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bang"), NO_API) \
	DECLARE_SERIALIZER(AMeleeHitbox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bang_4_17_Source_Bang_MeleeHitbox_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMeleeHitbox(); \
	friend BANG_API class UClass* Z_Construct_UClass_AMeleeHitbox(); \
public: \
	DECLARE_CLASS(AMeleeHitbox, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bang"), NO_API) \
	DECLARE_SERIALIZER(AMeleeHitbox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bang_4_17_Source_Bang_MeleeHitbox_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMeleeHitbox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMeleeHitbox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeleeHitbox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeleeHitbox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeleeHitbox(AMeleeHitbox&&); \
	NO_API AMeleeHitbox(const AMeleeHitbox&); \
public:


#define Bang_4_17_Source_Bang_MeleeHitbox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeleeHitbox(AMeleeHitbox&&); \
	NO_API AMeleeHitbox(const AMeleeHitbox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeleeHitbox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeleeHitbox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMeleeHitbox)


#define Bang_4_17_Source_Bang_MeleeHitbox_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMeleeHitbox, CollisionComp); }


#define Bang_4_17_Source_Bang_MeleeHitbox_h_9_PROLOG
#define Bang_4_17_Source_Bang_MeleeHitbox_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bang_4_17_Source_Bang_MeleeHitbox_h_12_PRIVATE_PROPERTY_OFFSET \
	Bang_4_17_Source_Bang_MeleeHitbox_h_12_RPC_WRAPPERS \
	Bang_4_17_Source_Bang_MeleeHitbox_h_12_INCLASS \
	Bang_4_17_Source_Bang_MeleeHitbox_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bang_4_17_Source_Bang_MeleeHitbox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bang_4_17_Source_Bang_MeleeHitbox_h_12_PRIVATE_PROPERTY_OFFSET \
	Bang_4_17_Source_Bang_MeleeHitbox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Bang_4_17_Source_Bang_MeleeHitbox_h_12_INCLASS_NO_PURE_DECLS \
	Bang_4_17_Source_Bang_MeleeHitbox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bang_4_17_Source_Bang_MeleeHitbox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
