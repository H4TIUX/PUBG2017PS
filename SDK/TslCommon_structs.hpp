#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TslCommon

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct TslCommon.LogBase
// 0x0028 (0x0028 - 0x0000)
struct FLogBase
{
public:
	int32                                         mV;                                                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 mD;                                                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 mT;                                                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLogBase) == 0x000008, "Wrong alignment on FLogBase");
static_assert(sizeof(FLogBase) == 0x000028, "Wrong size on FLogBase");
static_assert(offsetof(FLogBase, mV) == 0x000000, "Member 'FLogBase::mV' has a wrong offset!");
static_assert(offsetof(FLogBase, mD) == 0x000008, "Member 'FLogBase::mD' has a wrong offset!");
static_assert(offsetof(FLogBase, mT) == 0x000018, "Member 'FLogBase::mT' has a wrong offset!");

}

