#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Church

#include "Basic.hpp"

#include "BP_Church_classes.hpp"


namespace SDK
{

// Function BP_Church.BP_Church_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Church_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Church_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

