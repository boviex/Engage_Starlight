#pragma once

#include "il2cpp.h"

App_Unit_o* App_MapImageUnit__GetUnit (App_MapImageUnit_o* __this, int32_t x, int32_t z, const MethodInfo* method);
App_Unit_o* App_MapImageUnit__GetUnitWithMind (App_MapImageUnit_o* __this, int32_t x, int32_t z, const MethodInfo* method);
void App_MapImageUnit__Update (App_MapImageUnit_o* __this, const MethodInfo* method);
void App_MapImageUnit__Update (App_MapImageUnit_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_MapImageUnit__TryAdd (App_MapImageUnit_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_MapImageUnit__TryDelete (App_MapImageUnit_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapImageUnit__UpdateSupportSkill (App_MapImageUnit_o* __this, const MethodInfo* method);
void App_MapImageUnit__UpdateSupportSkill (App_MapImageUnit_o* __this, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
void App_MapImageUnit__AddImpl (App_MapImageUnit_o* __this, App_Unit_o* unit, int32_t baseX, int32_t baseZ, const MethodInfo* method);
void App_MapImageUnit__DeleteImpl (App_MapImageUnit_o* __this, App_Unit_o* unit, int32_t baseX, int32_t baseZ, const MethodInfo* method);
void App_MapImageUnit__Add (App_MapImageUnit_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapImageUnit__Add (App_MapImageUnit_o* __this, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
void App_MapImageUnit__AddNoUpdatingSupportSkill (App_MapImageUnit_o* __this, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
void App_MapImageUnit__Delete (App_MapImageUnit_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapImageUnit__Delete (App_MapImageUnit_o* __this, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
void App_MapImageUnit__DeleteNoUpdatingSupportSkill (App_MapImageUnit_o* __this, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapImageUnit__TryMove (App_MapImageUnit_o* __this, App_Unit_o* unit, int32_t oldX, int32_t oldZ, int32_t newX, int32_t newZ, const MethodInfo* method);
void App_MapImageUnit___ctor (App_MapImageUnit_o* __this, const MethodInfo* method);
