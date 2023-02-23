#pragma once

#include "il2cpp.h"

void App_FleaMarketBuyRoot__LoadPrefabAsync (const MethodInfo* method);
bool App_FleaMarketBuyRoot__IsLoadingPrefab (const MethodInfo* method);
void App_FleaMarketBuyRoot__UnloadPrefab (const MethodInfo* method);
App_FleaMarketBuyRoot_o* App_FleaMarketBuyRoot__CreateBind (App_ProcInst_o* super, App_Unit_o* unit, App_FleaMarketBuyRoot_ReturnEventHandler_o* returnEventHandler, bool isEnabledVoice, const MethodInfo* method);
void App_FleaMarketBuyRoot__Create (App_FleaMarketBuyRoot_o* __this, App_ProcInst_o* super, App_Unit_o* unit, App_FleaMarketBuyRoot_ReturnEventHandler_o* returnEventHandler, bool isEnabledVoice, const MethodInfo* method);
void App_FleaMarketBuyRoot__Destroy (App_FleaMarketBuyRoot_o* root, const MethodInfo* method);
void App_FleaMarketBuyRoot___ctor (App_FleaMarketBuyRoot_o* __this, const MethodInfo* method);
void App_FleaMarketBuyRoot__OnSelectMenuItem (App_FleaMarketBuyRoot_o* __this, App_UnitItem_o* unitItem, const MethodInfo* method);
bool App_FleaMarketBuyRoot__OnDecideMenuItem (App_FleaMarketBuyRoot_o* __this, App_ItemData_o* itemData, const MethodInfo* method);
void App_FleaMarketBuyRoot__OnYesToBuy (App_FleaMarketBuyRoot_o* __this, const MethodInfo* method);
void App_FleaMarketBuyRoot__OnDecideToSendItem (App_FleaMarketBuyRoot_o* __this, bool isSelectingUnitItem, int32_t unitItemIndex, const MethodInfo* method);
void App_FleaMarketBuyRoot__OnCancelToSendItem (App_FleaMarketBuyRoot_o* __this, const MethodInfo* method);
void App_FleaMarketBuyRoot__OnDecidelToDiscardItem (App_FleaMarketBuyRoot_o* __this, bool transporterIsSelected, int32_t transporterItemIndex, const MethodInfo* method);
void App_FleaMarketBuyRoot__OnCancelToDiscardItem (App_FleaMarketBuyRoot_o* __this, const MethodInfo* method);
void App_FleaMarketBuyRoot__OnBuy (App_FleaMarketBuyRoot_o* __this, const MethodInfo* method);
void App_FleaMarketBuyRoot__OnRequestClose (App_FleaMarketBuyRoot_o* __this, const MethodInfo* method);
void App_FleaMarketBuyRoot__Close (App_FleaMarketBuyRoot_o* __this, const MethodInfo* method);
