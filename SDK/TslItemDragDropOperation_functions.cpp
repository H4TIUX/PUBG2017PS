#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TslItemDragDropOperation

#include "Basic.hpp"

#include "TslItemDragDropOperation_classes.hpp"
#include "TslItemDragDropOperation_parameters.hpp"


namespace SDK
{

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Options                                                (Parm, OutParm, ZeroConstructor)

void UTslItemDragDropOperation_C::GetOptions(class FString* Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslItemDragDropOperation_C", "GetOptions");

	Params::TslItemDragDropOperation_C_GetOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Options != nullptr)
		*Options = std::move(Parms.Options);
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetActionName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ActionName_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslItemDragDropOperation_C::GetActionName(class FName* ActionName_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslItemDragDropOperation_C", "GetActionName");

	Params::TslItemDragDropOperation_C_GetActionName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActionName_0 != nullptr)
		*ActionName_0 = Parms.ActionName_0;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsEnableAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsEnableAction_0                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslItemDragDropOperation_C::IsEnableAction(bool* IsEnableAction_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslItemDragDropOperation_C", "IsEnableAction");

	Params::TslItemDragDropOperation_C_IsEnableAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnableAction_0 != nullptr)
		*IsEnableAction_0 = Parms.IsEnableAction_0;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.EnterOtherContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISlotContainerInterface>NewOtherContainer                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslItemDragDropOperation_C::EnterOtherContainer(TScriptInterface<class ISlotContainerInterface> NewOtherContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslItemDragDropOperation_C", "EnterOtherContainer");

	Params::TslItemDragDropOperation_C_EnterOtherContainer Parms{};

	Parms.NewOtherContainer = NewOtherContainer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.LeaveOtherContainer
// (Public, BlueprintCallable, BlueprintEvent)

void UTslItemDragDropOperation_C::LeaveOtherContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslItemDragDropOperation_C", "LeaveOtherContainer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetCurrentOtherContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class ISlotContainerInterface>OtherContainer                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslItemDragDropOperation_C::GetCurrentOtherContainer(TScriptInterface<class ISlotContainerInterface>* OtherContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslItemDragDropOperation_C", "GetCurrentOtherContainer");

	Params::TslItemDragDropOperation_C_GetCurrentOtherContainer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OtherContainer != nullptr)
		*OtherContainer = Parms.OtherContainer;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsInEquipment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslItemDragDropOperation_C::IsInEquipment(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslItemDragDropOperation_C", "IsInEquipment");

	Params::TslItemDragDropOperation_C_IsInEquipment Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsWeapon                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslItemDragDropOperation_C::IsDragDroppingItemWeapon(bool* IsWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslItemDragDropOperation_C", "IsDragDroppingItemWeapon");

	Params::TslItemDragDropOperation_C_IsDragDroppingItemWeapon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsWeapon != nullptr)
		*IsWeapon = Parms.IsWeapon;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemAttachment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsAttachment                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTslItemDragDropOperation_C::IsDragDroppingItemAttachment(bool* IsAttachment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TslItemDragDropOperation_C", "IsDragDroppingItemAttachment");

	Params::TslItemDragDropOperation_C_IsDragDroppingItemAttachment Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsAttachment != nullptr)
		*IsAttachment = Parms.IsAttachment;
}

}

