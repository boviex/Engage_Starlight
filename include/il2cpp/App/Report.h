#pragma once

#include "il2cpp.h"

void App_Report__MapStart (const MethodInfo* method);
void App_Report__MapComplete (const MethodInfo* method);
void App_Report__Kizuna (const MethodInfo* method);
void App_Report__AddBoughtItem (App_ItemData_o* item, const MethodInfo* method);
void App_Report__AddRefineItem (App_ItemData_o* item, int32_t level, const MethodInfo* method);
void App_Report__AddEvolveItem (App_ItemData_o* prev, App_ItemData_o* next, const MethodInfo* method);
void App_Report__AddUseItem (App_ItemData_o* item, const MethodInfo* method);
void App_Report__AddPickupItem (App_ItemData_o* item, const MethodInfo* method);
void App_Report__AddTalk (App_PersonData_o* person, const MethodInfo* method);
void App_Report__AddEquipSkillPool (App_Unit_o* unit, App_GodUnit_o* god, System_String_o* skillName, const MethodInfo* method);
void App_Report__AddEngageFull (App_Unit_o* unit, const MethodInfo* method);
void App_Report__AddEngageStart (App_Unit_o* unit, const MethodInfo* method);
void App_Report__AddEngageAttack (App_Unit_o* unit, const MethodInfo* method);
void App_Report__ClearRepoart (const MethodInfo* method);
void App_Report___ctor (App_Report_o* __this, const MethodInfo* method);
