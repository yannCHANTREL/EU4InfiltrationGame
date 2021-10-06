// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "IACharacter.h"
#include "MyIAController.generated.h"

/**
 * 
 */
UCLASS()
class GC_UE4CPP_API AMyIAController : public AAIController
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		AIACharacter * CharacterControlled;
};
