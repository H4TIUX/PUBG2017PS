#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function OptionButton.OptionButton_C.ExecuteUbergraph_OptionButton
// 0x0004 (0x0004 - 0x0000)
struct OptionButton_C_ExecuteUbergraph_OptionButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionButton_C_ExecuteUbergraph_OptionButton) == 0x000004, "Wrong alignment on OptionButton_C_ExecuteUbergraph_OptionButton");
static_assert(sizeof(OptionButton_C_ExecuteUbergraph_OptionButton) == 0x000004, "Wrong size on OptionButton_C_ExecuteUbergraph_OptionButton");
static_assert(offsetof(OptionButton_C_ExecuteUbergraph_OptionButton, EntryPoint) == 0x000000, "Member 'OptionButton_C_ExecuteUbergraph_OptionButton::EntryPoint' has a wrong offset!");

// Function OptionButton.OptionButton_C.GetText_0
// 0x0018 (0x0018 - 0x0000)
struct OptionButton_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(OptionButton_C_GetText_0) == 0x000008, "Wrong alignment on OptionButton_C_GetText_0");
static_assert(sizeof(OptionButton_C_GetText_0) == 0x000018, "Wrong size on OptionButton_C_GetText_0");
static_assert(offsetof(OptionButton_C_GetText_0, ReturnValue) == 0x000000, "Member 'OptionButton_C_GetText_0::ReturnValue' has a wrong offset!");

// Function OptionButton.OptionButton_C.SetButtonBgColor
// 0x0010 (0x0010 - 0x0000)
struct OptionButton_C_SetButtonBgColor final
{
public:
	struct FLinearColor                           InBackgroundColor;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionButton_C_SetButtonBgColor) == 0x000004, "Wrong alignment on OptionButton_C_SetButtonBgColor");
static_assert(sizeof(OptionButton_C_SetButtonBgColor) == 0x000010, "Wrong size on OptionButton_C_SetButtonBgColor");
static_assert(offsetof(OptionButton_C_SetButtonBgColor, InBackgroundColor) == 0x000000, "Member 'OptionButton_C_SetButtonBgColor::InBackgroundColor' has a wrong offset!");

}

