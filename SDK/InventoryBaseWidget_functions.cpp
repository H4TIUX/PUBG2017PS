#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryBaseWidget

#include "Basic.hpp"

#include "InventoryBaseWidget_classes.hpp"
#include "InventoryBaseWidget_parameters.hpp"


namespace SDK
{

// Function InventoryBaseWidget.InventoryBaseWidget_C.ExecuteUbergraph_InventoryBaseWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryBaseWidget_C::ExecuteUbergraph_InventoryBaseWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryBaseWidget_C", "ExecuteUbergraph_InventoryBaseWidget");

	Params::InventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryBaseWidget.InventoryBaseWidget_C.SetInventoryWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWidget_C*               Inventory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryBaseWidget_C::SetInventoryWidget(class UInventoryWidget_C* Inventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryBaseWidget_C", "SetInventoryWidget");

	Params::InventoryBaseWidget_C_SetInventoryWidget Parms{};

	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryBaseWidget.InventoryBaseWidget_C.UpdateDragDragDroppingItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem*                            DroppingItem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryBaseWidget_C::UpdateDragDragDroppingItem(class UItem* DroppingItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryBaseWidget_C", "UpdateDragDragDroppingItem");

	Params::InventoryBaseWidget_C_UpdateDragDragDroppingItem Parms{};

	Parms.DroppingItem = DroppingItem;

	UObject::ProcessEvent(Func, &Parms);
}

}

