#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dacia_Seat_Driver

#include "Basic.hpp"

#include "VehicleSeatDriver_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Dacia_Seat_Driver.Dacia_Seat_Driver_C
// 0x0000 (0x0458 - 0x0458)
class ADacia_Seat_Driver_C final : public AVehicleSeatDriver_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Dacia_Seat_Driver_C">();
	}
	static class ADacia_Seat_Driver_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADacia_Seat_Driver_C>();
	}
};
static_assert(alignof(ADacia_Seat_Driver_C) == 0x000008, "Wrong alignment on ADacia_Seat_Driver_C");
static_assert(sizeof(ADacia_Seat_Driver_C) == 0x000458, "Wrong size on ADacia_Seat_Driver_C");

}

