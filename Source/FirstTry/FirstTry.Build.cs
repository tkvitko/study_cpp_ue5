// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FirstTry : ModuleRules
{
	public FirstTry(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
