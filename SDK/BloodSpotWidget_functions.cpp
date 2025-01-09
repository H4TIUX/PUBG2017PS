#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BloodSpotWidget

#include "Basic.hpp"

#include "BloodSpotWidget_classes.hpp"
#include "BloodSpotWidget_parameters.hpp"


namespace SDK
{

// Function BloodSpotWidget.BloodSpotWidget_C.ExecuteUbergraph_BloodSpotWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBloodSpotWidget_C::ExecuteUbergraph_BloodSpotWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BloodSpotWidget_C", "ExecuteUbergraph_BloodSpotWidget");

	Params::BloodSpotWidget_C_ExecuteUbergraph_BloodSpotWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BloodSpotWidget.BloodSpotWidget_C.Finish
// (BlueprintCallable, BlueprintEvent)

void UBloodSpotWidget_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BloodSpotWidget_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BloodSpotWidget.BloodSpotWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBloodSpotWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BloodSpotWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

