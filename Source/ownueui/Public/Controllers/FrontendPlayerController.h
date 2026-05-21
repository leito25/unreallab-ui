// Leonardo Quinones All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FrontendPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class OWNUEUI_API AFrontendPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	//virtual void BeginPlay() override; // What Begin to play do!
	
	//~ Begin APlayerController Interface
	virtual void OnPossess(APawn* aPawn) override;
	//~ End APlayerController Interface
	
	
	
};
