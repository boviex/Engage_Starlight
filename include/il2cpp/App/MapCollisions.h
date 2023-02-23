#pragma once

#include "il2cpp.h"

void App_MapCollisions__CreateBorder (UnityEngine_GameObject_o* prefab, UnityEngine_GameObject_o* parent, System_String_o* name, UnityEngine_Vector3_o pos, UnityEngine_Vector3_o scale, const MethodInfo* method);
float App_MapCollisions__GetMinHeight (int32_t x, int32_t z, const MethodInfo* method);
void App_MapCollisions__CreateBorder (UnityEngine_GameObject_o* prefab, UnityEngine_GameObject_o* parent, System_String_o* name, int32_t x, int32_t z, const MethodInfo* method);
void App_MapCollisions__CreateEdge (UnityEngine_GameObject_o* prefab, UnityEngine_GameObject_o* parent, System_String_o* name, int32_t x, int32_t z, uint8_t mask, const MethodInfo* method);
UnityEngine_GameObject_o* App_MapCollisions__CreateChild (App_MapCollisions_o* __this, System_String_o* name, const MethodInfo* method);
void App_MapCollisions__Setup (App_MapCollisions_o* __this, const MethodInfo* method);
void App_MapCollisions__CreteaCombatBorders (App_MapCollisions_o* __this, App_BattleCalculator_o* calculator, const MethodInfo* method);
void App_MapCollisions__CreteaCombatBorders (App_MapCollisions_o* __this, bool canSkyBattle, App_BattleInfoSide_o* allowSide, const MethodInfo* method);
void App_MapCollisions__DeleteCombatBorders (App_MapCollisions_o* __this, const MethodInfo* method);
UnityEngine_GameObject_o* App_MapCollisions__TryCreateInstance (const MethodInfo* method);
void App_MapCollisions___ctor (App_MapCollisions_o* __this, const MethodInfo* method);
