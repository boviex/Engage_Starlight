#pragma once

#include "il2cpp.h"

void App_ArenaBondLevelSelectRoot__LoadPrefabAsync (const MethodInfo* method);
bool App_ArenaBondLevelSelectRoot__IsLoadingPrefab (const MethodInfo* method);
void App_ArenaBondLevelSelectRoot__UnloadPrefab (const MethodInfo* method);
App_ArenaBondLevelSelectRoot_o* App_ArenaBondLevelSelectRoot__CreateBind (App_ProcInst_o* super, App_Unit_o* selectUnit, App_GodUnit_o* selectGod, int32_t selectType, App_ArenaBondLevelSelectMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
void App_ArenaBondLevelSelectRoot__Create (App_ArenaBondLevelSelectRoot_o* __this, App_ProcInst_o* super, App_Unit_o* selectUnit, App_GodUnit_o* selectGod, int32_t selectType, App_ArenaBondLevelSelectMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
void App_ArenaBondLevelSelectRoot__CharaInfoPlayAnim (App_ArenaBondLevelSelectRoot_o* __this, System_String_o* animName, const MethodInfo* method);
void App_ArenaBondLevelSelectRoot__OnSelectMenuItem (App_ArenaBondLevelSelectRoot_o* __this, App_GodUnit_o* god, int32_t fromLv, int32_t toLv, const MethodInfo* method);
void App_ArenaBondLevelSelectRoot__OnDecideMenuItem (App_ArenaBondLevelSelectRoot_o* __this, App_GodUnit_o* god, int32_t type, bool start, int32_t exp, int32_t useCount, const MethodInfo* method);
void App_ArenaBondLevelSelectRoot__OnChangeGodToNext (App_ArenaBondLevelSelectRoot_o* __this, const MethodInfo* method);
void App_ArenaBondLevelSelectRoot__OnChangeGodToPrev (App_ArenaBondLevelSelectRoot_o* __this, const MethodInfo* method);
void App_ArenaBondLevelSelectRoot___ctor (App_ArenaBondLevelSelectRoot_o* __this, const MethodInfo* method);
