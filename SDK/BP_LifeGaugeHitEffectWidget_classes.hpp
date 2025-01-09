#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LifeGaugeHitEffectWidget

#include "Basic.hpp"

#include "TslGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_LifeGaugeHitEffectWidget.BP_LifeGaugeHitEffectWidget_C
// 0x0008 (0x0318 - 0x0310)
class UBP_LifeGaugeHitEffectWidget_C final : public ULifeGaugeHitEffectBaseWidget
{
public:
	class UWidgetAnimation*                       FadeOut;                                           // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LifeGaugeHitEffectWidget_C">();
	}
	static class UBP_LifeGaugeHitEffectWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LifeGaugeHitEffectWidget_C>();
	}
};
static_assert(alignof(UBP_LifeGaugeHitEffectWidget_C) == 0x000008, "Wrong alignment on UBP_LifeGaugeHitEffectWidget_C");
static_assert(sizeof(UBP_LifeGaugeHitEffectWidget_C) == 0x000318, "Wrong size on UBP_LifeGaugeHitEffectWidget_C");
static_assert(offsetof(UBP_LifeGaugeHitEffectWidget_C, FadeOut) == 0x000310, "Member 'UBP_LifeGaugeHitEffectWidget_C::FadeOut' has a wrong offset!");

}

