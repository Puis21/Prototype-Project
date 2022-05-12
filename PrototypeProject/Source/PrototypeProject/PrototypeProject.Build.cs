// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PrototypeProject : ModuleRules
{
	public PrototypeProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"HeadMountedDisplay",
			"UMG",
            "Slate",
            "SlateCore",
			"CableComponent"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {
			"CableComponent"
		});

	}


}
