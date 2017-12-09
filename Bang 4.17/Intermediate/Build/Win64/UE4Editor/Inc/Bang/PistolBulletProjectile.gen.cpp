// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Bang.h"
#include "PistolBulletProjectile.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePistolBulletProjectile() {}
// Cross Module References
	BANG_API UClass* Z_Construct_UClass_UPistolBulletProjectile_NoRegister();
	BANG_API UClass* Z_Construct_UClass_UPistolBulletProjectile();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Bang();
// End Cross Module References
	void UPistolBulletProjectile::StaticRegisterNativesUPistolBulletProjectile()
	{
	}
	UClass* Z_Construct_UClass_UPistolBulletProjectile_NoRegister()
	{
		return UPistolBulletProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_UPistolBulletProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UProjectileMovementComponent();
			Z_Construct_UPackage__Script_Bang();
			OuterClass = UPistolBulletProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UPistolBulletProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PistolBulletProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PistolBulletProjectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPistolBulletProjectile, 1673655200);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPistolBulletProjectile(Z_Construct_UClass_UPistolBulletProjectile, &UPistolBulletProjectile::StaticClass, TEXT("/Script/Bang"), TEXT("UPistolBulletProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPistolBulletProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
