#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: P_MotoDrive_Rock_Front_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function P_MotoDrive_Rock_Front_BP.P_MotoDrive_Rock_Front_BP_C.ExecuteUbergraph_P_MotoDrive_Rock_Front_BP
// 0x0250 (0x0250 - 0x0000)
struct P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetParticleParamter_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;                // 0x0010(0x0080)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94[0xC];                                       // 0x0094(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam2;               // 0x00A0(0x0080)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue2;        // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MapRangeClamped_ReturnValue2;             // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam3;               // 0x0140(0x0080)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam4;               // 0x01C0(0x0080)(IsPlainOldData, NoDestructor)
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;                            // 0x0240(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP) == 0x000010, "Wrong alignment on P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP");
static_assert(sizeof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP) == 0x000250, "Wrong size on P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP");
static_assert(offsetof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP, EntryPoint) == 0x000000, "Member 'P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP, CallFunc_GetParticleParamter_ReturnValue) == 0x000004, "Member 'P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP::CallFunc_GetParticleParamter_ReturnValue' has a wrong offset!");
static_assert(offsetof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP, K2Node_MakeStruct_ParticleSysParam) == 0x000010, "Member 'P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP::K2Node_MakeStruct_ParticleSysParam' has a wrong offset!");
static_assert(offsetof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP, CallFunc_MapRangeClamped_ReturnValue) == 0x000090, "Member 'P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP, K2Node_MakeStruct_ParticleSysParam2) == 0x0000A0, "Member 'P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP::K2Node_MakeStruct_ParticleSysParam2' has a wrong offset!");
static_assert(offsetof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000120, "Member 'P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP, CallFunc_Multiply_VectorFloat_ReturnValue2) == 0x00012C, "Member 'P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP::CallFunc_Multiply_VectorFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP, CallFunc_MapRangeClamped_ReturnValue2) == 0x000138, "Member 'P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP::CallFunc_MapRangeClamped_ReturnValue2' has a wrong offset!");
static_assert(offsetof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP, K2Node_MakeStruct_ParticleSysParam3) == 0x000140, "Member 'P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP::K2Node_MakeStruct_ParticleSysParam3' has a wrong offset!");
static_assert(offsetof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP, K2Node_MakeStruct_ParticleSysParam4) == 0x0001C0, "Member 'P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP::K2Node_MakeStruct_ParticleSysParam4' has a wrong offset!");
static_assert(offsetof(P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP, K2Node_MakeArray_Array) == 0x000240, "Member 'P_MotoDrive_Rock_Front_BP_C_ExecuteUbergraph_P_MotoDrive_Rock_Front_BP::K2Node_MakeArray_Array' has a wrong offset!");

}

