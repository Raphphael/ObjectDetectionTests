using UnrealBuildTool;

public class UEAzureTest2Target : TargetRules
{
	public UEAzureTest2Target(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V2;
		Type = TargetType.Game;
		ExtraModuleNames.Add("UEAzureTest2");
	}
}
