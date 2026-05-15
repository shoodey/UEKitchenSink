// Copyright Shoodey. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "KitchenSinkCharacter.h"
#include "KitchenSinkDemoCharacter.generated.h"

class UGSInventory_Component;

/**
 * Demo character for the GS-plugins integration playground. Subclasses the template's base
 * AKitchenSinkCharacter and adds a UGSInventory_Component so the player can receive items
 * via AGSItem_Pickup overlaps (the pickup finds the IGSCore_ItemSink-implementing component
 * on this actor and deposits there).
 *
 * Lives under Source/KitchenSink/Demo/ — this is the only place that wires plugin components
 * onto KitchenSink template classes. Plugins never reference KitchenSink.
 */
UCLASS()
class KITCHENSINK_API AKitchenSinkDemoCharacter : public AKitchenSinkCharacter
{
    GENERATED_BODY()

public:
    AKitchenSinkDemoCharacter();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
    TObjectPtr<UGSInventory_Component> InventoryComponent;
};
