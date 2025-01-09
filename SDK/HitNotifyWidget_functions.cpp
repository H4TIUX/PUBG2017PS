#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HitNotifyWidget

#include "Basic.hpp"

#include "HitNotifyWidget_classes.hpp"
#include "HitNotifyWidget_parameters.hpp"


namespace SDK
{

// Function HitNotifyWidget.HitNotifyWidget_C.OnHitNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DamagePercent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EDamageTypeCategory                     DamageTypeCategory                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHitNotifyWidget_C::OnHitNotify(float DamagePercent, EDamageTypeCategory DamageTypeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitNotifyWidget_C", "OnHitNotify");

	Params::HitNotifyWidget_C_OnHitNotify Parms{};

	Parms.DamagePercent = DamagePercent;
	Parms.DamageTypeCategory = DamageTypeCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitNotifyWidget.HitNotifyWidget_C.PlayHitNotifySound
// (Public, BlueprintCallable, BlueprintEvent)

void UHitNotifyWidget_C::PlayHitNotifySound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitNotifyWidget_C", "PlayHitNotifySound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HitNotifyWidget.HitNotifyWidget_C.SetRTPCValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           RTPC                                                   (Parm, ZeroConstructor)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHitNotifyWidget_C::SetRTPCValue(const class FString& RTPC, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitNotifyWidget_C", "SetRTPCValue");

	Params::HitNotifyWidget_C_SetRTPCValue Parms{};

	Parms.RTPC = std::move(RTPC);
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitNotifyWidget.HitNotifyWidget_C.PostAkEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHitNotifyWidget_C::PostAkEvent(class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitNotifyWidget_C", "PostAkEvent");

	Params::HitNotifyWidget_C_PostAkEvent Parms{};

	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomTranslation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        Translation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHitNotifyWidget_C::GetRandomTranslation(struct FVector2D* Translation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitNotifyWidget_C", "GetRandomTranslation");

	Params::HitNotifyWidget_C_GetRandomTranslation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Translation != nullptr)
		*Translation = std::move(Parms.Translation);
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        Scale                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHitNotifyWidget_C::GetRandomScale(struct FVector2D* Scale) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitNotifyWidget_C", "GetRandomScale");

	Params::HitNotifyWidget_C_GetRandomScale Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);
}


// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamagePercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   DamagedPercent                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   DamagePercent                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHitNotifyWidget_C::DamagedPercentToDamagePercent(float DamagedPercent, float* DamagePercent) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitNotifyWidget_C", "DamagedPercentToDamagePercent");

	Params::HitNotifyWidget_C_DamagedPercentToDamagePercent Parms{};

	Parms.DamagedPercent = DamagedPercent;

	UObject::ProcessEvent(Func, &Parms);

	if (DamagePercent != nullptr)
		*DamagePercent = Parms.DamagePercent;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetPlayerHealthPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   HealthPercent                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHitNotifyWidget_C::GetPlayerHealthPercent(float* HealthPercent) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitNotifyWidget_C", "GetPlayerHealthPercent");

	Params::HitNotifyWidget_C_GetPlayerHealthPercent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HealthPercent != nullptr)
		*HealthPercent = Parms.HealthPercent;
}


// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   DamagedPercent                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Damage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHitNotifyWidget_C::DamagedPercentToDamage(float DamagedPercent, float* Damage) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitNotifyWidget_C", "DamagedPercentToDamage");

	Params::HitNotifyWidget_C_DamagedPercentToDamage Parms{};

	Parms.DamagedPercent = DamagedPercent;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;
}

}

