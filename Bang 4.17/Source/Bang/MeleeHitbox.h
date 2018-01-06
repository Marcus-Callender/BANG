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
		///class UBoxComponent* CollisionComp;
		class UCapsuleComponent* CollisionComp;
	
public:	
	// Sets default values for this actor's properties
	AMeleeHitbox();

	/** called when projectile hits something */
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** called when projectile hits something */
	UFUNCTION()
		void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	/** Returns CollisionComp subobject **/
	FORCEINLINE class UCapsuleComponent* GetCollisionComp() const { return CollisionComp; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
