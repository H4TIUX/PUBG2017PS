#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: P_MotoDrive_Rock_Front_BP

#include "Basic.hpp"

#include "P_MotoDrive_Rock_Front_BP_classes.hpp"
#include "P_MotoDrive_Rock_Front_BP_parameters.hpp"


namespace SDK
{

// Function P_MotoDrive_Rock_Front_BP.P_MotoDrive_Rock_Front_BP_C.ExecuteUbergraph_P_MotoDrive_Rock_Front_BP
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_MotoDrive_Rock_Front_BP_C::ExecuteUbergraph_P_MotoDrive_Rock_Front_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P_MotoDrive_Rock_Front_BP_C", "ExecuteUbergraph_P_MotoDrive_Rock_Front_BP");

	Params::P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P_MotoDrive_Rock_Front_BP.P_MotoDrive_Rock_Front_BP_C.OnParameterUpdated
// (Event, Protected, BlueprintEvent)

void AP_MotoDrive_Rock_Front_BP_C::OnParameterUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P_MotoDrive_Rock_Front_BP_C", "OnParameterUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P_MotoDrive_Rock_Front_BP.P_MotoDrive_Rock_Front_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AP_MotoDrive_Rock_Front_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P_MotoDrive_Rock_Front_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

