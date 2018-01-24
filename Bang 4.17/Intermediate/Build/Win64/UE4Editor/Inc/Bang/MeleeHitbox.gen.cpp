// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Bang.h"
#include "MeleeHitbox.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeHitbox() {}
// Cross Module References
	BANG_API UClass* Z_Construct_UClass_AMeleeHitbox_NoRegister();
	BANG_API UClass* Z_Construct_UClass_AMeleeHitbox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bang();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void AMeleeHitbox::StaticRegisterNativesAMeleeHitbox()
	{
	}
	UClass* Z_Construct_UClass_AMeleeHitbox_NoRegister()
	{
		return AMeleeHitbox::StaticClass();
	}
	UClass* Z_Construct_UClass_AMeleeHitbox()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Bang();
			OuterClass = AMeleeHitbox::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_CollisionComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComp, AMeleeHitbox), 0x00400000000b0009, Z_Construct_UClass_UCapsuleComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AMeleeHitbox> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MeleeHitbox.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MeleeHitbox.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ModuleRelativePath"), TEXT("MeleeHitbox.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ToolTip"), TEXT("Sphere collision component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeleeHitbox, 3152404378);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeleeHitbox(Z_Construct_UClass_AMeleeHitbox, &AMeleeHitbox::StaticClass, TEXT("/Script/Bang"), TEXT("AMeleeHitbox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeleeHitbox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
