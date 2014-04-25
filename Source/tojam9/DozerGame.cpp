

#include "tojam9.h"
#include "DozerGame.h"


ADozerGame::ADozerGame(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	
}

void ADozerGame::BeginPlay(){
	Super::BeginPlay();

	if (GEngine){
		FString Error1;

		ULocalPlayer* newPlayer = GEngine->GameViewport->CreatePlayer(1, Error1, true);
		if (!newPlayer){
			GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Red, Error1);
		}
		else{
			GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Red, TEXT("Created Player 2"));
		}
	}
}