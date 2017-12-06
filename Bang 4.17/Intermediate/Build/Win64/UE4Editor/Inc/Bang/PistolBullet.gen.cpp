// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Bang.h"
#include "PistolBullet.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePistolBullet() {}
// Cross Module References
	BANG_API UFunction* Z_Construct_UFunction_APistolBullet_OnHit();
	BANG_API UClass* Z_Construct_UClass_APistolBullet();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BANG_API UClass* Z_Construct_UClass_APistolBullet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bang();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APistolBullet::StaticRegisterNativesAPistolBullet()
	{
		UClass* Class = APistolBullet::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&APistolBullet::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_APistolBullet_OnHit()
	{
		struct PistolBullet_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer = Z_Construct_UClass_APistolBullet();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00C20401, 65535, sizeof(PistolBullet_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, PistolBullet_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, PistolBullet_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComponent, PistolBullet_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, PistolBullet_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, PistolBullet_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PistolBullet.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("virtual void ReceiveHit\n(\n       class UPrimitiveComponent * MyComp,\n       AActor * Other,\n       class UPrimitiveComponent * OtherComp,\n       bool bSelfMoved,\n       FVector HitLocation,\n       FVector HitNormal,\n       FVector NormalImpulse,\n       const FHitResult & Hit\n);"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APistolBullet_NoRegister()
	{
		return APistolBullet::StaticClass();
	}
	UClass* Z_Construct_UClass_APistolBullet()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Bang();
			OuterClass = APistolBullet::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_APistolBullet_OnHit());

				UProperty* NewProp_m_bulletMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_bulletMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_bulletMesh, APistolBullet), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APistolBullet_OnHit(), "OnHit"); // 2524120048
				static TCppClassTypeInfo<TCppClassTypeTraits<APistolBullet> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PistolBullet.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PistolBullet.h"));
				MetaData->SetValue(NewProp_m_bulletMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_m_bulletMesh, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_m_bulletMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_m_bulletMesh, TEXT("ModuleRelativePath"), TEXT("PistolBullet.h"));
				MetaData->SetValue(NewProp_m_bulletMesh, TEXT("ToolTip"), TEXT("forward decleration of static mesh"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APistolBullet, 3604921127);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APistolBullet(Z_Construct_UClass_APistolBullet, &APistolBullet::StaticClass, TEXT("/Script/Bang"), TEXT("APistolBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APistolBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
