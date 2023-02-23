#pragma once

#include "il2cpp.h"

bool App_MapActor__IsInvasion (int32_t ox, int32_t oz, int32_t nx, int32_t nz, const MethodInfo* method);
bool App_MapActor__IsDiagonallyDir (int32_t ox, int32_t oz, int32_t nx, int32_t nz, const MethodInfo* method);
bool App_MapActor__IsConnect (int32_t x, int32_t z, uint8_t dir, const MethodInfo* method);
UnityEngine_Vector3_o App_MapActor__Extrusion (UnityEngine_Vector3_o pos, float radius, const MethodInfo* method);
int32_t App_MapActor__TickMove (App_Unit_o* unit, const MethodInfo* method);
void App_MapActor___ctor (App_MapActor_o* __this, const MethodInfo* method);
