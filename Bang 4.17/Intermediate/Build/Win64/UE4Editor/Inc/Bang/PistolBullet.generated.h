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
#ifdef BANG_PistolBullet_generated_h
#error "PistolBullet.generated.h already included, missing '#pragma once' in PistolBullet.h"
#endif
#define BANG_PistolBullet_generated_h

#define Bang_4_17_Source_Bang_PistolBullet_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Bang_4_17_Source_Bang_PistolBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Bang_4_17_Source_Bang_PistolBullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPistolBullet(); \
	friend BANG_API class UClass* Z_Construct_UClass_APistolBullet(); \
public: \
	DECLARE_CLASS(APistolBullet, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bang"), NO_API) \
	DECLARE_SERIALIZER(APistolBullet) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bang_4_17_Source_Bang_PistolBullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPistolBullet(); \
	friend BANG_API class UClass* Z_Construct_UClass_APistolBullet(); \
public: \
	DECLARE_CLASS(APistolBullet, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bang"), NO_API) \
	DECLARE_SERIALIZER(APistolBullet) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bang_4_17_Source_Bang_PistolBullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APistolBullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APistolBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APistolBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APistolBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APistolBullet(APistolBullet&&); \
	NO_API APistolBullet(const APistolBullet&); \
public:


#define Bang_4_17_Source_Bang_PistolBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APistolBullet(APistolBullet&&); \
	NO_API APistolBullet(const APistolBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APistolBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APistolBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APistolBullet)


#define Bang_4_17_Source_Bang_PistolBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_bulletMesh() { return STRUCT_OFFSET(APistolBullet, m_bulletMesh); }


#define Bang_4_17_Source_Bang_PistolBullet_h_9_PROLOG
#define Bang_4_17_Source_Bang_PistolBullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bang_4_17_Source_Bang_PistolBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	Bang_4_17_Source_Bang_PistolBullet_h_12_RPC_WRAPPERS \
	Bang_4_17_Source_Bang_PistolBullet_h_12_INCLASS \
	Bang_4_17_Source_Bang_PistolBullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bang_4_17_Source_Bang_PistolBullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bang_4_17_Source_Bang_PistolBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	Bang_4_17_Source_Bang_PistolBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Bang_4_17_Source_Bang_PistolBullet_h_12_INCLASS_NO_PURE_DECLS \
	Bang_4_17_Source_Bang_PistolBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bang_4_17_Source_Bang_PistolBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
