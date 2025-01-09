#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeathDropItemPackage

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function DeathDropItemPackage.DeathDropItemPackage_C.ExecuteUbergraph_DeathDropItemPackage
// 0x0020 (0x0020 - 0x0000)
struct DeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetCategory_Category;                     // 0x0008(0x0018)()
};
static_assert(alignof(DeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage) == 0x000008, "Wrong alignment on DeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage");
static_assert(sizeof(DeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage) == 0x000020, "Wrong size on DeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage");
static_assert(offsetof(DeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage, EntryPoint) == 0x000000, "Member 'DeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage::EntryPoint' has a wrong offset!");
static_assert(offsetof(DeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage, CallFunc_GetCategory_Category) == 0x000008, "Member 'DeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage::CallFunc_GetCategory_Category' has a wrong offset!");

// Function DeathDropItemPackage.DeathDropItemPackage_C.GetCategory
// 0x0098 (0x0098 - 0x0000)
struct DeathDropItemPackage_C_GetCategory final
{
public:
	class FText                                   Category;                                          // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0040)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0018)()
};
static_assert(alignof(DeathDropItemPackage_C_GetCategory) == 0x000008, "Wrong alignment on DeathDropItemPackage_C_GetCategory");
static_assert(sizeof(DeathDropItemPackage_C_GetCategory) == 0x000098, "Wrong size on DeathDropItemPackage_C_GetCategory");
static_assert(offsetof(DeathDropItemPackage_C_GetCategory, Category) == 0x000000, "Member 'DeathDropItemPackage_C_GetCategory::Category' has a wrong offset!");
static_assert(offsetof(DeathDropItemPackage_C_GetCategory, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'DeathDropItemPackage_C_GetCategory::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathDropItemPackage_C_GetCategory, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'DeathDropItemPackage_C_GetCategory::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(DeathDropItemPackage_C_GetCategory, K2Node_MakeArray_Array) == 0x000070, "Member 'DeathDropItemPackage_C_GetCategory::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DeathDropItemPackage_C_GetCategory, CallFunc_Format_ReturnValue) == 0x000080, "Member 'DeathDropItemPackage_C_GetCategory::CallFunc_Format_ReturnValue' has a wrong offset!");

}

