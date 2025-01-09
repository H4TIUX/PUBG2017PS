#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KillMessageWidget

#include "Basic.hpp"

#include "NewSystemMessageWidget_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "TslGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KillMessageWidget.KillMessageWidget_C
// 0x0308 (0x05F0 - 0x02E8)
class UKillMessageWidget_C final : public UNewSystemMessageWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_KillMessageWidget_C;                // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       KillMsgVanishing;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       KillMsgEmerging;                                   // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             AlivePlayer;                                       // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 Image_0;                                           // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UOverlay*                               KillCountLayer;                                    // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             KillMsgBlock;                                      // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             MyKills;                                           // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FDeathMessage                          DeathMessage;                                      // 0x0338(0x0080)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                            TeamColor;                                         // 0x03B8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            ImportantColor;                                    // 0x03E0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            NormalColor;                                       // 0x0408(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   KillerNameText;                                    // 0x0430(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ReasonText;                                        // 0x0448(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   VictimNameText;                                    // 0x0460(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   WhatHappenedText;                                  // 0x0478(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   OptionText;                                        // 0x0490(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   MethodText;                                        // 0x04A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bNotDisplayKiller;                                 // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C1[0x3];                                      // 0x04C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         tmpInt;                                            // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FText                                   MyKillMsg;                                         // 0x04C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   KillMsgText;                                       // 0x04E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TeamKillerColor;                                   // 0x04F8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TeamKillerDBNOColor;                               // 0x0520(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TeamVictimColor;                                   // 0x0548(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TeamVictimDBNOColor;                               // 0x0570(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            MyMsgColor;                                        // 0x0598(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            NormalDBNOColor;                                   // 0x05C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsStealFriendlyFire;                              // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_KillMessageWidget(int32 EntryPoint);
	void Construct();
	void IsKillerTeam(bool* IsTeam);
	void IsVictimTeam(bool* IsTeam);
	void InitializeKillMessageText();
	void GetFadeOutAnimation(class UWidgetAnimation** Animation);
	void GetFadeInAnimation(class UWidgetAnimation** Animation);
	ESlateVisibility Get_Insert_Visibility_0();
	ESlateVisibility Get_Insert2_Visibility_0();
	ESlateVisibility Get_Killer_Visibility_0();
	void GetKillNum(int32* KillNum);
	void GetAlivePlayerNum(int32* AlivePlayer_0);
	class FText Get_AlivePlayer_Text_0();
	void GetTeamAlive(int32* Alive);
	struct FLinearColor GetBrushColor_0();
	void On_MyKills_Prepass_0(class UWidget* BoundWidget);
	void On_AlivePlayer_Prepass_0(class UWidget* BoundWidget);
	void GetNumStartTeam(int32* NumStartTeam);
	void SetKillMessageText();
	void OnPrepass_0(class UWidget* BoundWidget);
	void SetKillMessageFont();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KillMessageWidget_C">();
	}
	static class UKillMessageWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKillMessageWidget_C>();
	}
};
static_assert(alignof(UKillMessageWidget_C) == 0x000008, "Wrong alignment on UKillMessageWidget_C");
static_assert(sizeof(UKillMessageWidget_C) == 0x0005F0, "Wrong size on UKillMessageWidget_C");
static_assert(offsetof(UKillMessageWidget_C, UberGraphFrame_KillMessageWidget_C) == 0x0002E8, "Member 'UKillMessageWidget_C::UberGraphFrame_KillMessageWidget_C' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, KillMsgVanishing) == 0x0002F0, "Member 'UKillMessageWidget_C::KillMsgVanishing' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, KillMsgEmerging) == 0x0002F8, "Member 'UKillMessageWidget_C::KillMsgEmerging' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, AlivePlayer) == 0x000300, "Member 'UKillMessageWidget_C::AlivePlayer' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, HorizontalBox_0) == 0x000308, "Member 'UKillMessageWidget_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, Image_0) == 0x000310, "Member 'UKillMessageWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, KillCountLayer) == 0x000318, "Member 'UKillMessageWidget_C::KillCountLayer' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, KillMsgBlock) == 0x000320, "Member 'UKillMessageWidget_C::KillMsgBlock' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, MyKills) == 0x000328, "Member 'UKillMessageWidget_C::MyKills' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, VerticalBox_0) == 0x000330, "Member 'UKillMessageWidget_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, DeathMessage) == 0x000338, "Member 'UKillMessageWidget_C::DeathMessage' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, TeamColor) == 0x0003B8, "Member 'UKillMessageWidget_C::TeamColor' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, ImportantColor) == 0x0003E0, "Member 'UKillMessageWidget_C::ImportantColor' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, NormalColor) == 0x000408, "Member 'UKillMessageWidget_C::NormalColor' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, KillerNameText) == 0x000430, "Member 'UKillMessageWidget_C::KillerNameText' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, ReasonText) == 0x000448, "Member 'UKillMessageWidget_C::ReasonText' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, VictimNameText) == 0x000460, "Member 'UKillMessageWidget_C::VictimNameText' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, WhatHappenedText) == 0x000478, "Member 'UKillMessageWidget_C::WhatHappenedText' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, OptionText) == 0x000490, "Member 'UKillMessageWidget_C::OptionText' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, MethodText) == 0x0004A8, "Member 'UKillMessageWidget_C::MethodText' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, bNotDisplayKiller) == 0x0004C0, "Member 'UKillMessageWidget_C::bNotDisplayKiller' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, tmpInt) == 0x0004C4, "Member 'UKillMessageWidget_C::tmpInt' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, MyKillMsg) == 0x0004C8, "Member 'UKillMessageWidget_C::MyKillMsg' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, KillMsgText) == 0x0004E0, "Member 'UKillMessageWidget_C::KillMsgText' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, TeamKillerColor) == 0x0004F8, "Member 'UKillMessageWidget_C::TeamKillerColor' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, TeamKillerDBNOColor) == 0x000520, "Member 'UKillMessageWidget_C::TeamKillerDBNOColor' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, TeamVictimColor) == 0x000548, "Member 'UKillMessageWidget_C::TeamVictimColor' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, TeamVictimDBNOColor) == 0x000570, "Member 'UKillMessageWidget_C::TeamVictimDBNOColor' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, MyMsgColor) == 0x000598, "Member 'UKillMessageWidget_C::MyMsgColor' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, NormalDBNOColor) == 0x0005C0, "Member 'UKillMessageWidget_C::NormalDBNOColor' has a wrong offset!");
static_assert(offsetof(UKillMessageWidget_C, bIsStealFriendlyFire) == 0x0005E8, "Member 'UKillMessageWidget_C::bIsStealFriendlyFire' has a wrong offset!");

}

