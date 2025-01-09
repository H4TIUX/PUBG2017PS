#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InGameMenuWidget

#include "Basic.hpp"

#include "InGameMenuWidget_classes.hpp"
#include "InGameMenuWidget_parameters.hpp"


namespace SDK
{

// Function InGameMenuWidget.InGameMenuWidget_C.ExecuteUbergraph_InGameMenuWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInGameMenuWidget_C::ExecuteUbergraph_InGameMenuWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "ExecuteUbergraph_InGameMenuWidget");

	Params::InGameMenuWidget_C_ExecuteUbergraph_InGameMenuWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InGameMenuWidget.InGameMenuWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInGameMenuWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "Tick");

	Params::InGameMenuWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InGameMenuWidget.InGameMenuWidget_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuWidget_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "CustomEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuWidget.InGameMenuWidget_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuWidget_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuWidget.InGameMenuWidget_C.OnHiddenWidget
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuWidget_C::OnHiddenWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "OnHiddenWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuWidget.InGameMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInGameMenuWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__ButtonWidget_108_K2Node_ComponentBoundEvent_96_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__ButtonWidget_108_K2Node_ComponentBoundEvent_96_OnClickedEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "BndEvt__ButtonWidget_108_K2Node_ComponentBoundEvent_96_OnClickedEventDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuWidget.InGameMenuWidget_C.GoToLobby
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                          ButtonID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInGameMenuWidget_C::GoToLobby(EPopupButtonID ButtonID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "GoToLobby");

	Params::InGameMenuWidget_C_GoToLobby Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InGameMenuWidget.InGameMenuWidget_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                          ButtonID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInGameMenuWidget_C::QuitGame(EPopupButtonID ButtonID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "QuitGame");

	Params::InGameMenuWidget_C_QuitGame Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InGameMenuWidget.InGameMenuWidget_C.GetVersionText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UInGameMenuWidget_C::GetVersionText_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuWidget_C", "GetVersionText_0");

	Params::InGameMenuWidget_C_GetVersionText_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

