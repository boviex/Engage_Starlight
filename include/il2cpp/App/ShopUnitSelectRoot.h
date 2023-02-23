#pragma once

#include "il2cpp.h"

void App_ShopUnitSelectRoot__LoadPrefabAsync (const MethodInfo* method);
bool App_ShopUnitSelectRoot__IsLoadingPrefab (const MethodInfo* method);
void App_ShopUnitSelectRoot__UnloadPrefab (const MethodInfo* method);
App_ShopUnitSelectRoot_o* App_ShopUnitSelectRoot__CreateBind (App_ProcInst_o* super, App_Unit_o* defaultUnit, int32_t defaultScrollIndex, bool addingTransporter, App_ShopUnitSelectMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
void App_ShopUnitSelectRoot__Create (App_ShopUnitSelectRoot_o* __this, App_ProcInst_o* super, App_Unit_o* defaultUnit, int32_t defaultScrollIndex, bool addingTransporter, App_ShopUnitSelectMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
void App_ShopUnitSelectRoot__Destroy (App_ShopUnitSelectRoot_o* root, const MethodInfo* method);
void App_ShopUnitSelectRoot___ctor (App_ShopUnitSelectRoot_o* __this, const MethodInfo* method);
void App_ShopUnitSelectRoot__OnSelectMenuItem (App_ShopUnitSelectRoot_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_ShopUnitSelectRoot__OnDecideMenuItem (App_ShopUnitSelectRoot_o* __this, int32_t result, App_Unit_o* unit, int32_t scrollIndex, const MethodInfo* method);
void App_ShopUnitSelectRoot__OnHelp (App_ShopUnitSelectRoot_o* __this, App_ProcInst_o* parent, const MethodInfo* method);
