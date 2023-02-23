#pragma once

#include "il2cpp.h"

void App_TerrainCostData__Load (const MethodInfo* method);
void App_TerrainCostData___ctor (App_TerrainCostData_o* __this, const MethodInfo* method);
System_String_o* App_TerrainCostData__GetDebugName (App_TerrainCostData_o* __this, const MethodInfo* method);
System_String_o* App_TerrainCostData__get_Name (App_TerrainCostData_o* __this, const MethodInfo* method);
void App_TerrainCostData__set_Name (App_TerrainCostData_o* __this, System_String_o* value, const MethodInfo* method);
uint8_t App_TerrainCostData__get_None (App_TerrainCostData_o* __this, const MethodInfo* method);
void App_TerrainCostData__set_None (App_TerrainCostData_o* __this, uint8_t value, const MethodInfo* method);
uint8_t App_TerrainCostData__get_Foot (App_TerrainCostData_o* __this, const MethodInfo* method);
void App_TerrainCostData__set_Foot (App_TerrainCostData_o* __this, uint8_t value, const MethodInfo* method);
uint8_t App_TerrainCostData__get_Horse (App_TerrainCostData_o* __this, const MethodInfo* method);
void App_TerrainCostData__set_Horse (App_TerrainCostData_o* __this, uint8_t value, const MethodInfo* method);
uint8_t App_TerrainCostData__get_Fly (App_TerrainCostData_o* __this, const MethodInfo* method);
void App_TerrainCostData__set_Fly (App_TerrainCostData_o* __this, uint8_t value, const MethodInfo* method);
uint8_t App_TerrainCostData__get_Dragon (App_TerrainCostData_o* __this, const MethodInfo* method);
void App_TerrainCostData__set_Dragon (App_TerrainCostData_o* __this, uint8_t value, const MethodInfo* method);
uint8_t App_TerrainCostData__get_Pad (App_TerrainCostData_o* __this, const MethodInfo* method);
void App_TerrainCostData__set_Pad (App_TerrainCostData_o* __this, uint8_t value, const MethodInfo* method);
uint8_t App_TerrainCostData__get_ColorR (App_TerrainCostData_o* __this, const MethodInfo* method);
void App_TerrainCostData__set_ColorR (App_TerrainCostData_o* __this, uint8_t value, const MethodInfo* method);
uint8_t App_TerrainCostData__get_ColorG (App_TerrainCostData_o* __this, const MethodInfo* method);
void App_TerrainCostData__set_ColorG (App_TerrainCostData_o* __this, uint8_t value, const MethodInfo* method);
uint8_t App_TerrainCostData__get_ColorB (App_TerrainCostData_o* __this, const MethodInfo* method);
void App_TerrainCostData__set_ColorB (App_TerrainCostData_o* __this, uint8_t value, const MethodInfo* method);
uint8_t App_TerrainCostData__get_ColorA (App_TerrainCostData_o* __this, const MethodInfo* method);
void App_TerrainCostData__set_ColorA (App_TerrainCostData_o* __this, uint8_t value, const MethodInfo* method);
UnityEngine_Color_o App_TerrainCostData__get_Color (App_TerrainCostData_o* __this, const MethodInfo* method);
void App_TerrainCostData__set_Color (App_TerrainCostData_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
void App_TerrainCostData__OnBuild (App_TerrainCostData_o* __this, const MethodInfo* method);
int32_t App_TerrainCostData__GetCost (int32_t moveType, int32_t x, int32_t z, const MethodInfo* method);
int32_t App_TerrainCostData__GetCost (App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
int32_t App_TerrainCostData__GetCostWithoutOverlap (int32_t moveType, int32_t x, int32_t z, const MethodInfo* method);
bool App_TerrainCostData__IsNoMove (App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
bool App_TerrainCostData__IsNoMove (int32_t moveType, int32_t x, int32_t z, const MethodInfo* method);
bool App_TerrainCostData__IsNoMove (int32_t cost, const MethodInfo* method);
