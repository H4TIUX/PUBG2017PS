#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmptyWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EmptyWidget.EmptyWidget_C
// 0x0000 (0x0240 - 0x0240)
class UEmptyWidget_C final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmptyWidget_C">();
	}
	static class UEmptyWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmptyWidget_C>();
	}
};
static_assert(alignof(UEmptyWidget_C) == 0x000008, "Wrong alignment on UEmptyWidget_C");
static_assert(sizeof(UEmptyWidget_C) == 0x000240, "Wrong size on UEmptyWidget_C");

}

