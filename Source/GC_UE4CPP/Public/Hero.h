// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Hero.generated.h"

UCLASS()
class GC_UE4CPP_API AHero : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHero();
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraStick;
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void MoveForward(float Value);
	
	UFUNCTION()
	void MoveRight(float Value);

	UFUNCTION()
	void TurnRate(float Value);

	UFUNCTION()
	void LookUpRate(float Value);

	UFUNCTION()
	void ZoomIn();

	UFUNCTION()
	void ZoomOut();

};
