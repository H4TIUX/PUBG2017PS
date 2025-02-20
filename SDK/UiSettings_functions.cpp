#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UiSettings

#include "Basic.hpp"

#include "UiSettings_classes.hpp"
#include "UiSettings_parameters.hpp"


namespace SDK
{

// Function UiSettings.UiSettings_C.ExecuteUbergraph_UiSettings
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiSettings_C::ExecuteUbergraph_UiSettings(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UiSettings_C", "ExecuteUbergraph_UiSettings");

	Params::UiSettings_C_ExecuteUbergraph_UiSettings Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UiSettings.UiSettings_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUiSettings_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UiSettings_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UiSettings.UiSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUiSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UiSettings_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UiSettings.UiSettings_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUiSettings_C::OnDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UiSettings_C", "OnDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UiSettings.UiSettings_C.InitUiSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUiSettings_C::InitUiSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UiSettings_C", "InitUiSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UiSettings.UiSettings_C.SetToDefault
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUiSettings_C::SetToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UiSettings_C", "SetToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UiSettings.UiSettings_C.ApplyByCurrentSelectedSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UUiSettings_C::ApplyByCurrentSelectedSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UiSettings_C", "ApplyByCurrentSelectedSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UiSettings.UiSettings_C.IsEnableApply
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUiSettings_C::IsEnableApply() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UiSettings_C", "IsEnableApply");

	Params::UiSettings_C_IsEnableApply Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UiSettings.UiSettings_C.IsChanged
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUiSettings_C::IsChanged() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UiSettings_C", "IsChanged");

	Params::UiSettings_C_IsChanged Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UiSettings.UiSettings_C.GetSelectUseCharacterCapture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    UseCharacterCapture                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiSettings_C::GetSelectUseCharacterCapture(bool* UseCharacterCapture) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UiSettings_C", "GetSelectUseCharacterCapture");

	Params::UiSettings_C_GetSelectUseCharacterCapture Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (UseCharacterCapture != nullptr)
		*UseCharacterCapture = Parms.UseCharacterCapture;
}

}

