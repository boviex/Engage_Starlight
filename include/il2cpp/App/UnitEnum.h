#pragma once

#include "il2cpp.h"

App_UnitEnum_o App_UnitEnum__GetEnumerator (App_Force_Type_array* types, const MethodInfo* method);
App_UnitEnum_o App_UnitEnum__GetOnMapForce (const MethodInfo* method);
App_UnitEnum_o App_UnitEnum__GetEnemy (int32_t force, const MethodInfo* method);
App_UnitEnum_o App_UnitEnum__GetAlly (int32_t force, const MethodInfo* method);
App_UnitEnum_o App_UnitEnum__GetMask (uint32_t mask, const MethodInfo* method);
App_UnitEnum_o App_UnitEnum__GetOnSortieForce (const MethodInfo* method);
App_UnitEnum_o App_UnitEnum__GetUsedForce (const MethodInfo* method);
App_UnitEnum_o App_UnitEnum__GetSelfForce (const MethodInfo* method);
App_UnitEnum_o App_UnitEnum__GetSamePlayerForce (const MethodInfo* method);
App_UnitEnum_o App_UnitEnum__Get (int32_t type, const MethodInfo* method);
App_UnitEnum_TargetEnumerator_o App_UnitEnum__GetTarget (App_Unit_o* unit, int32_t _near_, int32_t _far_, const MethodInfo* method);
App_UnitEnum_TargetEnumerator_o App_UnitEnum__GetTarget (App_Unit_o* unit, App_SkillData_o* skill, const MethodInfo* method);
App_UnitEnum_TargetEnumerator_o App_UnitEnum__GetTarget (App_Unit_o* unit, int32_t x, int32_t z, int32_t _near_, int32_t _far_, const MethodInfo* method);
void App_UnitEnum___ctor (App_UnitEnum_o __this, App_Force_Type_array* types, const MethodInfo* method);
App_UnitEnum_Enumerator_o App_UnitEnum__GetEnumerator (App_UnitEnum_o __this, const MethodInfo* method);
void App_UnitEnum___cctor (const MethodInfo* method);
