#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewMessageBorderWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NewMessageBorderWidget.NewMessageBorderWidget_C
// 0x00A0 (0x02E0 - 0x0240)
class UNewMessageBorderWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               Bottom;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UCanvasPanel*                           MessageCanvas;                                     // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                           MessageLog;                                        // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UOverlay*                               Top;                                               // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	int32                                         NumofMaxMessge;                                    // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bForceAddMessage;                                  // 0x026C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EVerticalAlignment                            MessageAlignment;                                  // 0x026D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26E[0x2];                                      // 0x026E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNewSystemMessageWidget_C*>      DelayMessageArray;                                 // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UNewSystemMessageWidget_C*>      CheckList;                                         // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                      WidgetPositionList;                                // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                              MessageSize;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                              BorderSize;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         MessageHeight;                                     // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         Count;                                             // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                              BasePosition;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bMove;                                             // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C1[0x3];                                      // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeCheck;                                         // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UCurveFloat*                            NewVar_0;                                          // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UNewSystemMessageWidget_C*              LastMessageWidget;                                 // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUniqueCheck;                                      // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_NewMessageBorderWidget(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void DisplayKilledMessage(const struct FDeathMessage& DeathMessage);
	void AddMessage(class UNewSystemMessageWidget_C* Message);
	void OnRemoveMessage(class UNewSystemMessageWidget_C* SystemMessageWidget);
	void SetSizeRule(ESlateSizeRule TopSize, ESlateSizeRule BottomSize);
	void IsFull(bool* Full);
	void UpdatePositionInfo();
	void TickMove(float Time);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewMessageBorderWidget_C">();
	}
	static class UNewMessageBorderWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNewMessageBorderWidget_C>();
	}
};
static_assert(alignof(UNewMessageBorderWidget_C) == 0x000008, "Wrong alignment on UNewMessageBorderWidget_C");
static_assert(sizeof(UNewMessageBorderWidget_C) == 0x0002E0, "Wrong size on UNewMessageBorderWidget_C");
static_assert(offsetof(UNewMessageBorderWidget_C, UberGraphFrame) == 0x000240, "Member 'UNewMessageBorderWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, Bottom) == 0x000248, "Member 'UNewMessageBorderWidget_C::Bottom' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, MessageCanvas) == 0x000250, "Member 'UNewMessageBorderWidget_C::MessageCanvas' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, MessageLog) == 0x000258, "Member 'UNewMessageBorderWidget_C::MessageLog' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, Top) == 0x000260, "Member 'UNewMessageBorderWidget_C::Top' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, NumofMaxMessge) == 0x000268, "Member 'UNewMessageBorderWidget_C::NumofMaxMessge' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, bForceAddMessage) == 0x00026C, "Member 'UNewMessageBorderWidget_C::bForceAddMessage' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, MessageAlignment) == 0x00026D, "Member 'UNewMessageBorderWidget_C::MessageAlignment' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, DelayMessageArray) == 0x000270, "Member 'UNewMessageBorderWidget_C::DelayMessageArray' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, CheckList) == 0x000280, "Member 'UNewMessageBorderWidget_C::CheckList' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, WidgetPositionList) == 0x000290, "Member 'UNewMessageBorderWidget_C::WidgetPositionList' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, MessageSize) == 0x0002A0, "Member 'UNewMessageBorderWidget_C::MessageSize' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, BorderSize) == 0x0002A8, "Member 'UNewMessageBorderWidget_C::BorderSize' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, MessageHeight) == 0x0002B0, "Member 'UNewMessageBorderWidget_C::MessageHeight' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, Count) == 0x0002B4, "Member 'UNewMessageBorderWidget_C::Count' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, BasePosition) == 0x0002B8, "Member 'UNewMessageBorderWidget_C::BasePosition' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, bMove) == 0x0002C0, "Member 'UNewMessageBorderWidget_C::bMove' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, TimeCheck) == 0x0002C4, "Member 'UNewMessageBorderWidget_C::TimeCheck' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, NewVar_0) == 0x0002C8, "Member 'UNewMessageBorderWidget_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, LastMessageWidget) == 0x0002D0, "Member 'UNewMessageBorderWidget_C::LastMessageWidget' has a wrong offset!");
static_assert(offsetof(UNewMessageBorderWidget_C, bUniqueCheck) == 0x0002D8, "Member 'UNewMessageBorderWidget_C::bUniqueCheck' has a wrong offset!");

}

