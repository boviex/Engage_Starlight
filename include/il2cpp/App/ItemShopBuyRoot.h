#pragma once

#include "il2cpp.h"

void App_ItemShopBuyRoot__LoadPrefabAsync (const MethodInfo* method);
bool App_ItemShopBuyRoot__IsLoadingPrefab (const MethodInfo* method);
void App_ItemShopBuyRoot__UnloadPrefab (const MethodInfo* method);
App_ItemShopBuyRoot_o* App_ItemShopBuyRoot__CreateBind (App_ProcInst_o* super, App_Unit_o* unit, bool existingOwner, App_ItemShopBuyRoot_ReturnEventHandler_o* returnEventHandler, const MethodInfo* method);
void App_ItemShopBuyRoot__Create (App_ItemShopBuyRoot_o* __this, App_ProcInst_o* super, App_Unit_o* unit, bool existingOwner, App_ItemShopBuyRoot_ReturnEventHandler_o* returnEventHandler, const MethodInfo* method);
void App_ItemShopBuyRoot__Destroy (App_ItemShopBuyRoot_o* root, const MethodInfo* method);
void App_ItemShopBuyRoot___ctor (App_ItemShopBuyRoot_o* __this, const MethodInfo* method);
void App_ItemShopBuyRoot__Start (App_ItemShopBuyRoot_o* __this, const MethodInfo* method);
void App_ItemShopBuyRoot__SetUnitImageActive (App_ItemShopBuyRoot_o* __this, bool isActive, const MethodInfo* method);
void App_ItemShopBuyRoot__UpdateItemDetail (App_ItemShopBuyRoot_o* __this, const MethodInfo* method);
void App_ItemShopBuyRoot__OnChangeUnitToPrev (App_ItemShopBuyRoot_o* __this, App_UnitItem_o* unitItem, const MethodInfo* method);
void App_ItemShopBuyRoot__OnChangeUnitToNext (App_ItemShopBuyRoot_o* __this, App_UnitItem_o* unitItem, const MethodInfo* method);
void App_ItemShopBuyRoot__OnSwitchDetailDisplayWay (App_ItemShopBuyRoot_o* __this, const MethodInfo* method);
void App_ItemShopBuyRoot__OnSelectMenuItem (App_ItemShopBuyRoot_o* __this, App_UnitItem_o* unitItem, const MethodInfo* method);
bool App_ItemShopBuyRoot__OnDecideMenuItem (App_ItemShopBuyRoot_o* __this, App_ItemData_o* itemData, const MethodInfo* method);
void App_ItemShopBuyRoot__OnYesToBuy (App_ItemShopBuyRoot_o* __this, const MethodInfo* method);
void App_ItemShopBuyRoot__OnDecideToSendItem (App_ItemShopBuyRoot_o* __this, bool isSelectingUnitItem, int32_t unitItemIndex, const MethodInfo* method);
void App_ItemShopBuyRoot__OnCancelToSendItem (App_ItemShopBuyRoot_o* __this, const MethodInfo* method);
void App_ItemShopBuyRoot__OnDecidelToDiscardItem (App_ItemShopBuyRoot_o* __this, bool transporterIsSelected, int32_t transporterItemIndex, const MethodInfo* method);
void App_ItemShopBuyRoot__OnCancelToDiscardItem (App_ItemShopBuyRoot_o* __this, const MethodInfo* method);
void App_ItemShopBuyRoot__OnBuy (App_ItemShopBuyRoot_o* __this, const MethodInfo* method);
void App_ItemShopBuyRoot__OnRequestClose (App_ItemShopBuyRoot_o* __this, const MethodInfo* method);
void App_ItemShopBuyRoot__Close (App_ItemShopBuyRoot_o* __this, const MethodInfo* method);
