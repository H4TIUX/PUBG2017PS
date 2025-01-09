#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterProxyBase

#include "Basic.hpp"

#include "CharacterProxyBase_classes.hpp"
#include "CharacterProxyBase_parameters.hpp"


namespace SDK
{

// Function CharacterProxyBase.CharacterProxyBase_C.ExecuteUbergraph_CharacterProxyBase
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacterProxyBase_C::ExecuteUbergraph_CharacterProxyBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterProxyBase_C", "ExecuteUbergraph_CharacterProxyBase");

	Params::CharacterProxyBase_C_ExecuteUbergraph_CharacterProxyBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterProxyBase.CharacterProxyBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ACharacterProxyBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterProxyBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterProxyBase.CharacterProxyBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACharacterProxyBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterProxyBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

