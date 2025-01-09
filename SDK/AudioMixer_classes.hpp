#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioMixer

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "AudioMixer_structs.hpp"


namespace SDK
{

// Class AudioMixer.SoundEffectLowPassFilter
// 0x0000 (0x0090 - 0x0090)
class USoundEffectLowPassFilter final : public USoundEffectSource
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundEffectLowPassFilter">();
	}
	static class USoundEffectLowPassFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundEffectLowPassFilter>();
	}
};
static_assert(alignof(USoundEffectLowPassFilter) == 0x000008, "Wrong alignment on USoundEffectLowPassFilter");
static_assert(sizeof(USoundEffectLowPassFilter) == 0x000090, "Wrong size on USoundEffectLowPassFilter");

// Class AudioMixer.SoundEffectLowPassFilterPreset
// 0x0008 (0x0048 - 0x0040)
class USoundEffectLowPassFilterPreset final : public USoundEffectSourcePreset
{
public:
	struct FSoundEffectLowPassFilterSettings      Settings;                                          // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundEffectLowPassFilterPreset">();
	}
	static class USoundEffectLowPassFilterPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundEffectLowPassFilterPreset>();
	}
};
static_assert(alignof(USoundEffectLowPassFilterPreset) == 0x000008, "Wrong alignment on USoundEffectLowPassFilterPreset");
static_assert(sizeof(USoundEffectLowPassFilterPreset) == 0x000048, "Wrong size on USoundEffectLowPassFilterPreset");
static_assert(offsetof(USoundEffectLowPassFilterPreset, Settings) == 0x000040, "Member 'USoundEffectLowPassFilterPreset::Settings' has a wrong offset!");

// Class AudioMixer.SourceEffectFilter
// 0x0000 (0x0090 - 0x0090)
class USourceEffectFilter final : public USoundEffectSource
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectFilter">();
	}
	static class USourceEffectFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectFilter>();
	}
};
static_assert(alignof(USourceEffectFilter) == 0x000008, "Wrong alignment on USourceEffectFilter");
static_assert(sizeof(USourceEffectFilter) == 0x000090, "Wrong size on USourceEffectFilter");

// Class AudioMixer.SoundEffectSourceFilterPreset
// 0x0010 (0x0050 - 0x0040)
class USoundEffectSourceFilterPreset final : public USoundEffectSourcePreset
{
public:
	struct FSourceEffectFilterSettings            Settings;                                          // 0x0040(0x0010)(Edit, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundEffectSourceFilterPreset">();
	}
	static class USoundEffectSourceFilterPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundEffectSourceFilterPreset>();
	}
};
static_assert(alignof(USoundEffectSourceFilterPreset) == 0x000008, "Wrong alignment on USoundEffectSourceFilterPreset");
static_assert(sizeof(USoundEffectSourceFilterPreset) == 0x000050, "Wrong size on USoundEffectSourceFilterPreset");
static_assert(offsetof(USoundEffectSourceFilterPreset, Settings) == 0x000040, "Member 'USoundEffectSourceFilterPreset::Settings' has a wrong offset!");

// Class AudioMixer.SoundEffectSubmixEQ
// 0x0000 (0x0090 - 0x0090)
class USoundEffectSubmixEQ final : public USoundEffectSource
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundEffectSubmixEQ">();
	}
	static class USoundEffectSubmixEQ* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundEffectSubmixEQ>();
	}
};
static_assert(alignof(USoundEffectSubmixEQ) == 0x000008, "Wrong alignment on USoundEffectSubmixEQ");
static_assert(sizeof(USoundEffectSubmixEQ) == 0x000090, "Wrong size on USoundEffectSubmixEQ");

// Class AudioMixer.SoundEffectSubmixEQPreset
// 0x0008 (0x0048 - 0x0040)
class USoundEffectSubmixEQPreset final : public USoundEffectSourcePreset
{
public:
	struct FSubmixEffectEQSettings                Settings;                                          // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundEffectSubmixEQPreset">();
	}
	static class USoundEffectSubmixEQPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundEffectSubmixEQPreset>();
	}
};
static_assert(alignof(USoundEffectSubmixEQPreset) == 0x000008, "Wrong alignment on USoundEffectSubmixEQPreset");
static_assert(sizeof(USoundEffectSubmixEQPreset) == 0x000048, "Wrong size on USoundEffectSubmixEQPreset");
static_assert(offsetof(USoundEffectSubmixEQPreset, Settings) == 0x000040, "Member 'USoundEffectSubmixEQPreset::Settings' has a wrong offset!");

}

