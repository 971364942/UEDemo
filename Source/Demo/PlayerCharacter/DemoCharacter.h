// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Abilities/GameplayAbility.h"
#include "DemoCharacter.generated.h"

class UAbilitySystemComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInput);


UCLASS(config=Game)
class ADemoCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Component, meta = (AllowPrivateAccess = "true"))
	class USInteractableActorComponent* InteractableActorComp;

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* AttackAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* BlockAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* PrimaryInteract;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* SecondaryInteract;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* FunctionKey;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* DodgeAction;
	


public:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = GameplayAbilities, meta = (AllowPrivateAccess = "true"))
	UAbilitySystemComponent* AbilitySystem;

	UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
	TArray<TSubclassOf<UGameplayAbility>> MyAbilities;

	UPROPERTY()
	class USPlayerAttributeSet* AttributeSet;
	
	void OnHealthChanged(AActor* SInstigator, float ChangeHealth);

	UFUNCTION(BlueprintImplementableEvent)
	void K2_OnHealthChanged(AActor* K2_Instigator);

	void OnPhysicalChanged(AActor* SInstigator, float ChangePhysical);

	UFUNCTION(BlueprintImplementableEvent)
	void K2_OnPhysicalChanged();

	UFUNCTION(BlueprintCallable)
	void SetAttackMultiplier(float AttackMultiplier);
	
	UPROPERTY()
	FOnInput OnPrimaryInteract;

public:
	ADemoCharacter();

	virtual void Tick(float DeltaSeconds) override;

	virtual void Falling() override;

	virtual void Landed(const FHitResult& Hit) override;

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);
	void StopMove();

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void NormalAttack();

	UPROPERTY()
	TArray<FHitResult> HitResults;

	UPROPERTY(BlueprintReadOnly)
	FVector TraceActorLocation;

	UPROPERTY(BlueprintReadWrite)
	bool bIsAttack;
	
	UPROPERTY(BlueprintReadWrite)
	bool bInTurn;

	UPROPERTY(BlueprintReadWrite)
	float AttackRange;

	void GAJump();

	void Block();
	void StopBlock();

	void PrimaryInteractAction();
	void SecondaryInteractAction();

	void Function();

	void Dodge();

	void OnMoveSpeedAttributeChanged(const FOnAttributeChangeData& Data);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="GA")
	TSubclassOf<UGameplayAbility> GA_Jump;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="GA")
	TArray<TSubclassOf<UGameplayAbility>> GA_NormalAttack;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="GA")
	TSubclassOf<UGameplayAbility> GA_Block;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="GA")
	TSubclassOf<UGameplayAbility> GA_StopBlock;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="GA")
	TSubclassOf<UGameplayAbility> GA_Dodge;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UBoxComponent* LeftHandCollisionBoxComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UBoxComponent* RightHandCollisionBoxComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UBoxComponent* TimeDilationScopeBoxComp;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay() override;

	void PostInitializeComponents() override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	virtual FVector GetPawnViewLocation()const override;
};

