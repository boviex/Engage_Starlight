#pragma once

#include "il2cpp.h"

App_RefineGodWeaponSelectManager_o* App_RefineGodWeaponSelectManager__Create (App_ProcInst_o* super, App_RefineGodWeaponRoot_o* root, App_GodUnit_o* initialGodUnit, App_ItemData_o* initialGodWeapon, int32_t initialScrollIndex, App_RefineGodWeaponSelectManager_ReturnEventHandler_o* returnEventHandler, const MethodInfo* method);
App_RefineGodWeaponSelectManager_o* App_RefineGodWeaponSelectManager__CreateForReset (App_ProcInst_o* super, App_RefineGodWeaponRoot_o* root, App_GodUnit_o* initialGodUnit, App_ItemData_o* initialGodWeapon, int32_t initialScrollIndex, App_RefineGodWeaponSelectManager_ReturnEventHandler_o* returnEventHandler, const MethodInfo* method);
void App_RefineGodWeaponSelectManager___ctor (App_RefineGodWeaponSelectManager_o* __this, App_ProcInst_o* super, App_RefineGodWeaponRoot_o* root, App_GodUnit_o* initialGodUnit, App_ItemData_o* initialGodWeapon, int32_t initialScrollIndex, App_RefineGodWeaponSelectManager_ReturnEventHandler_o* returnEventHandler, const MethodInfo* method);
void App_RefineGodWeaponSelectManager__OnSelect (App_RefineGodWeaponSelectManager_o* __this, App_GodUnit_o* godUnit, App_UnitItem_o* unitItem, const MethodInfo* method);
void App_RefineGodWeaponSelectManager__OnDecide (App_RefineGodWeaponSelectManager_o* __this, App_GodUnit_o* godUnit, App_UnitItem_o* godWeapon, const MethodInfo* method);
void App_RefineGodWeaponSelectManager__OnRequestClose (App_RefineGodWeaponSelectManager_o* __this, const MethodInfo* method);
