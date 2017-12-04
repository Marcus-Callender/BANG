// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BANG_BangGameMode_generated_h
#error "BangGameMode.generated.h already included, missing '#pragma once' in BangGameMode.h"
#endif
#define BANG_BangGameMode_generated_h

#define Bang_4_17_Source_Bang_BangGameMode_h_15_RPC_WRAPPERS
#define Bang_4_17_Source_Bang_BangGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Bang_4_17_Source_Bang_BangGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABangGameMode(); \
	friend BANG_API class UClass* Z_Construct_UClass_ABangGameMode(); \
public: \
	DECLARE_CLASS(ABangGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Bang"), BANG_API) \
	DECLARE_SERIALIZER(ABangGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bang_4_17_Source_Bang_BangGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABangGameMode(); \
	friend BANG_API class UClass* Z_Construct_UClass_ABangGameMode(); \
public: \
	DECLARE_CLASS(ABangGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Bang"), BANG_API) \
	DECLARE_SERIALIZER(ABangGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bang_4_17_Source_Bang_BangGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BANG_API ABangGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABangGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BANG_API, ABangGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABangGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BANG_API ABangGameMode(ABangGameMode&&); \
	BANG_API ABangGameMode(const ABangGameMode&); \
public:


#define Bang_4_17_Source_Bang_BangGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BANG_API ABangGameMode(ABangGameMode&&); \
	BANG_API ABangGameMode(const ABangGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BANG_API, ABangGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABangGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABangGameMode)


#define Bang_4_17_Source_Bang_BangGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define Bang_4_17_Source_Bang_BangGameMode_h_12_PROLOG
#define Bang_4_17_Source_Bang_BangGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bang_4_17_Source_Bang_BangGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Bang_4_17_Source_Bang_BangGameMode_h_15_RPC_WRAPPERS \
	Bang_4_17_Source_Bang_BangGameMode_h_15_INCLASS \
	Bang_4_17_Source_Bang_BangGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bang_4_17_Source_Bang_BangGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bang_4_17_Source_Bang_BangGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Bang_4_17_Source_Bang_BangGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Bang_4_17_Source_Bang_BangGameMode_h_15_INCLASS_NO_PURE_DECLS \
	Bang_4_17_Source_Bang_BangGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bang_4_17_Source_Bang_BangGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
