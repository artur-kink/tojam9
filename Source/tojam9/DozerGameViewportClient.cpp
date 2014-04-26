

#include "tojam9.h"
#include "DozerGameViewportClient.h"


UDozerGameViewportClient::UDozerGameViewportClient(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

}


bool UDozerGameViewportClient::InputKey(FViewport* Viewport,
	int32 ControllerId,
	FKey Key,
	EInputEvent Event,
	float AmountDepressed,
	bool bGamepad){

	Super::InputKey(Viewport, ControllerId, Key, Event, AmountDepressed, bGamepad);
	return false;
}

