// Fill out your copyright notice in the Description page of Project Settings.

#include "Bang.h"
#include "MeleeHitbox.h"

#include "BangCharacter.h"


// Sets default values
AMeleeHitbox::AMeleeHitbox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("SphereComp"));
	CollisionComp->InitBoxExtent(FVector(100.0f, 100.0f, 100.0f));
	CollisionComp->BodyInstance.SetCollisionProfileName("Melee Hitbox");
	CollisionComp->ShapeColor = FColor::Red;

	// set up a notification for when this component hits something blocking
	CollisionComp->OnComponentHit.AddDynamic(this, &AMeleeHitbox::OnHit);

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	///ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	///ProjectileMovement->UpdatedComponent = CollisionComp;
	///ProjectileMovement->InitialSpeed = 0.0f;
	///ProjectileMovement->MaxSpeed = 3000.f;
	///ProjectileMovement->bRotationFollowsVelocity = false;
	///ProjectileMovement->bShouldBounce = false;

	// Die after 0.1 seconds by default
	InitialLifeSpan = 3.1f;
}

void AMeleeHitbox::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Log, TEXT("Hit Detected"));

	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());
	}

	ABangCharacter* hitChar = Cast<ABangCharacter>(OtherActor);

	if (hitChar)
	{
		hitChar->OnMeleeHit();
	}

	Destroy();
}

// Called when the game starts or when spawned
void AMeleeHitbox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMeleeHitbox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

