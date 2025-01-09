#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MessageBorderWidget

#include "Basic.hpp"

#include "TslGame_structs.hpp"


namespace SDK::Params
{

// Function MessageBorderWidget.MessageBorderWidget_C.DisplayKilledMessage
// 0x00D0 (0x00D0 - 0x0000)
struct MessageBorderWidget_C_DisplayKilledMessage final
{
public:
	struct FDeathMessage                          DeathMessage;                                      // 0x0000(0x0080)(Parm)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0080(0x0010)(ZeroConstructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue2;               // 0x0090(0x0010)(ZeroConstructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	class UMessageWidget_C*                       CallFunc_Create_ReturnValue;                       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 KillerPlayerName;                                  // 0x00C0(0x0010)(Edit, ZeroConstructor)
};
static_assert(alignof(MessageBorderWidget_C_DisplayKilledMessage) == 0x000008, "Wrong alignment on MessageBorderWidget_C_DisplayKilledMessage");
static_assert(sizeof(MessageBorderWidget_C_DisplayKilledMessage) == 0x0000D0, "Wrong size on MessageBorderWidget_C_DisplayKilledMessage");
static_assert(offsetof(MessageBorderWidget_C_DisplayKilledMessage, DeathMessage) == 0x000000, "Member 'MessageBorderWidget_C_DisplayKilledMessage::DeathMessage' has a wrong offset!");
static_assert(offsetof(MessageBorderWidget_C_DisplayKilledMessage, CallFunc_Concat_StrStr_ReturnValue) == 0x000080, "Member 'MessageBorderWidget_C_DisplayKilledMessage::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MessageBorderWidget_C_DisplayKilledMessage, CallFunc_Concat_StrStr_ReturnValue2) == 0x000090, "Member 'MessageBorderWidget_C_DisplayKilledMessage::CallFunc_Concat_StrStr_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MessageBorderWidget_C_DisplayKilledMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'MessageBorderWidget_C_DisplayKilledMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MessageBorderWidget_C_DisplayKilledMessage, CallFunc_Create_ReturnValue) == 0x0000B8, "Member 'MessageBorderWidget_C_DisplayKilledMessage::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MessageBorderWidget_C_DisplayKilledMessage, KillerPlayerName) == 0x0000C0, "Member 'MessageBorderWidget_C_DisplayKilledMessage::KillerPlayerName' has a wrong offset!");

// Function MessageBorderWidget.MessageBorderWidget_C.AddMessage
// 0x0038 (0x0038 - 0x0000)
struct MessageBorderWidget_C_AddMessage final
{
public:
	class UMessageWidget_C*                       Message;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(class UMessageWidget_C* Message)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMessageWidget_C*                       CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MessageBorderWidget_C_AddMessage) == 0x000008, "Wrong alignment on MessageBorderWidget_C_AddMessage");
static_assert(sizeof(MessageBorderWidget_C_AddMessage) == 0x000038, "Wrong size on MessageBorderWidget_C_AddMessage");
static_assert(offsetof(MessageBorderWidget_C_AddMessage, Message) == 0x000000, "Member 'MessageBorderWidget_C_AddMessage::Message' has a wrong offset!");
static_assert(offsetof(MessageBorderWidget_C_AddMessage, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MessageBorderWidget_C_AddMessage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MessageBorderWidget_C_AddMessage, CallFunc_Array_Add_ReturnValue) == 0x000018, "Member 'MessageBorderWidget_C_AddMessage::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MessageBorderWidget_C_AddMessage, CallFunc_Array_Get_Item) == 0x000020, "Member 'MessageBorderWidget_C_AddMessage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MessageBorderWidget_C_AddMessage, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'MessageBorderWidget_C_AddMessage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MessageBorderWidget_C_AddMessage, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00002C, "Member 'MessageBorderWidget_C_AddMessage::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MessageBorderWidget_C_AddMessage, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'MessageBorderWidget_C_AddMessage::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function MessageBorderWidget.MessageBorderWidget_C.RemoveMessage
// 0x0010 (0x0010 - 0x0000)
struct MessageBorderWidget_C_RemoveMessage final
{
public:
	class UMessageWidget_C*                       DeleteMessage;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MessageBorderWidget_C_RemoveMessage) == 0x000008, "Wrong alignment on MessageBorderWidget_C_RemoveMessage");
static_assert(sizeof(MessageBorderWidget_C_RemoveMessage) == 0x000010, "Wrong size on MessageBorderWidget_C_RemoveMessage");
static_assert(offsetof(MessageBorderWidget_C_RemoveMessage, DeleteMessage) == 0x000000, "Member 'MessageBorderWidget_C_RemoveMessage::DeleteMessage' has a wrong offset!");
static_assert(offsetof(MessageBorderWidget_C_RemoveMessage, CallFunc_Array_RemoveItem_ReturnValue) == 0x000008, "Member 'MessageBorderWidget_C_RemoveMessage::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

}

