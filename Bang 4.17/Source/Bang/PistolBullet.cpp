// Fill out your copyright notice in the Description page of Project Settings.

#include "Bang.h"
#include "PistolBullet.h"


// Sets default values
APistolBullet::APistolBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// create a static mesh
	m_bulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BatteryMesh"));
	this->RootComponent = m_bulletMesh;

	m_bulletMesh->SetSimulatePhysics(true);

	// makes the bullet travel in the direction it is faceing
	m_bulletMesh->SetPhysicsLinearVelocity(GetActorForwardVector() * 5.0f);

	m_bulletMesh->OnComponentHit.AddDynamic(this, &APistolBullet::OnHit);

	SetActorEnableCollision(true);
}

// Called when the game starts or when spawned
void APistolBullet::BeginPlay()
{
	Super::BeginPlay();
	m_bulletMesh->SetPhysicsLinearVelocity(GetActorForwardVector() * 5.0f);
	m_bulletMesh->AddImpulse(GetActorForwardVector() * 5.0f);
}

// Called every frame
void APistolBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	m_bulletMesh->SetPhysicsLinearVelocity(GetActorForwardVector() * 5.0f);

}

//void APistolBullet::ReceiveHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
//{
//
//}

void APistolBullet::OnHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, FVector NormalImpulse, const FHitResult & Hit)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Green, "OnHit() called");
}

//void APistolBullet::OnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
//{
//	GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Green, "OnHit() called");
//}

