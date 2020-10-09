// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPatrolController.h"
#include "AIPatrol.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackBoardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "AIPatrolPoint.h"
#include "Kismet/GameplayStatics.h"


AAIPatrolController::AAIPatrolController()
{
	/*Init BlackBoard and Behavior Tree*/
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT(" Behavior Tree"));
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT(" Black Board Component"));

	/*Init Black Board Keys*/
	LocationToGoKey = "LocationToGo";
	PlayerKey = "Target";

	CurrentPatrolPoint = 0;
}

void AAIPatrolController::setPlayerCaught(APawn* pawn)
{
	if (BlackboardComp != NULL) {
		BlackboardComp->SetValueAsObject(PlayerKey, pawn);
	
	}


}


void AAIPatrolController::OnPossess(APawn* pawn)
{
	Super::OnPossess(pawn);

	AAIPatrol* AIChracter = Cast<AAIPatrol>(pawn);

	if (AIChracter != NULL) {
	
		if (AIChracter->BehaviorTree->BlackboardAsset != NULL) {
		
			BlackboardComp->InitializeBlackboard(*(AIChracter->BehaviorTree->BlackboardAsset));

		}

		/*Load Patrol Points*/

		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAIPatrolPoint::StaticClass(), PatrolPoints);

		BehaviorComp->StartTree(*(AIChracter->BehaviorTree));

	}

}



