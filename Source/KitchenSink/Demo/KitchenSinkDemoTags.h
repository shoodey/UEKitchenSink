// Copyright Shoodey. All Rights Reserved.

#pragma once

#include "NativeGameplayTags.h"

/**
 * Game-content gameplay tags for the KitchenSink demo. All tags are declared natively in C++;
 * ImportTagsFromConfig=False is set in DefaultEngine.ini so nothing else can register tags
 * from .ini files.
 *
 * Plugin-API tags (GS.<Plugin>.<Domain>.*) live inside their respective GS plugins. This file
 * is for *content* tags the game's own definitions and code reference.
 */
namespace KitchenSinkDemoTags
{
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Items_Id_HealthPotion);
}
