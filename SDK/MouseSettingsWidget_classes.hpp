#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MouseSettingsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BaseOptionWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MouseSettingsWidget.MouseSettingsWidget_C
// 0x0040 (0x02B8 - 0x0278)
class UMouseSettingsWidget_C final : public UBaseOptionWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildOptionTitleWidget_C*              ChildOptionTitleWidget;                            // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UScrollBox*                             KeyList;                                           // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UQualitySliderWidget_C*                 QualitySliderWidget;                               // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTslCheckBox_C*                         TslCheckBox;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	TArray<class UQualitySliderWidget_C*>         KeyBorders;                                        // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UQualitySliderWidget_C*                 NewVar_0;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MouseSettingsWidget(int32 EntryPoint);
	void OnReset();
	void Construct();
	void OnApply();
	void OnDefault();
	void initailizeMouseSettingsWidget(bool bIsDefaultSetting);

	bool IsChanged() const;
	bool IsEnableApply() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MouseSettingsWidget_C">();
	}
	static class UMouseSettingsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMouseSettingsWidget_C>();
	}
};
static_assert(alignof(UMouseSettingsWidget_C) == 0x000008, "Wrong alignment on UMouseSettingsWidget_C");
static_assert(sizeof(UMouseSettingsWidget_C) == 0x0002B8, "Wrong size on UMouseSettingsWidget_C");
static_assert(offsetof(UMouseSettingsWidget_C, UberGraphFrame) == 0x000278, "Member 'UMouseSettingsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMouseSettingsWidget_C, ChildOptionTitleWidget) == 0x000280, "Member 'UMouseSettingsWidget_C::ChildOptionTitleWidget' has a wrong offset!");
static_assert(offsetof(UMouseSettingsWidget_C, KeyList) == 0x000288, "Member 'UMouseSettingsWidget_C::KeyList' has a wrong offset!");
static_assert(offsetof(UMouseSettingsWidget_C, QualitySliderWidget) == 0x000290, "Member 'UMouseSettingsWidget_C::QualitySliderWidget' has a wrong offset!");
static_assert(offsetof(UMouseSettingsWidget_C, TslCheckBox) == 0x000298, "Member 'UMouseSettingsWidget_C::TslCheckBox' has a wrong offset!");
static_assert(offsetof(UMouseSettingsWidget_C, KeyBorders) == 0x0002A0, "Member 'UMouseSettingsWidget_C::KeyBorders' has a wrong offset!");
static_assert(offsetof(UMouseSettingsWidget_C, NewVar_0) == 0x0002B0, "Member 'UMouseSettingsWidget_C::NewVar_0' has a wrong offset!");

}

