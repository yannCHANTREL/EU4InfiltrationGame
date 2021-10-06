// Fill out your copyright notice in the Description page of Project Settings.


#include "MyIAController.h"

#include "AIPatrolPoint.h"
#include "StaticMeshAttributes.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

AMyIAController::AMyIAController (const FObjectInitializer & ObjectInitializer) : Super(ObjectInitializer)
{
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackBoard"));
	BehaviorComponent = CreateDefaultSubobject<UBehaviorTreeComponent>("BehaviourTree");
	
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AMyIAController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AIACharacter * AICharacter = Cast<AIACharacter>(InPawn);

	if(AICharacter)
	{
		if(AICharacter->BehaviourTree->BlackboardAsset)
		{
			BlackboardComponent->InitializeBlackboard(*(AICharacter)->BehaviourTree->BlackboardAsset);
		}
	}
	
	GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Green, "On possess");
	GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Green, "name " + InPawn->GetHumanReadableName());	
	GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Green, "key " + BlackboardComponent->GetKeyName(0).ToString());

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAIPatrolPoint::StaticClass(), PatrolPoints);
	GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Green, FString::Printf(TEXT("Size patrol %d"), PatrolPoints.Num()));

	
	BehaviorComponent->StartTree(*AICharacter->BehaviourTree);

}

void AMyIAController::OnUnPossess()
{
	Super::OnUnPossess();
	GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Red, "On UnPossess");
}

