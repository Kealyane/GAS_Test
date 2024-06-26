// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GasTest : ModuleRules
{
	public GasTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
			{ 
				"Core", 
				"CoreUObject", 
				"Engine", 
				"InputCore", 
				"EnhancedInput",
				"GameplayAbilities",
				"GameplayTags",
				"GameplayTasks"
			});
	}
}
