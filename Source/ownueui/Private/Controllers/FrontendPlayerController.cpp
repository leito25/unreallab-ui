// Leonardo Quinones All Rights Reserved


#include "Controllers/FrontendPlayerController.h"

#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"

// Runs when this controller takes possession of a pawn.
// So far it preserves the base possession behavior, searches for camera actors
// tagged "Default", and attempts to set the view target to the first match.
void AFrontendPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	
	TArray<AActor*> FoundCameras;
	UGameplayStatics::GetAllActorsOfClassWithTag(
		this, 
		ACameraActor::StaticClass(), 
		FName("Default"), 
		FoundCameras);
	
	if (!FoundCameras.IsEmpty())
	{
		SetViewTarget(FoundCameras[0]);
	}
}
