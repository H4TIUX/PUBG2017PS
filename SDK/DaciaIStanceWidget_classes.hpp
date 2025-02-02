#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DaciaIStanceWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DaciaIStanceWidget.DaciaIStanceWidget_C
// 0x0028 (0x0268 - 0x0240)
class UDaciaIStanceWidget_C final : public UUserWidget
{
public:
	class UImage*                                 DaciaImage;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVehicleWheelInfoWidget_C*              VehicleTireSeatInfoWidget_C_9;                     // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVehicleWheelInfoWidget_C*              VehicleTireSeatInfoWidget_C_10;                    // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVehicleWheelInfoWidget_C*              VehicleTireSeatInfoWidget_C_11;                    // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVehicleWheelInfoWidget_C*              VehicleTireSeatInfoWidget_C_12;                    // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DaciaIStanceWidget_C">();
	}
	static class UDaciaIStanceWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaciaIStanceWidget_C>();
	}
};
static_assert(alignof(UDaciaIStanceWidget_C) == 0x000008, "Wrong alignment on UDaciaIStanceWidget_C");
static_assert(sizeof(UDaciaIStanceWidget_C) == 0x000268, "Wrong size on UDaciaIStanceWidget_C");
static_assert(offsetof(UDaciaIStanceWidget_C, DaciaImage) == 0x000240, "Member 'UDaciaIStanceWidget_C::DaciaImage' has a wrong offset!");
static_assert(offsetof(UDaciaIStanceWidget_C, VehicleTireSeatInfoWidget_C_9) == 0x000248, "Member 'UDaciaIStanceWidget_C::VehicleTireSeatInfoWidget_C_9' has a wrong offset!");
static_assert(offsetof(UDaciaIStanceWidget_C, VehicleTireSeatInfoWidget_C_10) == 0x000250, "Member 'UDaciaIStanceWidget_C::VehicleTireSeatInfoWidget_C_10' has a wrong offset!");
static_assert(offsetof(UDaciaIStanceWidget_C, VehicleTireSeatInfoWidget_C_11) == 0x000258, "Member 'UDaciaIStanceWidget_C::VehicleTireSeatInfoWidget_C_11' has a wrong offset!");
static_assert(offsetof(UDaciaIStanceWidget_C, VehicleTireSeatInfoWidget_C_12) == 0x000260, "Member 'UDaciaIStanceWidget_C::VehicleTireSeatInfoWidget_C_12' has a wrong offset!");

}

