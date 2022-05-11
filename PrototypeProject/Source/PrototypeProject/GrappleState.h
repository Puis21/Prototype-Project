#pragma once

UENUM(BlueprintType)
enum class EGrappleState : uint8
{
	EGS_Retracted UMETA(DisplayName = "Hook Retracted"),
	EGS_Firing UMETA(DisplayName = "Hook Firing"),
	EGS_NearingTarget UMETA(DisplayName = "Hook Near Target"),
	EGS_OnTarget UMETA(DisplayName = "Hook Attached to Target")
};
