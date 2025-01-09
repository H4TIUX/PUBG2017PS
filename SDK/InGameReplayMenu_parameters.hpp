#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InGameReplayMenu

#include "Basic.hpp"

#include "TslGame_structs.hpp"


namespace SDK::Params
{

// Function InGameReplayMenu.InGameReplayMenu_C.ExecuteUbergraph_InGameReplayMenu
// 0x0088 (0x0088 - 0x0000)
struct InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATslHUD*                                K2Node_DynamicCast_AsTsl_HUD;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPopupButtonID ButtonID)>      K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue2;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue3;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue2;                      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue3;                      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATslHUD*                                K2Node_DynamicCast_AsTsl_HUD2;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATslHUD*                                K2Node_DynamicCast_AsTsl_HUD3;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPopupButtonID ButtonID)>      K2Node_CreateDelegate_OutputDelegate2;             // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu) == 0x000008, "Wrong alignment on InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu");
static_assert(sizeof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu) == 0x000088, "Wrong size on InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, EntryPoint) == 0x000000, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, CallFunc_GetHUD_ReturnValue) == 0x000010, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, K2Node_DynamicCast_AsTsl_HUD) == 0x000018, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::K2Node_DynamicCast_AsTsl_HUD' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, CallFunc_GetOwningPlayer_ReturnValue2) == 0x000038, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::CallFunc_GetOwningPlayer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, CallFunc_GetOwningPlayer_ReturnValue3) == 0x000040, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::CallFunc_GetOwningPlayer_ReturnValue3' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, CallFunc_GetHUD_ReturnValue2) == 0x000048, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::CallFunc_GetHUD_ReturnValue2' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, CallFunc_GetHUD_ReturnValue3) == 0x000050, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::CallFunc_GetHUD_ReturnValue3' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, K2Node_DynamicCast_AsTsl_HUD2) == 0x000058, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::K2Node_DynamicCast_AsTsl_HUD2' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, K2Node_DynamicCast_bSuccess2) == 0x000060, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, K2Node_DynamicCast_AsTsl_HUD3) == 0x000068, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::K2Node_DynamicCast_AsTsl_HUD3' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, K2Node_DynamicCast_bSuccess3) == 0x000070, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu, K2Node_CreateDelegate_OutputDelegate2) == 0x000078, "Member 'InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");

// Function InGameReplayMenu.InGameReplayMenu_C.QuitReplay
// 0x0030 (0x0030 - 0x0000)
struct InGameReplayMenu_C_QuitReplay final
{
public:
	EPopupButtonID                                ButtonID;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATslHUD*                                K2Node_DynamicCast_AsTsl_HUD;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InGameReplayMenu_C_QuitReplay) == 0x000008, "Wrong alignment on InGameReplayMenu_C_QuitReplay");
static_assert(sizeof(InGameReplayMenu_C_QuitReplay) == 0x000030, "Wrong size on InGameReplayMenu_C_QuitReplay");
static_assert(offsetof(InGameReplayMenu_C_QuitReplay, ButtonID) == 0x000000, "Member 'InGameReplayMenu_C_QuitReplay::ButtonID' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_QuitReplay, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'InGameReplayMenu_C_QuitReplay::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_QuitReplay, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'InGameReplayMenu_C_QuitReplay::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_QuitReplay, CallFunc_GetHUD_ReturnValue) == 0x000018, "Member 'InGameReplayMenu_C_QuitReplay::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_QuitReplay, K2Node_DynamicCast_AsTsl_HUD) == 0x000020, "Member 'InGameReplayMenu_C_QuitReplay::K2Node_DynamicCast_AsTsl_HUD' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_QuitReplay, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'InGameReplayMenu_C_QuitReplay::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function InGameReplayMenu.InGameReplayMenu_C.GotoReplayList
// 0x0048 (0x0048 - 0x0000)
struct InGameReplayMenu_C_GotoReplayList final
{
public:
	EPopupButtonID                                ButtonID;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTslGameInstance*                       K2Node_DynamicCast_AsTsl_Game_Instance;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATslHUD*                                K2Node_DynamicCast_AsTsl_HUD;                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InGameReplayMenu_C_GotoReplayList) == 0x000008, "Wrong alignment on InGameReplayMenu_C_GotoReplayList");
static_assert(sizeof(InGameReplayMenu_C_GotoReplayList) == 0x000048, "Wrong size on InGameReplayMenu_C_GotoReplayList");
static_assert(offsetof(InGameReplayMenu_C_GotoReplayList, ButtonID) == 0x000000, "Member 'InGameReplayMenu_C_GotoReplayList::ButtonID' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_GotoReplayList, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'InGameReplayMenu_C_GotoReplayList::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_GotoReplayList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'InGameReplayMenu_C_GotoReplayList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_GotoReplayList, K2Node_DynamicCast_AsTsl_Game_Instance) == 0x000018, "Member 'InGameReplayMenu_C_GotoReplayList::K2Node_DynamicCast_AsTsl_Game_Instance' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_GotoReplayList, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'InGameReplayMenu_C_GotoReplayList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_GotoReplayList, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'InGameReplayMenu_C_GotoReplayList::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_GotoReplayList, CallFunc_GetHUD_ReturnValue) == 0x000030, "Member 'InGameReplayMenu_C_GotoReplayList::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_GotoReplayList, K2Node_DynamicCast_AsTsl_HUD) == 0x000038, "Member 'InGameReplayMenu_C_GotoReplayList::K2Node_DynamicCast_AsTsl_HUD' has a wrong offset!");
static_assert(offsetof(InGameReplayMenu_C_GotoReplayList, K2Node_DynamicCast_bSuccess2) == 0x000040, "Member 'InGameReplayMenu_C_GotoReplayList::K2Node_DynamicCast_bSuccess2' has a wrong offset!");

}

