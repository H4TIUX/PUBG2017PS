#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryListBaseWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TslGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InventoryListBaseWidget.InventoryListBaseWidget_C
// 0x00D8 (0x0338 - 0x0260)
class UInventoryListBaseWidget_C final : public UTslUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UListBaseGroupWidget_C*                 CarePackage_Group;                                 // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                FocusColorBG;                                      // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UCategoryGroupWidget_C*                 Ground_Group;                                      // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UListBaseGroupWidget_C*                 InventoryOrDeathDropGroup;                         // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UScrollBox*                             ItemList;                                          // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UListBaseGroupWidget_C*                 ItemPackage_Group;                                 // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	TScriptInterface<class ISlotContainerInterface> Container;                                         // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         BackgroundSlotWidgetCount;                         // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UItemSlotWidget_C*>              BackgroundSlotWidgets;                             // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                   OnChildSlotFocus;                                  // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bVicinity;                                         // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bSort;                                             // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D2[0x6];                                      // 0x02D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TScriptInterface<class ISlotInterface>> PendingSpawnList;                                  // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         PendingSpawnCount;                                 // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         PendingSpawnTimeCheck;                             // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         PendingSpawnTimeInterval;                          // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemSlotWidget_C*                      TempSlotItem;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         FocusWidgetIndex;                                  // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bWantFocus;                                        // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UItemSlotWidget_C*>              AddList;                                           // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                   RefreshFocus;                                      // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         StartTime;                                         // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         TimeCheck;                                         // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSlotScrollUp;                                   // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSlotScrollDown;                                 // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_InventoryListBaseWidget(int32 EntryPoint);
	void OnSlotScrollMoving();
	void OnSlotMoveDownReleased();
	void OnSlotMoveDownPressed();
	void OnSlotMoveUpReleased();
	void OnSlotMoveUpPressed();
	void OnAddScroll(float Scale);
	void OnRefreshFocus();
	void CustomEvent_0();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnRefreshList();
	void OnSlotFocus(TScriptInterface<class ISlotInterface> Slot_0, TScriptInterface<class ISlotContainerInterface> SlotContainer);
	void Construct();
	void CreateBackgroundSlots();
	void RefreshList();
	class FText GetWeightText();
	float GetWeightPercent();
	void GetContentCount(int32* Count);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void RefreshList_Visinity();
	void GetSlotItem(int32 Index_0, TScriptInterface<class ISlotInterface> Item_SlotInterface, TScriptInterface<class ISlotContainerInterface> SlotContainer, class UItemSlotWidget_C** ItemSlotWidget);
	void RefreshList_Inventory();
	bool isEmptyList();
	void GetSelectWidget();
	void UpdateOffset_XBoxOne_Down();
	void UpdateOffset_XBoxOne_Up();
	void On_FocusColor_Prepass_0(class UWidget* BoundWidget);
	void OnChildWidgetRefreshFocus();
	bool Up();
	bool SetFocus(bool NewFocus);
	bool Right();
	bool Left();
	bool Down();
	bool InputY();
	bool InputX();
	bool InputB();
	bool InputA();
	bool InputRT();
	bool InputRB();
	bool InputLT();
	bool InputLB();

	float GetMaxScroll() const;
	float GetScrollAccelation() const;
	bool IsFocus() const;
	class UUserWidget* GetUpWidget() const;
	class UUserWidget* GetRightWidget() const;
	class UUserWidget* GetLeftWidget() const;
	class UUserWidget* GetDownWidget() const;
	class UUserWidget* GetFocusingChildWidget() const;
	bool IsFocusable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InventoryListBaseWidget_C">();
	}
	static class UInventoryListBaseWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventoryListBaseWidget_C>();
	}
};
static_assert(alignof(UInventoryListBaseWidget_C) == 0x000008, "Wrong alignment on UInventoryListBaseWidget_C");
static_assert(sizeof(UInventoryListBaseWidget_C) == 0x000338, "Wrong size on UInventoryListBaseWidget_C");
static_assert(offsetof(UInventoryListBaseWidget_C, UberGraphFrame) == 0x000260, "Member 'UInventoryListBaseWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, CarePackage_Group) == 0x000268, "Member 'UInventoryListBaseWidget_C::CarePackage_Group' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, FocusColorBG) == 0x000270, "Member 'UInventoryListBaseWidget_C::FocusColorBG' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, Ground_Group) == 0x000278, "Member 'UInventoryListBaseWidget_C::Ground_Group' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, InventoryOrDeathDropGroup) == 0x000280, "Member 'UInventoryListBaseWidget_C::InventoryOrDeathDropGroup' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, ItemList) == 0x000288, "Member 'UInventoryListBaseWidget_C::ItemList' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, ItemPackage_Group) == 0x000290, "Member 'UInventoryListBaseWidget_C::ItemPackage_Group' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, Container) == 0x000298, "Member 'UInventoryListBaseWidget_C::Container' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, BackgroundSlotWidgetCount) == 0x0002A8, "Member 'UInventoryListBaseWidget_C::BackgroundSlotWidgetCount' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, BackgroundSlotWidgets) == 0x0002B0, "Member 'UInventoryListBaseWidget_C::BackgroundSlotWidgets' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, OnChildSlotFocus) == 0x0002C0, "Member 'UInventoryListBaseWidget_C::OnChildSlotFocus' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, bVicinity) == 0x0002D0, "Member 'UInventoryListBaseWidget_C::bVicinity' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, bSort) == 0x0002D1, "Member 'UInventoryListBaseWidget_C::bSort' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, PendingSpawnList) == 0x0002D8, "Member 'UInventoryListBaseWidget_C::PendingSpawnList' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, PendingSpawnCount) == 0x0002E8, "Member 'UInventoryListBaseWidget_C::PendingSpawnCount' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, PendingSpawnTimeCheck) == 0x0002EC, "Member 'UInventoryListBaseWidget_C::PendingSpawnTimeCheck' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, PendingSpawnTimeInterval) == 0x0002F0, "Member 'UInventoryListBaseWidget_C::PendingSpawnTimeInterval' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, TempSlotItem) == 0x0002F8, "Member 'UInventoryListBaseWidget_C::TempSlotItem' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, FocusWidgetIndex) == 0x000300, "Member 'UInventoryListBaseWidget_C::FocusWidgetIndex' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, bWantFocus) == 0x000304, "Member 'UInventoryListBaseWidget_C::bWantFocus' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, AddList) == 0x000308, "Member 'UInventoryListBaseWidget_C::AddList' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, RefreshFocus) == 0x000318, "Member 'UInventoryListBaseWidget_C::RefreshFocus' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, StartTime) == 0x000328, "Member 'UInventoryListBaseWidget_C::StartTime' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, TimeCheck) == 0x00032C, "Member 'UInventoryListBaseWidget_C::TimeCheck' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, bIsSlotScrollUp) == 0x000330, "Member 'UInventoryListBaseWidget_C::bIsSlotScrollUp' has a wrong offset!");
static_assert(offsetof(UInventoryListBaseWidget_C, bIsSlotScrollDown) == 0x000331, "Member 'UInventoryListBaseWidget_C::bIsSlotScrollDown' has a wrong offset!");

}

