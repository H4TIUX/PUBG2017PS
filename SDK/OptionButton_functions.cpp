#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionButton

#include "Basic.hpp"

#include "OptionButton_classes.hpp"
#include "OptionButton_parameters.hpp"


namespace SDK
{

// Function OptionButton.OptionButton_C.ExecuteUbergraph_OptionButton
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionButton_C::ExecuteUbergraph_OptionButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionButton_C", "ExecuteUbergraph_OptionButton");

	Params::OptionButton_C_ExecuteUbergraph_OptionButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionButton.OptionButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionButton_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionButton.OptionButton_C.GetText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UOptionButton_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionButton_C", "GetText_0");

	Params::OptionButton_C_GetText_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OptionButton.OptionButton_C.SetButtonBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InBackgroundColor                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionButton_C::SetButtonBgColor(const struct FLinearColor& InBackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionButton_C", "SetButtonBgColor");

	Params::OptionButton_C_SetButtonBgColor Parms{};

	Parms.InBackgroundColor = std::move(InBackgroundColor);

	UObject::ProcessEvent(Func, &Parms);
}

}

