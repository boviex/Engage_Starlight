#pragma once

#include "il2cpp.h"

bool App_Versus_VersusCheck__Validate (const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateCasual (const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateRanked (const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateSaveEdit (const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateUnits (const MethodInfo* method);
bool App_Versus_VersusCheck__ValidatePlayerUnits (const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateUnit (App_Unit_o* unit, const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateParams (App_Unit_o* unit, const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateSkills (App_Unit_o* unit, const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateEquipRing (App_Unit_o* unit, const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateJob (App_Unit_o* unit, const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateEquipSkill (App_SkillData_o* skill, const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateGodSkills (App_GodUnit_o* god, App_Unit_o* unit, const MethodInfo* method);
void App_Versus_VersusCheck__GetGrowthSkills (App_GodUnit_o* god, System_Collections_Generic_List_string__o** growthSynchroSkills, System_Collections_Generic_List_string__o** growthEngageSkills, const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateForce (uint32_t forceMask, const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateCount (const MethodInfo* method);
bool App_Versus_VersusCheck__ValidateEditMap (const MethodInfo* method);
void App_Versus_VersusCheck__CountObjects (UnityEngine_GameObject_o* root, App_Versus_MapObjectCounter_o* player, App_Versus_MapObjectCounter_o* enemy, const MethodInfo* method);
void App_Versus_VersusCheck___ctor (App_Versus_VersusCheck_o* __this, const MethodInfo* method);
