#pragma once

#include "GameFramework/GameMode.h"
#include "DozerGame.generated.h"

/**
 * 
 */
UCLASS()
class ADozerGame : public AGameMode
{
	GENERATED_UCLASS_BODY()

	virtual void BeginPlay() OVERRIDE;
	
};
