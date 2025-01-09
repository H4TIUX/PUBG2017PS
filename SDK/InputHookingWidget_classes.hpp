#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputHookingWidget

#include "Basic.hpp"

#include "TslGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InputHookingWidget.InputHookingWidget_C
// 0x0000 (0x0290 - 0x0290)
class UInputHookingWidget_C : public UBlockInputUserWidget
{
public:
	void OnInputAction();
	void OnInputAxis(float Scale);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InputHookingWidget_C">();
	}
	static class UInputHookingWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputHookingWidget_C>();
	}
};
static_assert(alignof(UInputHookingWidget_C) == 0x000008, "Wrong alignment on UInputHookingWidget_C");
static_assert(sizeof(UInputHookingWidget_C) == 0x000290, "Wrong size on UInputHookingWidget_C");

}

