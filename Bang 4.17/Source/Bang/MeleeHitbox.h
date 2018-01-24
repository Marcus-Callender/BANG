// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "GameFramework/Actor.h"
#include "MeleeHitbox.generated.h"

UCLASS()
class BANG_API AMeleeHitbox : public AActor
{
	GENERATED_BODY()

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	class UCapsuleComponent* CollisionComp;

	virtual void Tick(float DeltaSeconds) override;
	
public:	
	// Sets default values for this actor's properties
	AMeleeHitbox();

	/** Returns CollisionComp subobject **/
	FORCEINLINE class UCapsuleComponent* GetCollisionComp() const { return CollisionComp; }


};
