#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: P_VehicleDrive_Grass_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TslGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass P_VehicleDrive_Grass_BP.P_VehicleDrive_Grass_BP_C
// 0x0008 (0x0400 - 0x03F8)
class AP_VehicleDrive_Grass_BP_C final : public ATslParticle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_P_VehicleDrive_Grass_BP(int32 EntryPoint);
	void OnParameterUpdated();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P_VehicleDrive_Grass_BP_C">();
	}
	static class AP_VehicleDrive_Grass_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AP_VehicleDrive_Grass_BP_C>();
	}
};
static_assert(alignof(AP_VehicleDrive_Grass_BP_C) == 0x000008, "Wrong alignment on AP_VehicleDrive_Grass_BP_C");
static_assert(sizeof(AP_VehicleDrive_Grass_BP_C) == 0x000400, "Wrong size on AP_VehicleDrive_Grass_BP_C");
static_assert(offsetof(AP_VehicleDrive_Grass_BP_C, UberGraphFrame) == 0x0003F8, "Member 'AP_VehicleDrive_Grass_BP_C::UberGraphFrame' has a wrong offset!");

}

