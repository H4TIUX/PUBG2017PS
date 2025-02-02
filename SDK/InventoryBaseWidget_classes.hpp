#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryBaseWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TslGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InventoryBaseWidget.InventoryBaseWidget_C
// 0x0018 (0x0278 - 0x0260)
class UInventoryBaseWidget_C : public UTslUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	UMulticastDelegateProperty_                   RefreshFocus;                                      // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_InventoryBaseWidget(int32 EntryPoint);
	void SetInventoryWidget(class UInventoryWidget_C* Inventory);
	void UpdateDragDragDroppingItem(class UItem* DroppingItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InventoryBaseWidget_C">();
	}
	static class UInventoryBaseWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventoryBaseWidget_C>();
	}
};
static_assert(alignof(UInventoryBaseWidget_C) == 0x000008, "Wrong alignment on UInventoryBaseWidget_C");
static_assert(sizeof(UInventoryBaseWidget_C) == 0x000278, "Wrong size on UInventoryBaseWidget_C");
static_assert(offsetof(UInventoryBaseWidget_C, UberGraphFrame) == 0x000260, "Member 'UInventoryBaseWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInventoryBaseWidget_C, RefreshFocus) == 0x000268, "Member 'UInventoryBaseWidget_C::RefreshFocus' has a wrong offset!");

}

