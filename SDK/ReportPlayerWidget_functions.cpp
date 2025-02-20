#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReportPlayerWidget

#include "Basic.hpp"

#include "ReportPlayerWidget_classes.hpp"
#include "ReportPlayerWidget_parameters.hpp"


namespace SDK
{

// Function ReportPlayerWidget.ReportPlayerWidget_C.ExecuteUbergraph_ReportPlayerWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportPlayerWidget_C::ExecuteUbergraph_ReportPlayerWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayerWidget_C", "ExecuteUbergraph_ReportPlayerWidget");

	Params::ReportPlayerWidget_C_ExecuteUbergraph_ReportPlayerWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReportPlayerWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayerWidget_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReportPlayerWidget_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayerWidget_C", "BndEvt__ButtonClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.BndEvt__ReportCausesComboBox_K2Node_ComponentBoundEvent_59_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (Parm, ZeroConstructor)
// ESelectInfo                             SelectionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportPlayerWidget_C::BndEvt__ReportCausesComboBox_K2Node_ComponentBoundEvent_59_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayerWidget_C", "BndEvt__ReportCausesComboBox_K2Node_ComponentBoundEvent_59_OnSelectionChangedEvent__DelegateSignature");

	Params::ReportPlayerWidget_C_BndEvt__ReportCausesComboBox_K2Node_ComponentBoundEvent_59_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReportPlayerWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayerWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.GetbIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UReportPlayerWidget_C::GetbIsEnabled_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayerWidget_C", "GetbIsEnabled_0");

	Params::ReportPlayerWidget_C_GetbIsEnabled_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.InitSubjectToReport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReportPlayerWidget_C::InitSubjectToReport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayerWidget_C", "InitSubjectToReport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.InitComboboxSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReportPlayerWidget_C::InitComboboxSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayerWidget_C", "InitComboboxSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.InitPlayerNameSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReportPlayerWidget_C::InitPlayerNameSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayerWidget_C", "InitPlayerNameSetting");

	UObject::ProcessEvent(Func, nullptr);
}

}

