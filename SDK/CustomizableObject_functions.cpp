#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomizableObject

#include "Basic.hpp"

#include "CustomizableObject_classes.hpp"


namespace SDK
{

// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
// (Final, Native, Public, BlueprintCallable)

void UCustomizableObjectInstance::SetRandomValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetRandomValues");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

