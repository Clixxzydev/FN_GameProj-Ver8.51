#pragma once
#include "CoreMinimal.h"
#include "OnQuestSeenDelegate.generated.h"

class UFortQuestItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestSeen, const UFortQuestItem*, Quest);

