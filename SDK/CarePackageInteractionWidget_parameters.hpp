#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CarePackageInteractionWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.ExecuteUbergraph_CarePackageInteractionWidget
// 0x0098 (0x0098 - 0x0000)
struct CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0034)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0050(0x0008)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASpectatorPawn*                         CallFunc_GetSpectatorPawn_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATslPlayerController*                   K2Node_DynamicCast_AsTsl_Player_Controller;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATslSpectatorPawn*                      K2Node_DynamicCast_AsTsl_Spectator_Pawn;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsObserving_ReturnValue;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACarePackageItem*                       CallFunc_GetSpectableCarePackageItem_ReturnValue;  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget) == 0x000008, "Wrong alignment on CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget");
static_assert(sizeof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget) == 0x000098, "Wrong size on CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, EntryPoint) == 0x000000, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, K2Node_Event_MyGeometry) == 0x000018, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000050, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, CallFunc_GetPlayerController_ReturnValue) == 0x000058, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, CallFunc_GetSpectatorPawn_ReturnValue) == 0x000060, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::CallFunc_GetSpectatorPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, K2Node_DynamicCast_AsTsl_Player_Controller) == 0x000068, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::K2Node_DynamicCast_AsTsl_Player_Controller' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, K2Node_DynamicCast_AsTsl_Spectator_Pawn) == 0x000078, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::K2Node_DynamicCast_AsTsl_Spectator_Pawn' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, K2Node_DynamicCast_bSuccess2) == 0x000080, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, CallFunc_IsObserving_ReturnValue) == 0x000081, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::CallFunc_IsObserving_ReturnValue' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, CallFunc_GetSpectableCarePackageItem_ReturnValue) == 0x000088, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::CallFunc_GetSpectableCarePackageItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'CarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.Tick
// 0x0038 (0x0038 - 0x0000)
struct CarePackageInteractionWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0034)(Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0034(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CarePackageInteractionWidget_C_Tick) == 0x000004, "Wrong alignment on CarePackageInteractionWidget_C_Tick");
static_assert(sizeof(CarePackageInteractionWidget_C_Tick) == 0x000038, "Wrong size on CarePackageInteractionWidget_C_Tick");
static_assert(offsetof(CarePackageInteractionWidget_C_Tick, MyGeometry) == 0x000000, "Member 'CarePackageInteractionWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(CarePackageInteractionWidget_C_Tick, InDeltaTime) == 0x000034, "Member 'CarePackageInteractionWidget_C_Tick::InDeltaTime' has a wrong offset!");

// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.ShowCarePackageInteractionWidget
// 0x0001 (0x0001 - 0x0000)
struct CarePackageInteractionWidget_C_ShowCarePackageInteractionWidget final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CarePackageInteractionWidget_C_ShowCarePackageInteractionWidget) == 0x000001, "Wrong alignment on CarePackageInteractionWidget_C_ShowCarePackageInteractionWidget");
static_assert(sizeof(CarePackageInteractionWidget_C_ShowCarePackageInteractionWidget) == 0x000001, "Wrong size on CarePackageInteractionWidget_C_ShowCarePackageInteractionWidget");
static_assert(offsetof(CarePackageInteractionWidget_C_ShowCarePackageInteractionWidget, IsShow) == 0x000000, "Member 'CarePackageInteractionWidget_C_ShowCarePackageInteractionWidget::IsShow' has a wrong offset!");

}

