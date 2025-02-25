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
struct FVector;
struct FHitResult;
#ifdef BANG_PistolBulletActor_generated_h
#error "PistolBulletActor.generated.h already included, missing '#pragma once' in PistolBulletActor.h"
#endif
#define BANG_PistolBulletActor_generated_h

#define Bang_4_17_Source_Bang_PistolBulletActor_h_12_RPC_WRAPPERS \
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


#define Bang_4_17_Source_Bang_PistolBulletActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Bang_4_17_Source_Bang_PistolBulletActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPistolBulletActor(); \
	friend BANG_API class UClass* Z_Construct_UClass_APistolBulletActor(); \
public: \
	DECLARE_CLASS(APistolBulletActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bang"), NO_API) \
	DECLARE_SERIALIZER(APistolBulletActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bang_4_17_Source_Bang_PistolBulletActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPistolBulletActor(); \
	friend BANG_API class UClass* Z_Construct_UClass_APistolBulletActor(); \
public: \
	DECLARE_CLASS(APistolBulletActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bang"), NO_API) \
	DECLARE_SERIALIZER(APistolBulletActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bang_4_17_Source_Bang_PistolBulletActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APistolBulletActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APistolBulletActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APistolBulletActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APistolBulletActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APistolBulletActor(APistolBulletActor&&); \
	NO_API APistolBulletActor(const APistolBulletActor&); \
public:


#define Bang_4_17_Source_Bang_PistolBulletActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APistolBulletActor(APistolBulletActor&&); \
	NO_API APistolBulletActor(const APistolBulletActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APistolBulletActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APistolBulletActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APistolBulletActor)


#define Bang_4_17_Source_Bang_PistolBulletActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APistolBulletActor, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APistolBulletActor, ProjectileMovement); }


#define Bang_4_17_Source_Bang_PistolBulletActor_h_9_PROLOG
#define Bang_4_17_Source_Bang_PistolBulletActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bang_4_17_Source_Bang_PistolBulletActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Bang_4_17_Source_Bang_PistolBulletActor_h_12_RPC_WRAPPERS \
	Bang_4_17_Source_Bang_PistolBulletActor_h_12_INCLASS \
	Bang_4_17_Source_Bang_PistolBulletActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bang_4_17_Source_Bang_PistolBulletActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bang_4_17_Source_Bang_PistolBulletActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Bang_4_17_Source_Bang_PistolBulletActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Bang_4_17_Source_Bang_PistolBulletActor_h_12_INCLASS_NO_PURE_DECLS \
	Bang_4_17_Source_Bang_PistolBulletActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bang_4_17_Source_Bang_PistolBulletActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
