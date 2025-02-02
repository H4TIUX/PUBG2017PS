#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TslHealthGaugeBpWidget

#include "Basic.hpp"

#include "TslHealthGaugeBpWidget_classes.hpp"
#include "TslHealthGaugeBpWidget_parameters.hpp"


namespace SDK
{

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.ExecuteUbergraph_TslHealthGaugeBpWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslHealthGaugeBpWidget_C::ExecuteUbergraph_TslHealthGaugeBpWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "ExecuteUbergraph_TslHealthGaugeBpWidget");

	Params::TslHealthGaugeBpWidget_C_ExecuteUbergraph_TslHealthGaugeBpWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.StartMove
// (BlueprintCallable, BlueprintEvent)

void UTslHealthGaugeBpWidget_C::StartMove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "StartMove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslHealthGaugeBpWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "Tick");

	Params::TslHealthGaugeBpWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTslHealthGaugeBpWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GetHealthGaugeColorOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslHealthGaugeBpWidget_C::GetHealthGaugeColorOpacity(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "GetHealthGaugeColorOpacity");

	Params::TslHealthGaugeBpWidget_C_GetHealthGaugeColorOpacity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.MoveTick
// (Public, BlueprintCallable, BlueprintEvent)

void UTslHealthGaugeBpWidget_C::MoveTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "MoveTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewDestination                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bGroggy_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslHealthGaugeBpWidget_C::SetHealth(float NewDestination, bool bGroggy_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "SetHealth");

	Params::TslHealthGaugeBpWidget_C_SetHealth Parms{};

	Parms.NewDestination = NewDestination;
	Parms.bGroggy_0 = bGroggy_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GetMoveCurve
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveFloat*                      NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslHealthGaugeBpWidget_C::GetMoveCurve(class UCurveFloat** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "GetMoveCurve");

	Params::TslHealthGaugeBpWidget_C_GetMoveCurve Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.UpdateColorGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UTslHealthGaugeBpWidget_C::UpdateColorGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "UpdateColorGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.UpdateWaning
// (Public, BlueprintCallable, BlueprintEvent)

void UTslHealthGaugeBpWidget_C::UpdateWaning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "UpdateWaning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Get_Background_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

ESlateVisibility UTslHealthGaugeBpWidget_C::Get_Background_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "Get_Background_Visibility_0");

	Params::TslHealthGaugeBpWidget_C_Get_Background_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Get_Background_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FLinearColor UTslHealthGaugeBpWidget_C::Get_Background_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "Get_Background_ColorAndOpacity_0");

	Params::TslHealthGaugeBpWidget_C_Get_Background_ColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.On_Background_Prepass_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslHealthGaugeBpWidget_C::On_Background_Prepass_0(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslHealthGaugeBpWidget_C", "On_Background_Prepass_0");

	Params::TslHealthGaugeBpWidget_C_On_Background_Prepass_0 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}

