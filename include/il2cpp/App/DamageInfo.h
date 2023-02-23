#pragma once

#include "il2cpp.h"

System_String_o* App_DamageInfo__get_GlobalAssetPath (App_DamageInfo_o* __this, const MethodInfo* method);
void App_DamageInfo__LoadLayoutPrefab (App_DamageInfo_o* __this, const MethodInfo* method);
bool App_DamageInfo__IsLoadingLayoutPrefab (App_DamageInfo_o* __this, const MethodInfo* method);
bool App_DamageInfo__IsShow (App_DamageInfo_o* __this, const MethodInfo* method);
void App_DamageInfo__Init (App_DamageInfo_o* __this, const MethodInfo* method);
void App_DamageInfo__OnDispose (App_DamageInfo_o* __this, const MethodInfo* method);
void App_DamageInfo__Tick (App_DamageInfo_o* __this, const MethodInfo* method);
void App_DamageInfo__CalcInfoList (App_DamageInfo_o* __this, App_Unit_o* defenceUnit, const MethodInfo* method);
void App_DamageInfo__CalcInfoList (App_DamageInfo_o* __this, const MethodInfo* method);
int32_t App_DamageInfo__CalcDamage (App_DamageInfo_o* __this, App_Unit_o* offenceUnit, App_Unit_o* defenceUnit, App_SkillData_o* engageSkill, const MethodInfo* method);
App_ProcDesc_array* App_DamageInfo__GetProcDesc (App_DamageInfo_o* __this, const MethodInfo* method);
void App_DamageInfo__SetUnit (App_Unit_o* unit, const MethodInfo* method);
void App_DamageInfo__UpdateInfo (const MethodInfo* method);
void App_DamageInfo__SetVisible (bool isVisible, const MethodInfo* method);
void App_DamageInfo__Create (App_ProcInst_o* super, const MethodInfo* method);
void App_DamageInfo___ctor (App_DamageInfo_o* __this, const MethodInfo* method);
