#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CircleMiniMapWidget

#include "Basic.hpp"

#include "CircleMiniMapWidget_classes.hpp"
#include "CircleMiniMapWidget_parameters.hpp"


namespace SDK
{

// Function CircleMiniMapWidget.CircleMiniMapWidget_C.OnPrepass_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCircleMiniMapWidget_C::OnPrepass_0(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleMiniMapWidget_C", "OnPrepass_0");

	Params::CircleMiniMapWidget_C_OnPrepass_0 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CircleMiniMapWidget.CircleMiniMapWidget_C.On_Arrow_Prepass_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCircleMiniMapWidget_C::On_Arrow_Prepass_0(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleMiniMapWidget_C", "On_Arrow_Prepass_0");

	Params::CircleMiniMapWidget_C_On_Arrow_Prepass_0 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CircleMiniMapWidget.CircleMiniMapWidget_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCircleMiniMapWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleMiniMapWidget_C", "OnPrepass_1");

	Params::CircleMiniMapWidget_C_OnPrepass_1 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CircleMiniMapWidget.CircleMiniMapWidget_C.On_BluezoneTime_Prepass_0
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCircleMiniMapWidget_C::On_BluezoneTime_Prepass_0(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleMiniMapWidget_C", "On_BluezoneTime_Prepass_0");

	Params::CircleMiniMapWidget_C_On_BluezoneTime_Prepass_0 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CircleMiniMapWidget.CircleMiniMapWidget_C.GetNextPlayzoneDirection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Direction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCircleMiniMapWidget_C::GetNextPlayzoneDirection(float* Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleMiniMapWidget_C", "GetNextPlayzoneDirection");

	Params::CircleMiniMapWidget_C_GetNextPlayzoneDirection Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = Parms.Direction;
}


// Function CircleMiniMapWidget.CircleMiniMapWidget_C.On_TimeBorder_Prepass_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCircleMiniMapWidget_C::On_TimeBorder_Prepass_0(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleMiniMapWidget_C", "On_TimeBorder_Prepass_0");

	Params::CircleMiniMapWidget_C_On_TimeBorder_Prepass_0 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CircleMiniMapWidget.CircleMiniMapWidget_C.On_GridText_Prepass_0
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCircleMiniMapWidget_C::On_GridText_Prepass_0(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleMiniMapWidget_C", "On_GridText_Prepass_0");

	Params::CircleMiniMapWidget_C_On_GridText_Prepass_0 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CircleMiniMapWidget.CircleMiniMapWidget_C.On_TimeBorder_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCircleMiniMapWidget_C::On_TimeBorder_Prepass_1(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleMiniMapWidget_C", "On_TimeBorder_Prepass_1");

	Params::CircleMiniMapWidget_C_On_TimeBorder_Prepass_1 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}

