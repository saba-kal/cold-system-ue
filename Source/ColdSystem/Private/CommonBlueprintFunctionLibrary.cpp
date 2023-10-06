// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonBlueprintFunctionLibrary.h"

TArray<AActor*> UCommonBlueprintFunctionLibrary::GetAllChildActorsOfClass(AActor* parentActor, class TSubclassOf<class AActor> actorClass) {

    TArray<AActor*> actorsArray;
    TArray<AActor*> childActors;
    parentActor->GetAllChildActors(childActors);
    for (int i = 0; i < childActors.Num(); i++)
    {
        AActor* actor = childActors[i];
        if (actor->GetClass()->IsChildOf(actorClass)) {
            actorsArray.Add(actor);
        }
    }
    return actorsArray;
}