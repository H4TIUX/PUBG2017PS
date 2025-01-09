#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReplayTimeline

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ReplayTimeline.ReplayTimeline_C
// 0x00A0 (0x02E0 - 0x0240)
class UReplayTimeline_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                BtnPause;                                          // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                BtnPlay;                                           // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                BtnSpeedDown;                                      // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                BtnSpeedUp;                                        // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UCheckBox*                              CheckBoxKills;                                     // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             TextTimeNow;                                       // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             TextTimeSpeed;                                     // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             TextTimeTotal;                                     // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USlider*                                TimelineSlider;                                    // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UOverlay*                               TimlineOvelay;                                     // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTslGameInstance*                       TslGameInstance;                                   // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         TimelinePercent;                                   // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ReplayCurTime;                                     // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         CurTimeSpeed;                                      // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         MaxTimeSpeed;                                      // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         MinTimeSpeed;                                      // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FWidgetTransform                       KillEventItemTransform;                            // 0x02B4(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TimelineWidth;                                     // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPaused;                                          // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCtlVisible;                                      // 0x02D5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D6[0x2];                                      // 0x02D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           GetKillEventsTimer;                                // 0x02D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ReplayTimeline(int32 EntryPoint);
	void Destruct();
	void GetKillEvents();
	void BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void GetKillEventsDone();
	void BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void UpdateTimeline();
	void FloatToSeconds(float InputTime, class FText* TextTime);
	void SetCurTimeSpeed();
	void ShowKillEvents();
	void HideKillEvents();
	void SetEnableUI(bool IsEnable);
	void OnTogglePause();
	void OnPause();
	void OnPlay();
	void OnSpeedUp();
	void OnSpeedDown();
	void SetVisibleCtrls(bool bVisible);
	void UpdatePlayPauseBtns();
	void CreateGetKillEventsTimer();
	void ClearKillEventItems();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReplayTimeline_C">();
	}
	static class UReplayTimeline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplayTimeline_C>();
	}
};
static_assert(alignof(UReplayTimeline_C) == 0x000008, "Wrong alignment on UReplayTimeline_C");
static_assert(sizeof(UReplayTimeline_C) == 0x0002E0, "Wrong size on UReplayTimeline_C");
static_assert(offsetof(UReplayTimeline_C, UberGraphFrame) == 0x000240, "Member 'UReplayTimeline_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, BtnPause) == 0x000248, "Member 'UReplayTimeline_C::BtnPause' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, BtnPlay) == 0x000250, "Member 'UReplayTimeline_C::BtnPlay' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, BtnSpeedDown) == 0x000258, "Member 'UReplayTimeline_C::BtnSpeedDown' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, BtnSpeedUp) == 0x000260, "Member 'UReplayTimeline_C::BtnSpeedUp' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, CheckBoxKills) == 0x000268, "Member 'UReplayTimeline_C::CheckBoxKills' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, TextTimeNow) == 0x000270, "Member 'UReplayTimeline_C::TextTimeNow' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, TextTimeSpeed) == 0x000278, "Member 'UReplayTimeline_C::TextTimeSpeed' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, TextTimeTotal) == 0x000280, "Member 'UReplayTimeline_C::TextTimeTotal' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, TimelineSlider) == 0x000288, "Member 'UReplayTimeline_C::TimelineSlider' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, TimlineOvelay) == 0x000290, "Member 'UReplayTimeline_C::TimlineOvelay' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, TslGameInstance) == 0x000298, "Member 'UReplayTimeline_C::TslGameInstance' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, TimelinePercent) == 0x0002A0, "Member 'UReplayTimeline_C::TimelinePercent' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, ReplayCurTime) == 0x0002A4, "Member 'UReplayTimeline_C::ReplayCurTime' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, CurTimeSpeed) == 0x0002A8, "Member 'UReplayTimeline_C::CurTimeSpeed' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, MaxTimeSpeed) == 0x0002AC, "Member 'UReplayTimeline_C::MaxTimeSpeed' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, MinTimeSpeed) == 0x0002B0, "Member 'UReplayTimeline_C::MinTimeSpeed' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, KillEventItemTransform) == 0x0002B4, "Member 'UReplayTimeline_C::KillEventItemTransform' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, TimelineWidth) == 0x0002D0, "Member 'UReplayTimeline_C::TimelineWidth' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, IsPaused) == 0x0002D4, "Member 'UReplayTimeline_C::IsPaused' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, IsCtlVisible) == 0x0002D5, "Member 'UReplayTimeline_C::IsCtlVisible' has a wrong offset!");
static_assert(offsetof(UReplayTimeline_C, GetKillEventsTimer) == 0x0002D8, "Member 'UReplayTimeline_C::GetKillEventsTimer' has a wrong offset!");

}

