// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Bang.h"
#include "BangCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBangCharacter() {}
// Cross Module References
	BANG_API UClass* Z_Construct_UClass_ABangCharacter_NoRegister();
	BANG_API UClass* Z_Construct_UClass_ABangCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_Bang();
	BANG_API UClass* Z_Construct_UClass_APistolBulletActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ABangCharacter::StaticRegisterNativesABangCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABangCharacter_NoRegister()
	{
		return ABangCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABangCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APaperCharacter();
			Z_Construct_UPackage__Script_Bang();
			OuterClass = ABangCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;


				UProperty* NewProp_m_bulletOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_bulletOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(m_bulletOffset, ABangCharacter), 0x0040000000000000);
				UProperty* NewProp_m_animationLockTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_animationLockTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(m_animationLockTime, ABangCharacter), 0x0040000000000000);
				UProperty* NewProp_m_projectile = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_projectile"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(m_projectile, ABangCharacter), 0x0024080000000005, Z_Construct_UClass_APistolBulletActor_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_m_legsFlipbook = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_legsFlipbook"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_legsFlipbook, ABangCharacter), 0x002008000008000d, Z_Construct_UClass_UPaperFlipbookComponent_NoRegister());
				UProperty* NewProp_m_torsoFlipbook = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_torsoFlipbook"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_torsoFlipbook, ABangCharacter), 0x002008000008000d, Z_Construct_UClass_UPaperFlipbookComponent_NoRegister());
				UProperty* NewProp_IdleAnimationLegs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IdleAnimationLegs"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(IdleAnimationLegs, ABangCharacter), 0x0020080000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_RunningAnimationLegs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RunningAnimationLegs"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RunningAnimationLegs, ABangCharacter), 0x0020080000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_MeleeAttackAnim = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeleeAttackAnim"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeleeAttackAnim, ABangCharacter), 0x0020080000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_RangedAttackAnim = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RangedAttackAnim"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RangedAttackAnim, ABangCharacter), 0x0020080000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_IdleAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IdleAnimation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(IdleAnimation, ABangCharacter), 0x0020080000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_RunningAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RunningAnimation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RunningAnimation, ABangCharacter), 0x0020080000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ABangCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_SideViewCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SideViewCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SideViewCameraComponent, ABangCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABangCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_m_bulletOffset, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_m_animationLockTime, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_m_projectile, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_m_projectile, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_m_legsFlipbook, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_m_legsFlipbook, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_m_legsFlipbook, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_m_torsoFlipbook, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_m_torsoFlipbook, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_m_torsoFlipbook, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_IdleAnimationLegs, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_IdleAnimationLegs, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_IdleAnimationLegs, TEXT("ToolTip"), TEXT("The animation to play while idle (standing still)"));
				MetaData->SetValue(NewProp_RunningAnimationLegs, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_RunningAnimationLegs, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_RunningAnimationLegs, TEXT("ToolTip"), TEXT("The animation to play while running around"));
				MetaData->SetValue(NewProp_MeleeAttackAnim, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_MeleeAttackAnim, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_MeleeAttackAnim, TEXT("ToolTip"), TEXT("The animation to play for a melee attack"));
				MetaData->SetValue(NewProp_RangedAttackAnim, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_RangedAttackAnim, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_RangedAttackAnim, TEXT("ToolTip"), TEXT("The animation to play for a ranged attack"));
				MetaData->SetValue(NewProp_IdleAnimation, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_IdleAnimation, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_IdleAnimation, TEXT("ToolTip"), TEXT("The animation to play while idle (standing still)"));
				MetaData->SetValue(NewProp_RunningAnimation, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_RunningAnimation, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_RunningAnimation, TEXT("ToolTip"), TEXT("The animation to play while running around"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera beside the character"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ModuleRelativePath"), TEXT("BangCharacter.h"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ToolTip"), TEXT("Side view camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABangCharacter, 1499237113);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABangCharacter(Z_Construct_UClass_ABangCharacter, &ABangCharacter::StaticClass, TEXT("/Script/Bang"), TEXT("ABangCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABangCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
