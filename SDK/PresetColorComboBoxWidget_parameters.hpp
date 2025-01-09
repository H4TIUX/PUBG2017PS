#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PresetColorComboBoxWidget

#include "Basic.hpp"

#include "TslGame_structs.hpp"
#include "ComboBoxOption_structs.hpp"


namespace SDK::Params
{

// Function PresetColorComboBoxWidget.PresetColorComboBoxWidget_C.On_ComboBox_GenerateWidget_0
// 0x00C0 (0x00C0 - 0x0000)
struct PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(Parm, ZeroConstructor)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UPresetColorWidget_C*                   CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         m__int_Array_Index_Variable;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         m__int_Loop_Counter_Variable;                      // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         m__int_Array_Index_Variable2;                      // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         m__int_Loop_Counter_Variable2;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FPresetColor>                   CallFunc_GetCrosshairColors_ReturnValue;           // 0x0038(0x0010)(ZeroConstructor, ReferenceParm)
	struct FPresetColor                           CallFunc_Array_Get_Item;                           // 0x0048(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FComboBoxOption                        CallFunc_Array_Get_Item2;                          // 0x0090(0x0028)()
	bool                                          CallFunc_Less_IntInt_ReturnValue2;                 // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue2;           // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0) == 0x000008, "Wrong alignment on PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0");
static_assert(sizeof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0) == 0x0000C0, "Wrong size on PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, Item) == 0x000000, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, m__int_Array_Index_Variable) == 0x000020, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::m__int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, m__int_Loop_Counter_Variable) == 0x000024, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::m__int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, m__int_Array_Index_Variable2) == 0x00002C, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::m__int_Array_Index_Variable2' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, m__int_Loop_Counter_Variable2) == 0x000030, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::m__int_Loop_Counter_Variable2' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, CallFunc_Add_IntInt_ReturnValue2) == 0x000034, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, CallFunc_GetCrosshairColors_ReturnValue) == 0x000038, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::CallFunc_GetCrosshairColors_ReturnValue' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, CallFunc_Array_Get_Item) == 0x000048, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, CallFunc_Array_Length_ReturnValue2) == 0x000088, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, CallFunc_Array_Get_Item2) == 0x000090, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, CallFunc_Less_IntInt_ReturnValue2) == 0x0000B8, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::CallFunc_Less_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000B9, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0, CallFunc_EqualEqual_StrStr_ReturnValue2) == 0x0000BA, "Member 'PresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_0::CallFunc_EqualEqual_StrStr_ReturnValue2' has a wrong offset!");

}

