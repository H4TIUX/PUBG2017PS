#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Motorbike_04

#include "Basic.hpp"

#include "BP_Motorbike_04_classes.hpp"
#include "BP_Motorbike_04_parameters.hpp"


namespace SDK
{

// Function BP_Motorbike_04.BP_Motorbike_04_C.ExecuteUbergraph_BP_Motorbike_04
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Motorbike_04_C::ExecuteUbergraph_BP_Motorbike_04(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "ExecuteUbergraph_BP_Motorbike_04");

	Params::BP_Motorbike_04_C_ExecuteUbergraph_BP_Motorbike_04 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.OnDeath_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   KillingDamage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDamageEvent                     DamageEvent                                            (ConstParm, Parm, OutParm, ReferenceParm)
// class ATslPlayerState*                  PlayerInstigator                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Motorbike_04_C::OnDeath_Event_0(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "OnDeath_Event_0");

	Params::BP_Motorbike_04_C_OnDeath_Event_0 Parms{};

	Parms.KillingDamage = KillingDamage;
	Parms.DamageEvent = std::move(DamageEvent);
	Parms.PlayerInstigator = PlayerInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Motorbike_04_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Motorbike_04_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "ReceiveTick");

	Params::BP_Motorbike_04_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_13
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Motorbike_04_C::InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_13(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_13");

	Params::BP_Motorbike_04_C_InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_13 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_7
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Motorbike_04_C::InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_7(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_7");

	Params::BP_Motorbike_04_C_InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_7 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_Decimal_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_Decimal_K2Node_InputKeyEvent_16(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_Decimal_K2Node_InputKeyEvent_16");

	Params::BP_Motorbike_04_C_InpActEvt_Decimal_K2Node_InputKeyEvent_16 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_17(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_NumPadFive_K2Node_InputKeyEvent_17");

	Params::BP_Motorbike_04_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_17 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_18(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_NumPadTwo_K2Node_InputKeyEvent_18");

	Params::BP_Motorbike_04_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_18 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_19(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_NumPadEight_K2Node_InputKeyEvent_19");

	Params::BP_Motorbike_04_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_19 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_NumPadNine_K2Node_InputKeyEvent_20(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_NumPadNine_K2Node_InputKeyEvent_20");

	Params::BP_Motorbike_04_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_20 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_NumPadSeven_K2Node_InputKeyEvent_21(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_NumPadSeven_K2Node_InputKeyEvent_21");

	Params::BP_Motorbike_04_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_21 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_NumPadThree_K2Node_InputKeyEvent_22(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_NumPadThree_K2Node_InputKeyEvent_22");

	Params::BP_Motorbike_04_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_22 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_Subtract_K2Node_InputKeyEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_Subtract_K2Node_InputKeyEvent_23(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_Subtract_K2Node_InputKeyEvent_23");

	Params::BP_Motorbike_04_C_InpActEvt_Subtract_K2Node_InputKeyEvent_23 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_Add_K2Node_InputKeyEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_Add_K2Node_InputKeyEvent_24(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_Add_K2Node_InputKeyEvent_24");

	Params::BP_Motorbike_04_C_InpActEvt_Add_K2Node_InputKeyEvent_24 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_25(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_NumPadOne_K2Node_InputKeyEvent_25");

	Params::BP_Motorbike_04_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_25 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_26(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_NumPadFour_K2Node_InputKeyEvent_26");

	Params::BP_Motorbike_04_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_26 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_27(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_NumPadFour_K2Node_InputKeyEvent_27");

	Params::BP_Motorbike_04_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_27 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_28(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_NumPadSix_K2Node_InputKeyEvent_28");

	Params::BP_Motorbike_04_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_28 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_29(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_NumPadSix_K2Node_InputKeyEvent_29");

	Params::BP_Motorbike_04_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_29 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_Multiply_K2Node_InputKeyEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_Multiply_K2Node_InputKeyEvent_30(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_Multiply_K2Node_InputKeyEvent_30");

	Params::BP_Motorbike_04_C_InpActEvt_Multiply_K2Node_InputKeyEvent_30 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_31
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm)

void ABP_Motorbike_04_C::InpActEvt_NumPadZero_K2Node_InputKeyEvent_31(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "InpActEvt_NumPadZero_K2Node_InputKeyEvent_31");

	Params::BP_Motorbike_04_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_31 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.Process_Stabilize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_C::Process_Stabilize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "Process_Stabilize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.Process_Contact
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_C::Process_Contact()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "Process_Contact");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.Process_Eject
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_C::Process_Eject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "Process_Eject");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.Process_AirControl
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_C::Process_AirControl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "Process_AirControl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.Process_Camera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_C::Process_Camera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "Process_Camera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.StablizeMotorbike
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_C::StablizeMotorbike()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "StablizeMotorbike");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.StabilizeMotorbikeSidecart
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_C::StabilizeMotorbikeSidecart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "StabilizeMotorbikeSidecart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.Process_Boost
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_C::Process_Boost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "Process_Boost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.Process_Audio
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_C::Process_Audio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "Process_Audio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.Process_FuelConsumption
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_C::Process_FuelConsumption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "Process_FuelConsumption");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Motorbike_04.BP_Motorbike_04_C.Init_Cache
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_C::Init_Cache()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Motorbike_04_C", "Init_Cache");

	UObject::ProcessEvent(Func, nullptr);
}

}

