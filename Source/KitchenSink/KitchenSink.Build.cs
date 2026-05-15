// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class KitchenSink : ModuleRules
{
	public KitchenSink(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate",
			"GameplayTags",
			"GSInventory"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"KitchenSink",
			"KitchenSink/Variant_Platforming",
			"KitchenSink/Variant_Platforming/Animation",
			"KitchenSink/Variant_Combat",
			"KitchenSink/Variant_Combat/AI",
			"KitchenSink/Variant_Combat/Animation",
			"KitchenSink/Variant_Combat/Gameplay",
			"KitchenSink/Variant_Combat/Interfaces",
			"KitchenSink/Variant_Combat/UI",
			"KitchenSink/Variant_SideScrolling",
			"KitchenSink/Variant_SideScrolling/AI",
			"KitchenSink/Variant_SideScrolling/Gameplay",
			"KitchenSink/Variant_SideScrolling/Interfaces",
			"KitchenSink/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
