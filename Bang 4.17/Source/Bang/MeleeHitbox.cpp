// Fill out your copyright notice in the Description page of Project Settings.

#include "Bang.h"
#include "MeleeHitbox.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "BangCharacter.h"


// Sets default values
AMeleeHitbox::AMeleeHitbox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollBox"));
	CollisionComp->InitCapsuleSize(25.0f, 50.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");

	// set up a notification for when this component hits something blocking
	///CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AMeleeHitbox::OnOverlap);
	CollisionComp->OnComponentHit.AddDynamic(this, &AMeleeHitbox::OnHit);

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 0.0F;
	ProjectileMovement->MaxSpeed = 0.0f;

	// Die after 0.1 seconds by default
	InitialLifeSpan = 0.1f;
}

void AMeleeHitbox::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Log, TEXT("Melee Hit Detected"));

	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());
	}

	ABangCharacter* hitChar = Cast<ABangCharacter>(OtherActor);

	if (hitChar)
	{
		hitChar->OnMeleeHit(this->GetActorLocation());
	}

	Destroy();
}

/*void AMeleeHitbox::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("Melee Hit Detected"));

	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());
	}

	ABangCharacter* hitChar = Cast<ABangCharacter>(OtherActor);

	if (hitChar)
	{
		hitChar->OnMeleeHit(this->GetActorLocation());
	}

	Destroy();

	if (!(OtherActor != GetOwner() && OtherActor != this))
	{
		UE_LOG(LogTemp, Log, TEXT("Overlaped owner"));
	}
	else
	{
		//UE_LOG(LogTemp, Log, TEXT("Overlap Detected: %s", OtherActor->GetName()));
		UE_LOG(LogTemp, Log, TEXT("Overlap Detected: %s"), *OtherActor->GetName());

		// Only add impulse and destroy projectile if we hit a physics
		if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
		{
			OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());
		}

		ABangCharacter* hitChar = Cast<ABangCharacter>(OtherActor);

		if (hitChar)
		{
			hitChar->OnMeleeHit(this->GetActorLocation());
			OtherComp->AddForce(FVector(1.0f, 0.0f, 0.0f));
		}

		Destroy();
	}
}*/

