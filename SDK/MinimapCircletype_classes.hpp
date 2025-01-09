#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinimapCircletype

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MinimapCircletype.MinimapCircletype_C
// 0x0008 (0x0248 - 0x0240)
class UMinimapCircletype_C final : public UUserWidget
{
public:
	class UCircleMiniMapWidget_C*                 CircleMiniMapWidget_159;                           // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	void OnPrepass_0(class UWidget* BoundWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinimapCircletype_C">();
	}
	static class UMinimapCircletype_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinimapCircletype_C>();
	}
};
static_assert(alignof(UMinimapCircletype_C) == 0x000008, "Wrong alignment on UMinimapCircletype_C");
static_assert(sizeof(UMinimapCircletype_C) == 0x000248, "Wrong size on UMinimapCircletype_C");
static_assert(offsetof(UMinimapCircletype_C, CircleMiniMapWidget_159) == 0x000240, "Member 'UMinimapCircletype_C::CircleMiniMapWidget_159' has a wrong offset!");

}

