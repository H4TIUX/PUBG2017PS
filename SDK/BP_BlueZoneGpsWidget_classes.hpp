#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BlueZoneGpsWidget

#include "Basic.hpp"

#include "TslGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_BlueZoneGpsWidget.BP_BlueZoneGpsWidget_C
// 0x0070 (0x0658 - 0x05E8)
class UBP_BlueZoneGpsWidget_C final : public UBluezoneGpsBaseWidget
{
public:
	class UWidgetAnimation*                       MovingAnimation;                                   // 0x05E8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       ReleasingText_Tritanopia;                          // 0x05F0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       ReleasingText_Protanopia;                          // 0x05F8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       ReleasingText_Deuteranopia;                        // 0x0600(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       Warning_Tritanopia;                                // 0x0608(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       Warning_Protanopia;                                // 0x0610(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       Warning_Deuteranopia;                              // 0x0618(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       WidgetVanishing;                                   // 0x0620(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       WidgetEmerging;                                    // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       WaitingText;                                       // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       ReleasingText_Normal;                              // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       LeaveNextPlayzone;                                 // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       EnterNextPlayzone;                                 // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       Warning_Normal;                                    // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BlueZoneGpsWidget_C">();
	}
	static class UBP_BlueZoneGpsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BlueZoneGpsWidget_C>();
	}
};
static_assert(alignof(UBP_BlueZoneGpsWidget_C) == 0x000008, "Wrong alignment on UBP_BlueZoneGpsWidget_C");
static_assert(sizeof(UBP_BlueZoneGpsWidget_C) == 0x000658, "Wrong size on UBP_BlueZoneGpsWidget_C");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, MovingAnimation) == 0x0005E8, "Member 'UBP_BlueZoneGpsWidget_C::MovingAnimation' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, ReleasingText_Tritanopia) == 0x0005F0, "Member 'UBP_BlueZoneGpsWidget_C::ReleasingText_Tritanopia' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, ReleasingText_Protanopia) == 0x0005F8, "Member 'UBP_BlueZoneGpsWidget_C::ReleasingText_Protanopia' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, ReleasingText_Deuteranopia) == 0x000600, "Member 'UBP_BlueZoneGpsWidget_C::ReleasingText_Deuteranopia' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, Warning_Tritanopia) == 0x000608, "Member 'UBP_BlueZoneGpsWidget_C::Warning_Tritanopia' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, Warning_Protanopia) == 0x000610, "Member 'UBP_BlueZoneGpsWidget_C::Warning_Protanopia' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, Warning_Deuteranopia) == 0x000618, "Member 'UBP_BlueZoneGpsWidget_C::Warning_Deuteranopia' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, WidgetVanishing) == 0x000620, "Member 'UBP_BlueZoneGpsWidget_C::WidgetVanishing' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, WidgetEmerging) == 0x000628, "Member 'UBP_BlueZoneGpsWidget_C::WidgetEmerging' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, WaitingText) == 0x000630, "Member 'UBP_BlueZoneGpsWidget_C::WaitingText' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, ReleasingText_Normal) == 0x000638, "Member 'UBP_BlueZoneGpsWidget_C::ReleasingText_Normal' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, LeaveNextPlayzone) == 0x000640, "Member 'UBP_BlueZoneGpsWidget_C::LeaveNextPlayzone' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, EnterNextPlayzone) == 0x000648, "Member 'UBP_BlueZoneGpsWidget_C::EnterNextPlayzone' has a wrong offset!");
static_assert(offsetof(UBP_BlueZoneGpsWidget_C, Warning_Normal) == 0x000650, "Member 'UBP_BlueZoneGpsWidget_C::Warning_Normal' has a wrong offset!");

}

