#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BikeWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BikeWidget.BikeWidget_C
// 0x0028 (0x0268 - 0x0240)
class UBikeWidget_C final : public UUserWidget
{
public:
	class UVehicleSeatInfoWidget_C*               BikesidecartDriver_0;                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 BikesidecartImage;                                 // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVehicleSeatInfoWidget_C*               BikesidecartRider_1;                               // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVehicleWheelInfoWidget_C*              VehicleTireSeat_0;                                 // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVehicleWheelInfoWidget_C*              VehicleTireSeat_1;                                 // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BikeWidget_C">();
	}
	static class UBikeWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBikeWidget_C>();
	}
};
static_assert(alignof(UBikeWidget_C) == 0x000008, "Wrong alignment on UBikeWidget_C");
static_assert(sizeof(UBikeWidget_C) == 0x000268, "Wrong size on UBikeWidget_C");
static_assert(offsetof(UBikeWidget_C, BikesidecartDriver_0) == 0x000240, "Member 'UBikeWidget_C::BikesidecartDriver_0' has a wrong offset!");
static_assert(offsetof(UBikeWidget_C, BikesidecartImage) == 0x000248, "Member 'UBikeWidget_C::BikesidecartImage' has a wrong offset!");
static_assert(offsetof(UBikeWidget_C, BikesidecartRider_1) == 0x000250, "Member 'UBikeWidget_C::BikesidecartRider_1' has a wrong offset!");
static_assert(offsetof(UBikeWidget_C, VehicleTireSeat_0) == 0x000258, "Member 'UBikeWidget_C::VehicleTireSeat_0' has a wrong offset!");
static_assert(offsetof(UBikeWidget_C, VehicleTireSeat_1) == 0x000260, "Member 'UBikeWidget_C::VehicleTireSeat_1' has a wrong offset!");

}

