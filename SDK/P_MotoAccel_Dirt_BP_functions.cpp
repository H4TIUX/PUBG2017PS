#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: P_MotoAccel_Dirt_BP

#include "Basic.hpp"

#include "P_MotoAccel_Dirt_BP_classes.hpp"
#include "P_MotoAccel_Dirt_BP_parameters.hpp"


namespace SDK
{

// Function P_MotoAccel_Dirt_BP.P_MotoAccel_Dirt_BP_C.ExecuteUbergraph_P_MotoAccel_Dirt_BP
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_MotoAccel_Dirt_BP_C::ExecuteUbergraph_P_MotoAccel_Dirt_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P_MotoAccel_Dirt_BP_C", "ExecuteUbergraph_P_MotoAccel_Dirt_BP");

	Params::P_MotoAccel_Dirt_BP_C_ExecuteUbergraph_P_MotoAccel_Dirt_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P_MotoAccel_Dirt_BP.P_MotoAccel_Dirt_BP_C.OnParameterUpdated
// (Event, Protected, BlueprintEvent)

void AP_MotoAccel_Dirt_BP_C::OnParameterUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P_MotoAccel_Dirt_BP_C", "OnParameterUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P_MotoAccel_Dirt_BP.P_MotoAccel_Dirt_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AP_MotoAccel_Dirt_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P_MotoAccel_Dirt_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

