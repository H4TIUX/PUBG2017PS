#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VehicleSeatBase_Moto

#include "Basic.hpp"


namespace SDK::Params
{

// Function VehicleSeatBase_Moto.VehicleSeatBase_Moto_C.ExecuteUbergraph_VehicleSeatBase_Moto
// 0x0030 (0x0030 - 0x0000)
struct VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsClientActor_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEntryAllowed_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEntryAllowedByVelocity_ReturnValue;     // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ATslCharacter*                          CallFunc_GetRider_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATslCharacter*                          K2Node_ComponentBoundEvent_OtherCharacter;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto) == 0x000008, "Wrong alignment on VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto");
static_assert(sizeof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto) == 0x000030, "Wrong size on VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto");
static_assert(offsetof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto, EntryPoint) == 0x000000, "Member 'VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto::EntryPoint' has a wrong offset!");
static_assert(offsetof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto, CallFunc_IsClientActor_ReturnValue) == 0x000004, "Member 'VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto::CallFunc_IsClientActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto, CallFunc_IsEntryAllowed_ReturnValue) == 0x000005, "Member 'VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto::CallFunc_IsEntryAllowed_ReturnValue' has a wrong offset!");
static_assert(offsetof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto, CallFunc_IsEntryAllowedByVelocity_ReturnValue) == 0x000006, "Member 'VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto::CallFunc_IsEntryAllowedByVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto, CallFunc_GetRider_ReturnValue) == 0x000008, "Member 'VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto::CallFunc_GetRider_ReturnValue' has a wrong offset!");
static_assert(offsetof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto, K2Node_ComponentBoundEvent_OtherCharacter) == 0x000018, "Member 'VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto::K2Node_ComponentBoundEvent_OtherCharacter' has a wrong offset!");
static_assert(offsetof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto, CallFunc_BooleanOR_ReturnValue) == 0x000020, "Member 'VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000024, "Member 'VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000028, "Member 'VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00002C, "Member 'VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto, CallFunc_BooleanAND_ReturnValue) == 0x00002D, "Member 'VehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function VehicleSeatBase_Moto.VehicleSeatBase_Moto_C.BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct VehicleSeatBase_Moto_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature final
{
public:
	class ATslCharacter*                          OtherCharacter;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VehicleSeatBase_Moto_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature) == 0x000008, "Wrong alignment on VehicleSeatBase_Moto_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature");
static_assert(sizeof(VehicleSeatBase_Moto_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature) == 0x000008, "Wrong size on VehicleSeatBase_Moto_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature");
static_assert(offsetof(VehicleSeatBase_Moto_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature, OtherCharacter) == 0x000000, "Member 'VehicleSeatBase_Moto_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature::OtherCharacter' has a wrong offset!");

}

