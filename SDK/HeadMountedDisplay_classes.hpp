#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeadMountedDisplay

#include "Basic.hpp"

#include "HeadMountedDisplay_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class HeadMountedDisplay.MotionControllerComponent
// 0x0020 (0x06F0 - 0x06D0)
class UMotionControllerComponent final : public UPrimitiveComponent
{
public:
	int32                                         PlayerIndex;                                       // 0x06C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EControllerHand                               Hand;                                              // 0x06CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6CD[0x3];                                      // 0x06CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bDisableLowLatencyUpdate : 1;                      // 0x06D0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_6D1[0x3];                                      // 0x06D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	ETrackingStatus                               CurrentTrackingStatus;                             // 0x06D4(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6D5[0x1B];                                     // 0x06D5(0x001B)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool IsTracked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionControllerComponent">();
	}
	static class UMotionControllerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionControllerComponent>();
	}
};
static_assert(alignof(UMotionControllerComponent) == 0x000010, "Wrong alignment on UMotionControllerComponent");
static_assert(sizeof(UMotionControllerComponent) == 0x0006F0, "Wrong size on UMotionControllerComponent");
static_assert(offsetof(UMotionControllerComponent, PlayerIndex) == 0x0006C8, "Member 'UMotionControllerComponent::PlayerIndex' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, Hand) == 0x0006CC, "Member 'UMotionControllerComponent::Hand' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, CurrentTrackingStatus) == 0x0006D4, "Member 'UMotionControllerComponent::CurrentTrackingStatus' has a wrong offset!");

// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0080 (0x0178 - 0x00F8)
class UVRNotificationsComponent final : public UActorComponent
{
public:
	UMulticastDelegateProperty_                   HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x00F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDTrackingInitializedDelegate;                    // 0x0108(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDRecenteredDelegate;                             // 0x0118(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDLostDelegate;                                   // 0x0128(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDReconnectedDelegate;                            // 0x0138(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDConnectCanceledDelegate;                        // 0x0148(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDPutOnHeadDelegate;                              // 0x0158(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   HMDRemovedFromHeadDelegate;                        // 0x0168(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VRNotificationsComponent">();
	}
	static class UVRNotificationsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVRNotificationsComponent>();
	}
};
static_assert(alignof(UVRNotificationsComponent) == 0x000008, "Wrong alignment on UVRNotificationsComponent");
static_assert(sizeof(UVRNotificationsComponent) == 0x000178, "Wrong size on UVRNotificationsComponent");
static_assert(offsetof(UVRNotificationsComponent, HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate) == 0x0000F8, "Member 'UVRNotificationsComponent::HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDTrackingInitializedDelegate) == 0x000108, "Member 'UVRNotificationsComponent::HMDTrackingInitializedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDRecenteredDelegate) == 0x000118, "Member 'UVRNotificationsComponent::HMDRecenteredDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDLostDelegate) == 0x000128, "Member 'UVRNotificationsComponent::HMDLostDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDReconnectedDelegate) == 0x000138, "Member 'UVRNotificationsComponent::HMDReconnectedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDConnectCanceledDelegate) == 0x000148, "Member 'UVRNotificationsComponent::HMDConnectCanceledDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDPutOnHeadDelegate) == 0x000158, "Member 'UVRNotificationsComponent::HMDPutOnHeadDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDRemovedFromHeadDelegate) == 0x000168, "Member 'UVRNotificationsComponent::HMDRemovedFromHeadDelegate' has a wrong offset!");

}

