// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterAnimInstance.h"

void UCharacterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	Hero = Cast<AHero>(TryGetPawnOwner());
}

void UCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if(Hero == nullptr)
	{
		Hero = Cast<AHero>(TryGetPawnOwner());// Double check - Useless ?
	}
	if(Hero)
	{
		FVector Velocity = Hero->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();
		
	}
}
