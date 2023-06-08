// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Abilities/GameplayAbility.h"
#include "DemoCharacter.generated.h"

class UAbilitySystemComponent;


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

public:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = GameplayAbilities, meta = (AllowPrivateAccess = "true"))
	UAbilitySystemComponent* AbilitySystem;

	UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
	TArray<TSubclassOf<UGameplayAbility>> MyAbilities;

	UPROPERTY()
	class USAttributeSet* AttributeSet;
	
	void OnHealthChanged(AActor* SInstigator);

	UFUNCTION(BlueprintImplementableEvent)
	void K2_OnHealthChanged(AActor* K2_Instigator);

	void OnPhysicalChanged();

	UFUNCTION(BlueprintImplementableEvent)
	void K2_OnPhysicalChanged();

	UFUNCTION(BlueprintCallable)
	void SetAttackMultiplier(float AttackMultiplier);

public:
	ADemoCharacter();
	

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="GA")
	TSubclassOf<UGameplayAbility> GA_Jump;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="GA")
	TArray<TSubclassOf<UGameplayAbility>> GA_NormalAttack;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="GA")
	TSubclassOf<UGameplayAbility> GA_Block;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="GA")
	TSubclassOf<UGameplayAbility> GA_StopBlock;

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

