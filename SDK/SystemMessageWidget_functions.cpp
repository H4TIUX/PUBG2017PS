#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SystemMessageWidget

#include "Basic.hpp"

#include "SystemMessageWidget_classes.hpp"
#include "SystemMessageWidget_parameters.hpp"


namespace SDK
{

// Function SystemMessageWidget.SystemMessageWidget_C.DisplaySystemMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemMessageType                      MessageType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             Message                                                (Parm)

void USystemMessageWidget_C::DisplaySystemMessage(ESystemMessageType MessageType, const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessageWidget_C", "DisplaySystemMessage");

	Params::SystemMessageWidget_C_DisplaySystemMessage Parms{};

	Parms.MessageType = MessageType;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SystemMessageWidget.SystemMessageWidget_C.AddMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageWidget_C*                 Message                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMessageWidget_C::AddMessage(class UMessageWidget_C* Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessageWidget_C", "AddMessage");

	Params::SystemMessageWidget_C_AddMessage Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);
}

}

