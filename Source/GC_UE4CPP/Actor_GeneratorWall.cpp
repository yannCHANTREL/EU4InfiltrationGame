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
}

void AActor_GeneratorWall::CreateWallFromEditor()
{
	
	CreateWall(GetActorLocation());
}

void AActor_GeneratorWall::CreateWallFromPlay()
{
	CreateWall(FVector(0,0,0));
}

void AActor_GeneratorWall::CreateWall(FVector positionDepart)
{
	if(UnWallPrefab == nullptr || UnWallPrefab->GetStaticMesh() == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1,5,FColor::Red,"Veuillez sélectionné le mesh souhaitez");
		return;
	}
	
	FVector tailleComposant = UnWallPrefab->GetStaticMesh()->GetBounds().GetBox().GetSize();
	float posX;
	float posY = positionDepart.Y;
	float posZ = positionDepart.Z + tailleComposant.Z / 2;
	
	for (int i = 0; i < NumberWallY; i++)
	{
		posX = positionDepart.X + tailleComposant.X / 2;
	 	for (int j = 0; j < NumberWallX; j++)
	 	{
	 		UnWallPrefab->AddInstance(FTransform(FVector(posX,posY,posZ)));
	 		posX += tailleComposant.X;
	 	}
	 	posZ += tailleComposant.Z;
	 }
}

// Called every frame
void AActor_GeneratorWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

