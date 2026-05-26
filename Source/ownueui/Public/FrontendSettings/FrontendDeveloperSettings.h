// Leonardo Quinones All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "Widgets/Widget_ActivatableBase.h"
#include "FrontendDeveloperSettings.generated.h"


class UWidget_ActivatableBase;

/**
 * 
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "FrontendDeveloperSettings"))
class OWNUEUI_API UFrontendDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	// Map with the tag vs the widget
	UPROPERTY(Config, EditAnywhere, Category = "Widget Reference", meta = (ForceInLineRow, Categories = "Frontend.Widget"))
	TMap<FGameplayTag, TSoftClassPtr<UWidget_ActivatableBase>> FrontendWidgetMap;
};
