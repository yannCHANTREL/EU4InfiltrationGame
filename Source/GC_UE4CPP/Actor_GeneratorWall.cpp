// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor_GeneratorWall.h"

// Sets default values
AActor_GeneratorWall::AActor_GeneratorWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SceneComponent = CreateDefaultSubobject<USceneComponent>(FName("RootScene"));
    RootComponent = SceneComponent;

}

// Called when the game starts or when spawned
void AActor_GeneratorWall::BeginPlay()
{
	Super::BeginPlay();
	CreateWall();
}

void AActor_GeneratorWall::CreateWall()
{
	FVector positionDepart = FVector(0,0,0);
	float posY = positionDepart.Y;
	float posZ = positionDepart.Z;

	FVector a = this->GetActorScale3D();
	FVector b = this->GetActorRelativeScale3D();
	UE_LOG(LogTemp, Warning, TEXT("The vector value is: %s"), *a.ToString());
	UE_LOG(LogTemp, Warning, TEXT("The vector value is: %s"), *b.ToString());

	for (int i = 0; i < NumberWallY; i++)
	{
		float posX = positionDepart.X;
		for (int j = 0; j < NumberWallX; j++)
		{
			FTransform transform = FTransform(FVector(posX,posY,posZ));
			UnWallPrefab->AddInstance(transform);

			if (Axe == AxeX)
			{
				posX+=161;
			}
		}
		posZ+=100;
	}
}

// Called every frame
void AActor_GeneratorWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

