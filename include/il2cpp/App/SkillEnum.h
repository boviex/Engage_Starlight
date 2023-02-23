#pragma once

#include "il2cpp.h"

void App_SkillEnum___ctor (App_SkillEnum_o __this, App_SkillArray_o* array, int32_t mask, const MethodInfo* method);
App_SkillEnum_o App_SkillEnum__Get (App_SkillArray_o* array, int32_t mask, const MethodInfo* method);
App_SkillEnum_o App_SkillEnum__Get (App_Unit_o* unit, int32_t mask, const MethodInfo* method);
App_SkillEnum_o App_SkillEnum__Get (App_SkillArray_o* array, int32_t timing, const MethodInfo* method);
App_SkillEnum_o App_SkillEnum__Get (App_Unit_o* unit, int32_t timing, const MethodInfo* method);
App_SkillEnum_o App_SkillEnum__GetSupports (App_SkillArray_o* array, const MethodInfo* method);
App_SkillEnum_o App_SkillEnum__GetSupports (App_Unit_o* unit, const MethodInfo* method);
App_SkillEnum_Enumerator_o App_SkillEnum__GetEnumerator (App_SkillEnum_o __this, const MethodInfo* method);
void App_SkillEnum__Dispose (App_SkillEnum_o __this, const MethodInfo* method);
System_Collections_Generic_List_SkillData__o* App_SkillEnum__GetUnsafeList (App_SkillEnum_o __this, const MethodInfo* method);
void App_SkillEnum___cctor (const MethodInfo* method);
