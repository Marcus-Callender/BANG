// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Bang.h"
#include "BangCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Components/TextRenderComponent.h"
#include "PaperFlipbook.h"

#include "PistolBulletActor.h"
#include "MeleeHitbox.h"

DEFINE_LOG_CATEGORY_STATIC(SideScrollerCharacter, Log, All);
//////////////////////////////////////////////////////////////////////////
// ABangCharacter

ABangCharacter::ABangCharacter()
{


	// Use only Yaw from the controller and ignore the rest of the rotation.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	// Set the size of our collision capsule.
	GetCapsuleComponent()->SetCapsuleHalfHeight(96.0f);
	GetCapsuleComponent()->SetCapsuleRadius(40.0f);
	GetCapsuleComponent()->SetSimulatePhysics(false);

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 600.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraBoom->bAbsoluteRotation = true;
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->RelativeRotation = FRotator(0.0f, -90.0f, 0.0f);


	// Create an orthographic camera (no perspective) and attach it to the boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	SideViewCameraComponent->OrthoWidth = 2048.0f;
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Prevent all automatic rotation behavior on the camera, character, and camera component
	CameraBoom->bAbsoluteRotation = true;
	SideViewCameraComponent->bUsePawnControlRotation = false;
	SideViewCameraComponent->bAutoActivate = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	// Configure character movement
	GetCharacterMovement()->GravityScale = 3.0f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1100.f;
	GetCharacterMovement()->GroundFriction = 3.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->MaxFlySpeed = 600.0f;

	// Lock character motion onto the XZ plane, so the character can't move in or out of the screen
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->SetPlaneConstraintNormal(FVector(0.0f, -1.0f, 0.0f));

	// Behave like a traditional 2D platformer character, with a flat bottom instead of a curved capsule bottom
	// Note: This can cause a little floating when going up inclines; you can choose the tradeoff between better
	// behavior on the edge of a ledge versus inclines by setting this to true or false
	GetCharacterMovement()->bUseFlatBaseForFloorChecks = true;

	// Enable replication on the Sprite component so animations show up when networked
	GetSprite()->SetIsReplicated(true);
	bReplicates = true;

	m_torsoFlipbook = GetSprite();

	m_legsFlipbook = this->CreateDefaultSubobject<UPaperFlipbookComponent>("LegsFlipbook");
	m_legsFlipbook->SetupAttachment(RootComponent);
	m_legsFlipbook->SetRelativeScale3D(FVector(5.0f, 5.0f, 5.0f));
	m_legsFlipbook->SetRelativeLocationAndRotation(FVector::ZeroVector, FQuat::Identity);
}

void ABangCharacter::OnProjectileHit()
{
	UE_LOG(LogTemp, Log, TEXT("I was hit"));
}

void ABangCharacter::OnMeleeHit()
{
	UE_LOG(LogTemp, Log, TEXT("I was ouch"));
}

void ABangCharacter::OnJump()
{
	m_jumping = true;

	Jump();
}

void ABangCharacter::Landed(const FHitResult & Hit)
{
	Super::OnLanded(Hit);

	m_jumping = false;
}

void ABangCharacter::FireProjectile()
{
	if (m_projectile != NULL)
	{
		UWorld* const world = GetWorld();

		if (world != NULL)
		{
			FActorSpawnParameters params;
			params.Owner = this;
			params.Instigator = Instigator;
			params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			FVector SpawnVector = GetActorLocation();

			FRotator SpawnRotation = GetActorRotation();

			world->SpawnActor<APistolBulletActor>(m_projectile, SpawnVector + (FVector(m_bulletOffset, 0.0f, 0.0f) * (SpawnRotation == FRotator::ZeroRotator ? 1.0f : -1.0f)) , SpawnRotation, params);
		}
	}
}

