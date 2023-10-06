// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CommonBlueprintFunctionLibrary.generated.h"

/**
 *
 */
UCLASS()
class COLDSYSTEM_API UCommonBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, meta = (DeterminesOutputType = "actorClass"))
    static TArray<AActor*> GetAllChildActorsOfClass(AActor* parentActor, class TSubclassOf<class AActor> actorClass);
};
