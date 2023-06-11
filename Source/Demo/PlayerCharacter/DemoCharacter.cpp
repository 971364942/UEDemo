// Copyright Epic Games, Inc. All Rights Reserved.

#include "DemoCharacter.h"

#include "AbilitySystemComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "SPlayerAttributeSet.h"
#include "Components/BoxComponent.h"
#include "../Interactable/SInteractableActorComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"


//////////////////////////////////////////////////////////////////////////
// ADemoCharacter

UAbilitySystemComponent* ADemoCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystem;
}

ADemoCharacter::ADemoCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	TimeDilationScopeBoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("TimeDilationScopeBoxComp"));
	TimeDilationScopeBoxComp->SetGenerateOverlapEvents(false);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
	LeftHandCollisionBoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftHandCollisionBoxComp"));
	RightHandCollisionBoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("RightHandCollisionBoxComp"));

	AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));
	AttributeSet = CreateDefaultSubobject<USPlayerAttributeSet>("AttributeSet");

	InteractableActorComp = CreateDefaultSubobject<USInteractableActorComponent>("InteractableActorComp");
	
	bIsAttack = false;
	bInTurn = false;
	AttackRange = 200.0f;
}

void ADemoCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	AttributeSet->OnHealthChanged.AddUObject(this, &ADemoCharacter::OnHealthChanged);

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	/*if (AbilitySystem)
	{
		if (MyAbilities.Num() > 0)
		{
			for (auto i = 0; i < MyAbilities.Num(); i++)
			{
				if (MyAbilities[i] == nullptr)
				{
					continue;
				}
				AbilitySystem->GiveAbility(FGameplayAbilitySpec(MyAbilities[i], 1, 0));
			}
		}

		AbilitySystem->InitAbilityActorInfo(this, this);
	}*/
}

void ADemoCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
}

FVector ADemoCharacter::GetPawnViewLocation() const
{
	return FollowCamera->GetComponentLocation();
}

//////////////////////////////////////////////////////////////////////////
// Input

void ADemoCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ADemoCharacter::GAJump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ADemoCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ADemoCharacter::Look);
		
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &ADemoCharacter::NormalAttack);

		EnhancedInputComponent->BindAction(BlockAction, ETriggerEvent::Started, this, &ADemoCharacter::Block);
		EnhancedInputComponent->BindAction(BlockAction, ETriggerEvent::Completed, this, &ADemoCharacter::StopBlock);

	}

}

void ADemoCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ADemoCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ADemoCharacter::NormalAttack_Implementation()
{

	HitResults.Empty();
	
	TraceActorLocation = FVector(0, 0, 0);
	
	//寻找目标
	if (!bInTurn && !bIsAttack)
	{
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectQueryParams;
		ObjectQueryParams.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic));
		ObjectQueryParams.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
		
		TArray<AActor*> ActorsToIgnore;
		
		bool TraceHit = UKismetSystemLibrary::SphereTraceMultiForObjects(this, GetActorLocation(), GetActorLocation(), AttackRange, ObjectQueryParams, false, ActorsToIgnore, EDrawDebugTrace::None, HitResults, true);

		HitResults.Sort([this](const FHitResult&A, const FHitResult&B)
		{
			float fA = UKismetMathLibrary::Abs(UKismetMathLibrary::NormalizedDeltaRotator(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), A.GetActor()->GetActorLocation()),GetActorRotation()).Yaw);
			float fB = UKismetMathLibrary::Abs(UKismetMathLibrary::NormalizedDeltaRotator(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), B.GetActor()->GetActorLocation()),GetActorRotation()).Yaw);
			return fA < fB;
		});
		
		if (HitResults.IsValidIndex(0))
		{
			TraceActorLocation =  HitResults[0].GetActor()->GetActorLocation();
		}

		for (FHitResult HitResult : HitResults)
		{
			AActor* TraceActor = HitResult.GetActor();
			if (TraceActor != nullptr && UKismetSystemLibrary::DoesImplementInterface(TraceActor, UAbilitySystemInterface::StaticClass()))
			{
				TraceActorLocation =  TraceActor->GetActorLocation();
				break;
			}
		}
	}
		
	//攻击
	if (AbilitySystem)
	{
		if (GA_NormalAttack.Num() > 0)
		{
			for (auto i = 0; i < GA_NormalAttack.Num(); i++)
			{
				bIsAttack =  AbilitySystem->TryActivateAbilityByClass(GA_NormalAttack[i]);
				if (bIsAttack)
				{
					break;
				}
			}
		}
	}
}

void ADemoCharacter::GAJump()
{
	if (AbilitySystem)
	{
		if (ensure(GA_Jump))
		{
			AbilitySystem->TryActivateAbilityByClass(GA_Jump);
		}
	}
}

void ADemoCharacter::Block()
{
	if (AbilitySystem)
	{
		if (ensure(GA_Block))
		{
			AbilitySystem->TryActivateAbilityByClass(GA_Block);
		}
	}
}

void ADemoCharacter::StopBlock()
{
	if (AbilitySystem)
	{
		if (ensure(GA_StopBlock))
		{
			AbilitySystem->TryActivateAbilityByClass(GA_StopBlock);
		}
	}
}


void ADemoCharacter::OnHealthChanged(AActor* SInstigator)
{
	K2_OnHealthChanged(SInstigator);
}

void ADemoCharacter::OnPhysicalChanged()
{
	K2_OnPhysicalChanged();
}


void ADemoCharacter::SetAttackMultiplier(float AttackMultiplier)
{
	AttributeSet->SetAttackMultiplier(AttackMultiplier);
}

