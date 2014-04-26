

#pragma once

#include "Engine/GameViewportClient.h"
#include "DozerGameViewportClient.generated.h"

/**
 * 
 */
UCLASS()
class UDozerGameViewportClient : public UGameViewportClient
{
	GENERATED_UCLASS_BODY()

	virtual bool InputKey(FViewport* Viewport,
		int32 ControllerId,
		FKey Key,
		EInputEvent Event,
		float AmountDepressed,
		bool bGamepad);
	
};
