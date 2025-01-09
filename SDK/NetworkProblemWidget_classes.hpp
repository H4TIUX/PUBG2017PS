#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetworkProblemWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NetworkProblemWidget.NetworkProblemWidget_C
// 0x0030 (0x0270 - 0x0240)
class UNetworkProblemWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IconBlinking;                                      // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       Vanishing;                                         // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       Emerging;                                          // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 Image_55;                                          // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	bool                                          isVanishing;                                       // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_NetworkProblemWidget(int32 EntryPoint);
	void Construct();
	void On_NetProblemIndicator_Prepass_0(class UWidget* BoundWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NetworkProblemWidget_C">();
	}
	static class UNetworkProblemWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetworkProblemWidget_C>();
	}
};
static_assert(alignof(UNetworkProblemWidget_C) == 0x000008, "Wrong alignment on UNetworkProblemWidget_C");
static_assert(sizeof(UNetworkProblemWidget_C) == 0x000270, "Wrong size on UNetworkProblemWidget_C");
static_assert(offsetof(UNetworkProblemWidget_C, UberGraphFrame) == 0x000240, "Member 'UNetworkProblemWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNetworkProblemWidget_C, IconBlinking) == 0x000248, "Member 'UNetworkProblemWidget_C::IconBlinking' has a wrong offset!");
static_assert(offsetof(UNetworkProblemWidget_C, Vanishing) == 0x000250, "Member 'UNetworkProblemWidget_C::Vanishing' has a wrong offset!");
static_assert(offsetof(UNetworkProblemWidget_C, Emerging) == 0x000258, "Member 'UNetworkProblemWidget_C::Emerging' has a wrong offset!");
static_assert(offsetof(UNetworkProblemWidget_C, Image_55) == 0x000260, "Member 'UNetworkProblemWidget_C::Image_55' has a wrong offset!");
static_assert(offsetof(UNetworkProblemWidget_C, isVanishing) == 0x000268, "Member 'UNetworkProblemWidget_C::isVanishing' has a wrong offset!");

}

