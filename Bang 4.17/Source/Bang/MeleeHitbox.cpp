// Fill out your copyright notice in the Description page of Project Settings.

#include "Bang.h"
#include "MeleeHitbox.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "BangCharacter.h"


// Sets default values
AMeleeHitbox::AMeleeHitbox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollBox"));
	CollisionComp->InitCapsuleSize(25.0f, 50.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Die after 0.1 seconds by default
	InitialLifeSpan = 0.1f;
}

void AMeleeHitbox::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	TArray<AActor*> collectedObjects;
	GetOverlappingActors(collectedObjects);

	for (int32 z = 0; z < collectedObjects.Num(); z++)
	{
		ABangCharacter* const hitCharicter = Cast<ABangCharacter>(collectedObjects[z]);

		if (hitCharicter)
		{
			hitCharicter->OnMeleeHit(GetOwner()->GetActorLocation());
			Destroy();
		}
	}
}


