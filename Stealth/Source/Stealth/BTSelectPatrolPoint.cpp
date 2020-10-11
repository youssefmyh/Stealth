// Fill out your copyright notice in the Description page of Project Settings.


#include "BTSelectPatrolPoint.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIPatrolPoint.h"
#include "AIPatrolController.h"

EBTNodeResult::Type UBTSelectPatrolPoint::ExecuteTask(UBehaviorTreeComponent& CompOwenr, uint8* Nodememory)
{

    AAIPatrolController* patrolController = Cast<AAIPatrolController>(CompOwenr.GetOwner());

    if (patrolController != NULL) {
        
       UBlackboardComponent *blackboardComponent =  patrolController->GetBlackBoardComp();
       AAIPatrolPoint * currenPoint = Cast<AAIPatrolPoint> (blackboardComponent->GetValueAsObject("LocationToGo"));
    
       AAIPatrolPoint* NextPatrolPoint = nullptr;

       TArray<AActor*> availabelsPoints = patrolController->GetPatrolPoints();

       if (patrolController->CurrentPatrolPoint < availabelsPoints.Num() - 1) {
       
           NextPatrolPoint = Cast<AAIPatrolPoint>(availabelsPoints[++patrolController->CurrentPatrolPoint]);
       }
       else {
       
           NextPatrolPoint = Cast<AAIPatrolPoint>(availabelsPoints[0]);
           patrolController->CurrentPatrolPoint = 0;
       
       }

       blackboardComponent->SetValueAsObject("LocationToGo", NextPatrolPoint);

       return EBTNodeResult::Succeeded;
       

    }


    return  EBTNodeResult::Failed;
}
