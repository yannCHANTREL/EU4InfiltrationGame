// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_FindRandomPatrol.h"

#include "AIController.h"
#include "AIPatrolPoint.h"
#include "MyIAController.h"
#include "PatrolPoints.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Math/UnrealMathUtility.h"

#include "BehaviorTree/BlackboardData.h"

EBTNodeResult::Type UBTT_FindRandomPatrol::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, "owner task " + OwnerComp.GetAIOwner()->GetName());

	
	if(AMyIAController * IAController = Cast<AMyIAController>(OwnerComp.GetAIOwner()))
	{
		GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Yellow, FString::Printf(TEXT("Size patrol %d"), IAController->GetPatrolPoints().Num()));
		const int IndexNextPosition = FMath::RandRange(0, IAController->GetPatrolPoints().Num()-1);
		const AActor * NextAIPatrolPoint = IAController->GetPatrolPoints()[IndexNextPosition];
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, "next position " + NextAIPatrolPoint->GetActorLocation().ToString());

		OwnerComp.GetBlackboardComponent()->SetValueAsVector("PatrolLocation", NextAIPatrolPoint->GetActorLocation());

		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, "Patrol Location " + OwnerComp.GetBlackboardComponent()->GetValueAsVector("PatrolLocation").ToString());

	}

	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to get IAController from BehaviorTree"));
	}
	
	return EBTNodeResult::Succeeded;

}

