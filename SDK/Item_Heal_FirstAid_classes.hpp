#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_Heal_FirstAid

#include "Basic.hpp"

#include "TslGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Item_Heal_FirstAid.Item_Heal_FirstAid_C
// 0x0018 (0x01D8 - 0x01C0)
class UItem_Heal_FirstAid_C final : public UCastableItem
{
public:
	class ATslCharacter*                          Character;                                         // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         HealLimit;                                         // 0x01C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         PrintTime;                                         // 0x01CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          isProcessing;                                      // 0x01D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	bool UseBy(class ATslCharacter* Character_0);
	void Heal();
	void PrintCastingTime();

	bool IsCastable(class ATslCharacter* Character_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Item_Heal_FirstAid_C">();
	}
	static class UItem_Heal_FirstAid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItem_Heal_FirstAid_C>();
	}
};
static_assert(alignof(UItem_Heal_FirstAid_C) == 0x000008, "Wrong alignment on UItem_Heal_FirstAid_C");
static_assert(sizeof(UItem_Heal_FirstAid_C) == 0x0001D8, "Wrong size on UItem_Heal_FirstAid_C");
static_assert(offsetof(UItem_Heal_FirstAid_C, Character) == 0x0001C0, "Member 'UItem_Heal_FirstAid_C::Character' has a wrong offset!");
static_assert(offsetof(UItem_Heal_FirstAid_C, HealLimit) == 0x0001C8, "Member 'UItem_Heal_FirstAid_C::HealLimit' has a wrong offset!");
static_assert(offsetof(UItem_Heal_FirstAid_C, PrintTime) == 0x0001CC, "Member 'UItem_Heal_FirstAid_C::PrintTime' has a wrong offset!");
static_assert(offsetof(UItem_Heal_FirstAid_C, isProcessing) == 0x0001D0, "Member 'UItem_Heal_FirstAid_C::isProcessing' has a wrong offset!");

}

