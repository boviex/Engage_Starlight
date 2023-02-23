#pragma once

#include "il2cpp.h"

bool App_MapItemHelper__CanUse (App_Unit_o* unit, int32_t unitItemIndex, int32_t targetX, int32_t targetZ, int32_t unitX, int32_t unitZ, int32_t flag, App_SkillData_o* skill, const MethodInfo* method);
App_Unit_o* App_MapItemHelper__GetUseTargetUnit (App_Unit_o* unit, App_ItemData_o* item, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapItemHelper__CanUse (App_Unit_o* attackUnit, App_UnitItem_o* unitItem, int32_t atkPosX, int32_t atkPosZ, int32_t targetPosX, int32_t targetPosZ, int32_t flag, App_SkillData_o* skill, const MethodInfo* method);
bool App_MapItemHelper__IsTargetAllied (int32_t type, const MethodInfo* method);
bool App_MapItemHelper__CanDirectTarget (App_ItemData_o* item, const MethodInfo* method);
int32_t App_MapItemHelper__GetBlessFlags (App_ItemData_o* item, App_Unit_o* target, int32_t useType, const MethodInfo* method);
int32_t App_MapItemHelper__GetBlessFlags (App_ItemData_o* item, App_Unit_o* target, const MethodInfo* method);
bool App_MapItemHelper__CanUseImpl (App_Unit_o* unit, App_ItemData_o* item, App_Unit_o* target, int32_t useType, App_SkillArray_o* giveSkills, const MethodInfo* method);
bool App_MapItemHelper__CanUseEnchant (App_Unit_o* unit, App_ItemData_o* item, App_Unit_o* target, bool cancelable, const MethodInfo* method);
bool App_MapItemHelper__CanUseTarget (App_Unit_o* unit, App_ItemData_o* item, App_Unit_o* target, const MethodInfo* method);
int32_t App_MapItemHelper__GetItemIndex (App_Unit_o* unit, int32_t targetX, int32_t targetZ, int32_t unitX, int32_t unitZ, int32_t flag, const MethodInfo* method);
void App_MapItemHelper__ForEachRodTarget (App_Unit_o* unit, App_ItemData_o* item, int32_t targetX, int32_t targetZ, App_SkillData_o* skill, System_Action_Unit__o* func, const MethodInfo* method);
void App_MapItemHelper__ForEachRodRange (App_Unit_o* unit, App_ItemData_o* item, int32_t targetX, int32_t targetZ, System_Action_int__int__o* func, const MethodInfo* method);
bool App_MapItemHelper__TryCreation (App_ProcInst_o* super, App_Unit_o* unit, int32_t targetX, int32_t targetZ, System_String_o* tid, const MethodInfo* method);
bool App_MapItemHelper__GetRescuePosition (int32_t* dstX, int32_t* dstZ, App_Unit_o* target, int32_t srcX, int32_t srcZ, bool isHere, const MethodInfo* method);
bool App_MapItemHelper__GetRescuePosition (App_Unit_o* rodUnit, int32_t* dstX, int32_t* dstZ, App_Unit_o* target, int32_t srcX, int32_t srcZ, bool isHere, const MethodInfo* method);
bool App_MapItemHelper__CanAttack (App_Unit_o* unit, App_Unit_o* target, int32_t flag, const MethodInfo* method);
bool App_MapItemHelper__CanRod (App_Unit_o* unit, App_Unit_o* target, App_ItemData_o* item, int32_t flag, const MethodInfo* method);
App_ItemData_o* App_MapItemHelper__GetFireCannonItem (const MethodInfo* method);
void App_MapItemHelper__GetFireCannonRangeIO (App_Unit_o* unit, int32_t* rangeI, int32_t* rangeO, const MethodInfo* method);
int32_t App_MapItemHelper__GetHealPower (App_Unit_o* unit, int32_t useType, int32_t power, const MethodInfo* method);
int32_t App_MapItemHelper__GetHealPower (App_Unit_o* unit, App_ItemData_o* item, bool isEnchant, const MethodInfo* method);
void App_MapItemHelper___ctor (App_MapItemHelper_o* __this, const MethodInfo* method);
