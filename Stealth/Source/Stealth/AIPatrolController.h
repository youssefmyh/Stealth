// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "AIPatrolController.generated.h"

/**
 *
 */
UCLASS()
class STEALTH_API AAIPatrolController : public AAIController
{
	GENERATED_BODY()

	/*Behaviour Tree Component*/
	UBehaviorTreeComponent* BehaviorComp;


	/* Black Board Component*/

	UBlackboardComponent* BlackboardComp;

	/*Blackboard Case*/

	UPROPERTY(EditDefaultsOnly, Category = AI)
		FName LocationToGoKey;

	UPROPERTY(EditDefaultsOnly, Category = AI)
		FName PlayerKey;


	TArray <AActor*> PatrolPoints;

	virtual void OnPossess(APawn *pawn) override;


public:
	AAIPatrolController();
	int32 CurrentPatrolPoint;

	void setPlayerCaught(APawn *pawn);
	/*Inline getter function */

	FORCEINLINE UBlackboardComponent* GetBlackBoardComp() const { return BlackboardComp; }

	FORCEINLINE TArray<AActor*> GetPatrolPoints()const { return PatrolPoints; }
};
