// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPatrol.h"
#include "AIPatrolController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackBoardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "AIPatrolPoint.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/PawnSensingComponent.h"

// Sets default values
AAIPatrol::AAIPatrol()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	/*Init Sensing Component*/
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("Pawn Sensing Component"));
	PawnSensingComp->SetPeripheralVisionAngle(90.0f);

}

// Called when the game starts or when spawned
void AAIPatrol::BeginPlay()
{
	Super::BeginPlay();
	if (PawnSensingComp != NULL) {
	
		PawnSensingComp->OnSeePawn.AddDynamic(this, &AAIPatrol::OnPlayCaught);
	}


}


// Called to bind functionality to input
void AAIPatrol::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAIPatrol::OnPlayCaught(APawn* pawn)
{
//
	AAIPatrolController* PlayerController = Cast<AAIPatrolController>(GetController());

	if (PlayerController != NULL) {

		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, TEXT("You have been Caught"));
	
		PlayerController->setPlayerCaught(pawn);
	}

}