void ABangCharacter::CreateMeleeHitbox()
{
	if (m_meleeHitbox != NULL)
	{
		UWorld* const world = GetWorld();

		if (world != NULL)
		{
			FActorSpawnParameters params;
			params.Owner = this;
			params.Instigator = Instigator;
			params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			FVector SpawnVector = GetActorLocation();
			FRotator SpawnRotation = GetActorRotation();

			AMeleeHitbox* hitbox = world->SpawnActor<AMeleeHitbox>(m_meleeHitbox, SpawnVector + FVector(m_meleeOffset, 0.0f, 0.0f) * (SpawnRotation == FRotator::ZeroRotator ? 1.0f : -1.0f), SpawnRotation, params);
		}
	}
}

//////////////////////////////////////////////////////////////////////////
// Animation

void ABangCharacter::UpdateAnimation()
{
	const FVector PlayerVelocity = GetVelocity();
	const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();

	// Are we moving or standing still?
	if (m_animationLockTime <= 0.0f)
	{
		UPaperFlipbook* DesiredAnimation = (PlayerSpeedSqr > 0.0f) ? RunningAnimation : IdleAnimation;
		if (m_torsoFlipbook->GetFlipbook() != DesiredAnimation)
		{
			m_torsoFlipbook->SetFlipbook(DesiredAnimation);
		}
	}

	if (m_jumping)
	{
		if (m_legsFlipbook->GetFlipbook() != JumpingAnimationLegs)
		{
			m_legsFlipbook->SetFlipbook(JumpingAnimationLegs);
		}
	}
	else
	{
		UPaperFlipbook* DesiredAnimationLegs = (PlayerSpeedSqr > 0.0f) ? RunningAnimationLegs : IdleAnimationLegs;
		if (m_legsFlipbook->GetFlipbook() != DesiredAnimationLegs)
		{
			m_legsFlipbook->SetFlipbook(DesiredAnimationLegs);
		}
	}
}

void ABangCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (m_animationLockTime > 0.0f)
		m_animationLockTime -= DeltaSeconds;

	UpdateCharacter();
}


//////////////////////////////////////////////////////////////////////////
// Input

void ABangCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Note: the 'Jump' action and the 'MoveRight' axis are bound to actual keys/buttons/sticks in DefaultInput.ini (editable from Project Settings..Input)
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ABangCharacter::OnJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABangCharacter::MoveRight);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &ABangCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ABangCharacter::TouchStopped);

	PlayerInputComponent->BindAction("RangedAttack", IE_Pressed, this, &ABangCharacter::RangedAttack);
	PlayerInputComponent->BindAction("MeleeAttack", IE_Pressed, this, &ABangCharacter::MeleeAttack);
}

void ABangCharacter::RangedAttack()
{
	if (m_animationLockTime <= 0.0f)
	{
		FireProjectile();
		m_torsoFlipbook->SetFlipbook(RangedAttackAnim);
		m_animationLockTime = RangedAttackAnim->GetTotalDuration();
	}
}

void ABangCharacter::MeleeAttack()
{
	if (m_animationLockTime <= 0.0f)
	{
		CreateMeleeHitbox();
		m_torsoFlipbook->SetFlipbook(MeleeAttackAnim);
		m_animationLockTime = MeleeAttackAnim->GetTotalDuration();
	}
}

void ABangCharacter::MoveRight(float Value)
{
	/*UpdateChar();*/

	// Apply the input to the character motion
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
}

void ABangCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void ABangCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

void ABangCharacter::UpdateCharacter()
{
	// Update animation to match the motion
	UpdateAnimation();

	// Now setup the rotation of the controller based on the direction we are travelling
	const FVector PlayerVelocity = GetVelocity();
	float TravelDirection = PlayerVelocity.X;
	// Set the rotation so that the character faces his direction of travel.
	if (Controller != nullptr)
	{
		if (TravelDirection < 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0, 180.0f, 0.0f));
			m_legsFlipbook->SetRelativeLocation(FVector(0.0f, 14.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
			m_legsFlipbook->SetRelativeLocation(FVector(0.0f, -14.0f, 0.0f));
		}
	}
}
