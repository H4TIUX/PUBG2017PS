#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StanceManagerWidget

#include "Basic.hpp"

#include "BP_StanceManagerWidget_classes.hpp"
#include "BP_StanceManagerWidget_parameters.hpp"


namespace SDK
{

// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.ExecuteUbergraph_BP_StanceManagerWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_StanceManagerWidget_C::ExecuteUbergraph_BP_StanceManagerWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StanceManagerWidget_C", "ExecuteUbergraph_BP_StanceManagerWidget");

	Params::BP_StanceManagerWidget_C_ExecuteUbergraph_BP_StanceManagerWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.OnRider
// (BlueprintCallable, BlueprintEvent)

void UBP_StanceManagerWidget_C::OnRider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StanceManagerWidget_C", "OnRider");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.OnDriver
// (BlueprintCallable, BlueprintEvent)

void UBP_StanceManagerWidget_C::OnDriver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StanceManagerWidget_C", "OnDriver");

	UObject::ProcessEvent(Func, nullptr);
}

}

