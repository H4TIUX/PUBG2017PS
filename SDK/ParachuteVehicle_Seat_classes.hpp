#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ParachuteVehicle_Seat

#include "Basic.hpp"

#include "TslGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ParachuteVehicle_Seat.ParachuteVehicle_Seat_C
// 0x0008 (0x0430 - 0x0428)
class AParachuteVehicle_Seat_C final : public AParachuteVehicleSeatActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ParachuteVehicle_Seat_C">();
	}
	static class AParachuteVehicle_Seat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParachuteVehicle_Seat_C>();
	}
};
static_assert(alignof(AParachuteVehicle_Seat_C) == 0x000008, "Wrong alignment on AParachuteVehicle_Seat_C");
static_assert(sizeof(AParachuteVehicle_Seat_C) == 0x000430, "Wrong size on AParachuteVehicle_Seat_C");
static_assert(offsetof(AParachuteVehicle_Seat_C, DefaultSceneRoot) == 0x000428, "Member 'AParachuteVehicle_Seat_C::DefaultSceneRoot' has a wrong offset!");

}

