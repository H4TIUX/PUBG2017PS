#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HTML5Networking

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class HTML5Networking.WebSocketConnection
// 0x0010 (0x336F8 - 0x336E8)
class UWebSocketConnection final : public UNetConnection
{
public:
	uint8                                         Pad_336E8[0x10];                                   // 0x336E8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WebSocketConnection">();
	}
	static class UWebSocketConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebSocketConnection>();
	}
};
static_assert(alignof(UWebSocketConnection) == 0x000008, "Wrong alignment on UWebSocketConnection");
static_assert(sizeof(UWebSocketConnection) == 0x0336F8, "Wrong size on UWebSocketConnection");

// Class HTML5Networking.WebSocketNetDriver
// 0x0010 (0x0428 - 0x0418)
class UWebSocketNetDriver final : public UNetDriver
{
public:
	int32                                         WebSocketPort;                                     // 0x0418(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41C[0xC];                                      // 0x041C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WebSocketNetDriver">();
	}
	static class UWebSocketNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebSocketNetDriver>();
	}
};
static_assert(alignof(UWebSocketNetDriver) == 0x000008, "Wrong alignment on UWebSocketNetDriver");
static_assert(sizeof(UWebSocketNetDriver) == 0x000428, "Wrong size on UWebSocketNetDriver");
static_assert(offsetof(UWebSocketNetDriver, WebSocketPort) == 0x000418, "Member 'UWebSocketNetDriver::WebSocketPort' has a wrong offset!");

}

