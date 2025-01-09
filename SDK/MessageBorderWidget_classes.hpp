#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MessageBorderWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MessageBorderWidget.MessageBorderWidget_C
// 0x0028 (0x0268 - 0x0240)
class UMessageBorderWidget_C final : public UUserWidget
{
public:
	class UVerticalBox*                           KilledLog;                                         // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UOverlay*                               Overlay_1790;                                      // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	int32                                         NumofMaxMessge;                                    // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMessageWidget_C*>               MessageArray;                                      // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void DisplayKilledMessage(const struct FDeathMessage& DeathMessage);
	void AddMessage(class UMessageWidget_C* Message);
	void RemoveMessage(class UMessageWidget_C* DeleteMessage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MessageBorderWidget_C">();
	}
	static class UMessageBorderWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMessageBorderWidget_C>();
	}
};
static_assert(alignof(UMessageBorderWidget_C) == 0x000008, "Wrong alignment on UMessageBorderWidget_C");
static_assert(sizeof(UMessageBorderWidget_C) == 0x000268, "Wrong size on UMessageBorderWidget_C");
static_assert(offsetof(UMessageBorderWidget_C, KilledLog) == 0x000240, "Member 'UMessageBorderWidget_C::KilledLog' has a wrong offset!");
static_assert(offsetof(UMessageBorderWidget_C, Overlay_1790) == 0x000248, "Member 'UMessageBorderWidget_C::Overlay_1790' has a wrong offset!");
static_assert(offsetof(UMessageBorderWidget_C, NumofMaxMessge) == 0x000250, "Member 'UMessageBorderWidget_C::NumofMaxMessge' has a wrong offset!");
static_assert(offsetof(UMessageBorderWidget_C, MessageArray) == 0x000258, "Member 'UMessageBorderWidget_C::MessageArray' has a wrong offset!");

}

