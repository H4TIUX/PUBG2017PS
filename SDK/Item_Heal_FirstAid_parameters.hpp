#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_Heal_FirstAid

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Item_Heal_FirstAid.Item_Heal_FirstAid_C.UseBy
// 0x0010 (0x0010 - 0x0000)
struct Item_Heal_FirstAid_C_UseBy final
{
public:
	class ATslCharacter*                          Character_0;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Item_Heal_FirstAid_C_UseBy) == 0x000008, "Wrong alignment on Item_Heal_FirstAid_C_UseBy");
static_assert(sizeof(Item_Heal_FirstAid_C_UseBy) == 0x000010, "Wrong size on Item_Heal_FirstAid_C_UseBy");
static_assert(offsetof(Item_Heal_FirstAid_C_UseBy, Character_0) == 0x000000, "Member 'Item_Heal_FirstAid_C_UseBy::Character_0' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_UseBy, ReturnValue) == 0x000008, "Member 'Item_Heal_FirstAid_C_UseBy::ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_UseBy, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000009, "Member 'Item_Heal_FirstAid_C_UseBy::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_UseBy, CallFunc_Less_FloatFloat_ReturnValue) == 0x00000A, "Member 'Item_Heal_FirstAid_C_UseBy::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_UseBy, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'Item_Heal_FirstAid_C_UseBy::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function Item_Heal_FirstAid.Item_Heal_FirstAid_C.Heal
// 0x0018 (0x0018 - 0x0000)
struct Item_Heal_FirstAid_C_Heal final
{
public:
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATslPlayerController*                   CallFunc_GetTslPlayerController_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         StartHealth;                                       // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Item_Heal_FirstAid_C_Heal) == 0x000008, "Wrong alignment on Item_Heal_FirstAid_C_Heal");
static_assert(sizeof(Item_Heal_FirstAid_C_Heal) == 0x000018, "Wrong size on Item_Heal_FirstAid_C_Heal");
static_assert(offsetof(Item_Heal_FirstAid_C_Heal, CallFunc_Less_FloatFloat_ReturnValue) == 0x000000, "Member 'Item_Heal_FirstAid_C_Heal::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_Heal, CallFunc_GetTslPlayerController_ReturnValue) == 0x000008, "Member 'Item_Heal_FirstAid_C_Heal::CallFunc_GetTslPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_Heal, StartHealth) == 0x000010, "Member 'Item_Heal_FirstAid_C_Heal::StartHealth' has a wrong offset!");

// Function Item_Heal_FirstAid.Item_Heal_FirstAid_C.PrintCastingTime
// 0x0090 (0x0090 - 0x0000)
struct Item_Heal_FirstAid_C_PrintCastingTime final
{
public:
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
};
static_assert(alignof(Item_Heal_FirstAid_C_PrintCastingTime) == 0x000008, "Wrong alignment on Item_Heal_FirstAid_C_PrintCastingTime");
static_assert(sizeof(Item_Heal_FirstAid_C_PrintCastingTime) == 0x000090, "Wrong size on Item_Heal_FirstAid_C_PrintCastingTime");
static_assert(offsetof(Item_Heal_FirstAid_C_PrintCastingTime, CallFunc_Subtract_IntInt_ReturnValue) == 0x000000, "Member 'Item_Heal_FirstAid_C_PrintCastingTime::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_PrintCastingTime, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'Item_Heal_FirstAid_C_PrintCastingTime::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_PrintCastingTime, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'Item_Heal_FirstAid_C_PrintCastingTime::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_PrintCastingTime, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'Item_Heal_FirstAid_C_PrintCastingTime::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_PrintCastingTime, K2Node_MakeArray_Array) == 0x000068, "Member 'Item_Heal_FirstAid_C_PrintCastingTime::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_PrintCastingTime, CallFunc_Format_ReturnValue) == 0x000078, "Member 'Item_Heal_FirstAid_C_PrintCastingTime::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Item_Heal_FirstAid.Item_Heal_FirstAid_C.IsCastable
// 0x0010 (0x0010 - 0x0000)
struct Item_Heal_FirstAid_C_IsCastable final
{
public:
	class ATslCharacter*                          Character_0;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCastable_ReturnValue;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Item_Heal_FirstAid_C_IsCastable) == 0x000008, "Wrong alignment on Item_Heal_FirstAid_C_IsCastable");
static_assert(sizeof(Item_Heal_FirstAid_C_IsCastable) == 0x000010, "Wrong size on Item_Heal_FirstAid_C_IsCastable");
static_assert(offsetof(Item_Heal_FirstAid_C_IsCastable, Character_0) == 0x000000, "Member 'Item_Heal_FirstAid_C_IsCastable::Character_0' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_IsCastable, ReturnValue) == 0x000008, "Member 'Item_Heal_FirstAid_C_IsCastable::ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_IsCastable, CallFunc_IsCastable_ReturnValue) == 0x000009, "Member 'Item_Heal_FirstAid_C_IsCastable::CallFunc_IsCastable_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_IsCastable, CallFunc_Less_FloatFloat_ReturnValue) == 0x00000A, "Member 'Item_Heal_FirstAid_C_IsCastable::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Heal_FirstAid_C_IsCastable, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'Item_Heal_FirstAid_C_IsCastable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

