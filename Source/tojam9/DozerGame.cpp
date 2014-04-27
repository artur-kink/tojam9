

#include "tojam9.h"
#include "DozerGame.h"


ADozerGame::ADozerGame(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	
}

void ADozerGame::BeginPlay(){
	Super::BeginPlay();

	if (GEngine->GetNumGamePlayers(GEngine->GameViewport) == 1){
		FString Error1;

		//Spawn second player, first player spawned automatically.
		ULocalPlayer* newPlayer = GEngine->GameViewport->CreatePlayer(1, Error1, true);
		if (!newPlayer){
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, Error1);
		}
		else{
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("Created Player 2"));
			//Move player 2 pawn to start position.
			newPlayer->PlayerController->StartSpot = FindPlayerStart(NULL, "P2");
			newPlayer->PlayerController->GetPawn()->SetActorLocation(
				newPlayer->PlayerController->StartSpot->GetActorLocation(), false);
		}
	}
	
}