// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PistolBullet.generated.h"

UCLASS()
class BANG_API APistolBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APistolBullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//virtual void ReceiveHit
	//(
	//	class UPrimitiveComponent * MyComp,
	//	AActor * Other,
	//	class UPrimitiveComponent * OtherComp,
	//	bool bSelfMoved,
	//	FVector HitLocation,
	//	FVector HitNormal,
	//	FVector NormalImpulse,
	//	const FHitResult & Hit
	//);

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
		//void OnHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	/* forward decleration of static mesh */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* m_bulletMesh;
	

};
