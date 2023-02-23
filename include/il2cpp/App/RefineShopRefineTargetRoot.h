#pragma once

#include "il2cpp.h"

void App_RefineShopRefineTargetRoot__LoadPrefabAsync (const MethodInfo* method);
bool App_RefineShopRefineTargetRoot__IsLoadingPrefab (const MethodInfo* method);
void App_RefineShopRefineTargetRoot__UnloadPrefab (const MethodInfo* method);
App_RefineShopRefineTargetRoot_o* App_RefineShopRefineTargetRoot__CreateBind (App_ProcInst_o* super, App_ShopWeaponModelRenderer_o* shopWeaponModelRenderer, App_Unit_o* unit, int32_t itemIndex, App_RefineShopRefineTargetRoot_ReturnEventHandler_o* returnEventHandler, const MethodInfo* method);
void App_RefineShopRefineTargetRoot__Create (App_RefineShopRefineTargetRoot_o* __this, App_ProcInst_o* super, App_ShopWeaponModelRenderer_o* shopWeaponModelRenderer, App_Unit_o* unit, int32_t itemIndex, App_RefineShopRefineTargetRoot_ReturnEventHandler_o* returnEventHandler, const MethodInfo* method);
void App_RefineShopRefineTargetRoot__Destroy (App_RefineShopRefineTargetRoot_o* root, const MethodInfo* method);
void App_RefineShopRefineTargetRoot__UpdateItemDetail (App_RefineShopRefineTargetRoot_o* __this, App_RefineItemDetailWindow_o* itemDetailWindow, App_UnitItem_o* unitItemBase, bool revealed, const MethodInfo* method);
void App_RefineShopRefineTargetRoot__UpdateItemDetail (App_RefineShopRefineTargetRoot_o* __this, App_RefineItemDetailWindow_o* itemDetailWindow, App_UnitItem_o* unitItemBase, App_UnitItem_o* unitItemTarget, bool revealed, const MethodInfo* method);
void App_RefineShopRefineTargetRoot__OnSelectMenuItem (App_RefineShopRefineTargetRoot_o* __this, App_UnitItem_o* unitItem, bool revealed, const MethodInfo* method);
void App_RefineShopRefineTargetRoot__OnDecideMenuItemToRefine (App_RefineShopRefineTargetRoot_o* __this, int32_t refineLevel, App_UnitItem_o* refinedUnitItem, int32_t ironNum, int32_t steelNum, int32_t silverNum, int32_t price, const MethodInfo* method);
void App_RefineShopRefineTargetRoot__OnRefine (App_RefineShopRefineTargetRoot_o* __this, const MethodInfo* method);
void App_RefineShopRefineTargetRoot__OnDecideMenuItemToEvolve (App_RefineShopRefineTargetRoot_o* __this, App_UnitItem_o* evolvedUnitItem, int32_t evolveIndex, const MethodInfo* method);
void App_RefineShopRefineTargetRoot__OnEvolve (App_RefineShopRefineTargetRoot_o* __this, const MethodInfo* method);
void App_RefineShopRefineTargetRoot__OnRequestCloseMenu (App_RefineShopRefineTargetRoot_o* __this, const MethodInfo* method);
void App_RefineShopRefineTargetRoot__Close (App_RefineShopRefineTargetRoot_o* __this, const MethodInfo* method);
void App_RefineShopRefineTargetRoot___ctor (App_RefineShopRefineTargetRoot_o* __this, const MethodInfo* method);
