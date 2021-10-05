// Fill out your copyright notice in the Description page of Project Settings.


#include "Hero.h"

// Sets default values
AHero::AHero()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraStick = CreateDefaultSubobject<USpringArmComponent>(FName("Camera Stick"));
	CameraStick->SetupAttachment(RootComponent);
	CameraStick->TargetArmLength = 300.f;
	CameraStick->SetRelativeRotation(FRotator(0.f,-30.f,0.f));

	

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(FName("Camera"));
	CameraComponent->SetupAttachment(CameraStick);

}

// Called when the game starts or when spawned
void AHero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Setting up Key/Character Movements
	PlayerInputComponent->BindAxis("MoveForward",this, &AHero::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight",this, &AHero::MoveRight);

	// Setting up Mouse/Camera Movements
	PlayerInputComponent->BindAxis("Turn", this, &AHero::TurnRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AHero::LookUpRate);

	//PlayerInputComponent->BindAxis("Turn", this, &AHero::AddControllerYawInput);
	//PlayerInputComponent->BindAxis("LookUp", this, &AHero::AddControllerPitchInput);

	//Setting up Zoom In/Out
	PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &AHero::ZoomIn);
	PlayerInputComponent->BindAction("ZoomOut", IE_Pressed, this, &AHero::ZoomOut);
}

void AHero::MoveForward(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AHero::MoveRight(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AHero::TurnRate(float Value)
{
	CameraStick->SetRelativeRotation(CameraStick->GetRelativeRotation() + FRotator(0.f,Value,0.f));
}

void AHero::LookUpRate(float Value)
{
	CameraStick->SetRelativeRotation(CameraStick->GetRelativeRotation() - FRotator(Value,0.f,0.f));
}

void AHero::ZoomIn()
{
	CameraStick->TargetArmLength = FMath::Clamp(CameraStick->TargetArmLength - 15.f,100.f,600.f);
}

void AHero::ZoomOut()
{
	CameraStick->TargetArmLength = FMath::Clamp(CameraStick->TargetArmLength + 15.f,100.f,600.f);
}

