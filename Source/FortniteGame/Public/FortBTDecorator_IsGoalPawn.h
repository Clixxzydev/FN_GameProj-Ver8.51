#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "FortBTDecorator_IsGoalPawn.generated.h"

UCLASS(Blueprintable)
class UFortBTDecorator_IsGoalPawn : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UFortBTDecorator_IsGoalPawn();
};

