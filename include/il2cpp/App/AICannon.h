#pragma once

#include "il2cpp.h"

void App_AICannon___ctor (App_AICannon_o* __this, const MethodInfo* method);
void App_AICannon__Update (App_AICannon_o* __this, const MethodInfo* method);
bool App_AICannon__Think (App_AICannon_o* __this, App_Unit_o* actor, uint32_t attackScore, float killRate, const MethodInfo* method);
bool App_AICannon__ThinkFireCannon (App_AICannon_o* __this, App_Unit_o* actor, const MethodInfo* method);
bool App_AICannon__ThinkCommonCheck (App_AICannon_o* __this, App_Unit_o* actor, App_AICannon_CannonData_o* cannon, int32_t* move, App_SkillData_o** cannonSkill, const MethodInfo* method);
bool App_AICannon__CanUse (App_Unit_o* actor, App_AICannon_CannonData_o* cannon, const MethodInfo* method);
System_Collections_Generic_List_AICannon_CannonData__o* App_AICannon__EnumerateCannon (App_AICannon_o* __this, const MethodInfo* method);
System_Collections_Generic_List_AICannon_CannonData__o* App_AICannon__get_Cannons (App_AICannon_o* __this, const MethodInfo* method);
