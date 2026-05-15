// Copyright Shoodey. All Rights Reserved.

#include "Demo/KitchenSinkDemoCharacter.h"

#include "Components/GSInventory_Component.h"

AKitchenSinkDemoCharacter::AKitchenSinkDemoCharacter()
{
    InventoryComponent = CreateDefaultSubobject<UGSInventory_Component>(TEXT("InventoryComponent"));
}
