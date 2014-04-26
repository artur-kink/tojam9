

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

	if (ControllerId == 0){

		if (Key.GetDisplayName().ToString().Equals(TEXT("Up"))){
			Super::InputKey(Viewport, 1, FKey("W"), Event, AmountDepressed, bGamepad);
		}
		else if (Key.GetDisplayName().ToString().Equals(TEXT("Down"))){
			Super::InputKey(Viewport, 1, FKey("S"), Event, AmountDepressed, bGamepad);
		}
		else if (Key.GetDisplayName().ToString().Equals(TEXT("Left"))){
			Super::InputKey(Viewport, 1, FKey("A"), Event, AmountDepressed, bGamepad);
		}
		else if (Key.GetDisplayName().ToString().Equals(TEXT("Right"))){
			Super::InputKey(Viewport, 1, FKey("D"), Event, AmountDepressed, bGamepad);
		}
	}

	return true;
}

