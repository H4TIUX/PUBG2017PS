#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeathDropItemPackage

#include "Basic.hpp"

#include "DeathDropItemPackage_classes.hpp"
#include "DeathDropItemPackage_parameters.hpp"


namespace SDK
{

// Function DeathDropItemPackage.DeathDropItemPackage_C.ExecuteUbergraph_DeathDropItemPackage
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADeathDropItemPackage_C::ExecuteUbergraph_DeathDropItemPackage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeathDropItemPackage_C", "ExecuteUbergraph_DeathDropItemPackage");

	Params::DeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DeathDropItemPackage.DeathDropItemPackage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ADeathDropItemPackage_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeathDropItemPackage_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeathDropItemPackage.DeathDropItemPackage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeathDropItemPackage_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeathDropItemPackage_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeathDropItemPackage.DeathDropItemPackage_C.GetCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Category                                               (Parm, OutParm)

void ADeathDropItemPackage_C::GetCategory(class FText* Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeathDropItemPackage_C", "GetCategory");

	Params::DeathDropItemPackage_C_GetCategory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Category != nullptr)
		*Category = std::move(Parms.Category);
}

}

