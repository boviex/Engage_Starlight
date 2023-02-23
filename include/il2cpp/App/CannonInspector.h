#pragma once

#include "il2cpp.h"

void App_CannonInspector___ctor (App_CannonInspector_o* __this, int32_t x, int32_t z, int32_t maxShells, const MethodInfo* method);
bool App_CannonInspector__IsEanble (App_CannonInspector_o* __this, const MethodInfo* method);
void App_CannonInspector__Completed (App_CannonInspector_o* __this, const MethodInfo* method);
int32_t App_CannonInspector__get_X (App_CannonInspector_o* __this, const MethodInfo* method);
int32_t App_CannonInspector__get_Z (App_CannonInspector_o* __this, const MethodInfo* method);
int32_t App_CannonInspector__GetMaxShells (App_CannonInspector_o* __this, const MethodInfo* method);
void App_CannonInspector__SetShells (App_CannonInspector_o* __this, int32_t num, const MethodInfo* method);
int32_t App_CannonInspector__GetShells (App_CannonInspector_o* __this, const MethodInfo* method);
void App_CannonInspector__DecreaseShell (App_CannonInspector_o* __this, const MethodInfo* method);
App_SkillData_o* App_CannonInspector__GetCannonSkill (App_CannonInspector_o* __this, bool isForce, const MethodInfo* method);
bool App_CannonInspector__IsTerrainFlag (App_CannonInspector_o* __this, int32_t flags, const MethodInfo* method);
bool App_CannonInspector__IsBowCannon (App_CannonInspector_o* __this, const MethodInfo* method);
bool App_CannonInspector__IsMagicCannon (App_CannonInspector_o* __this, const MethodInfo* method);
bool App_CannonInspector__IsFireCannon (App_CannonInspector_o* __this, const MethodInfo* method);
App_TerrainData_o* App_CannonInspector__GetTerrain (App_CannonInspector_o* __this, const MethodInfo* method);
