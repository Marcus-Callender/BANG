// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FVector;
#ifdef BANG_MeleeHitbox_generated_h
#error "MeleeHitbox.generated.h already included, missing '#pragma once' in MeleeHitbox.h"
#endif
#define BANG_MeleeHitbox_generated_h

#define Bang_4_17_Source_Bang_MeleeHitbox_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Bang_4_17_Source_Bang_MeleeHitbox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


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
