#pragma once

#include "il2cpp.h"

void App_ItemUseSequence___ctor (App_ItemUseSequence_o* __this, const MethodInfo* method);
void App_ItemUseSequence__Branch (App_ItemUseSequence_o* __this, const MethodInfo* method);
App_Unit_o* App_ItemUseSequence__GetTargetUnit (App_ItemUseSequence_o* __this, const MethodInfo* method);
void App_ItemUseSequence__PlayEffect (App_ItemUseSequence_o* __this, const MethodInfo* method);
void App_ItemUseSequence__HealHp (App_Unit_o* unit, int32_t heal, const MethodInfo* method);
bool App_ItemUseSequence__TryActiveSkill (App_Unit_o* unit, App_SkillData_o* skill, const MethodInfo* method);
System_Collections_IEnumerator_o* App_ItemUseSequence__HealHp (App_ItemUseSequence_o* __this, const MethodInfo* method);
void App_ItemUseSequence__ItemUse (App_ItemUseSequence_o* __this, const MethodInfo* method);
void App_ItemUseSequence__GainExp (App_ItemUseSequence_o* __this, const MethodInfo* method);
int32_t App_ItemUseSequence__GetUseType (App_ItemUseSequence_o* __this, const MethodInfo* method);
bool App_ItemUseSequence__IsWeaponEnchant (App_ItemUseSequence_o* __this, const MethodInfo* method);
void App_ItemUseSequence__WeaponEnchant (App_ItemUseSequence_o* __this, const MethodInfo* method);
void App_ItemUseSequence__ShowMessage (App_ItemUseSequence_o* __this, const MethodInfo* method);
bool App_ItemUseSequence__TryExpend (App_ItemUseSequence_o* __this, App_UnitItem_o* unitItem, const MethodInfo* method);
System_Collections_IEnumerator_o* App_ItemUseSequence__Expend (App_ItemUseSequence_o* __this, const MethodInfo* method);
void App_ItemUseSequence__ClassChange (App_ItemUseSequence_o* __this, const MethodInfo* method);
void App_ItemUseSequence__ClassChangeRescue (App_ItemUseSequence_o* __this, const MethodInfo* method);
int32_t App_ItemUseSequence__GetHealHp (App_ItemUseSequence_o* __this, App_Unit_o* target, const MethodInfo* method);
bool App_ItemUseSequence__CanHealHp (App_ItemUseSequence_o* __this, App_Unit_o* target, const MethodInfo* method);
bool App_ItemUseSequence__CanGain (App_ItemUseSequence_o* __this, App_Unit_o* target, const MethodInfo* method);
void App_ItemUseSequence__TryNextTarget (App_ItemUseSequence_o* __this, const MethodInfo* method);
void App_ItemUseSequence__TryGrow (App_ItemUseSequence_o* __this, const MethodInfo* method);
void App_ItemUseSequence__CreateBind (App_ProcInst_o* super, const MethodInfo* method);
