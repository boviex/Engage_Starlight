#pragma once

#include "il2cpp.h"

App_ExchangeYesNoDialog_o* App_ShopBuyYesNoDialog__CreateBind (App_ProcInst_o* super, App_ItemData_o* itemData, int32_t num, App_ShopBuyYesNoDialog_YesEventHandler_o* yesEventHandler, const MethodInfo* method);
App_ExchangeYesNoDialog_o* App_ShopBuyYesNoDialog__CreateBind (App_ProcInst_o* super, App_ItemData_o* itemData, int32_t num, bool enabledPriceDown, App_ShopBuyYesNoDialog_YesEventHandler_o* yesEventHandler, const MethodInfo* method);
App_ExchangeYesNoDialog_o* App_ShopBuyYesNoDialog__CreateBind (App_ProcInst_o* super, App_AccessoryData_o* accessoryData, App_ShopBuyYesNoDialog_YesEventHandler_o* yesEventHandler, const MethodInfo* method);
App_ExchangeYesNoDialog_o* App_ShopBuyYesNoDialog__CreateBind (App_ProcInst_o* super, App_UnitItem_o* baseUnitItem, App_UnitItem_o* refinedUnitItem, int32_t ironNum, int32_t steelNum, int32_t silverNum, int32_t price, App_ShopBuyYesNoDialog_YesEventHandler_o* yesEventHandler, const MethodInfo* method);
App_ExchangeYesNoDialog_o* App_ShopBuyYesNoDialog__CreateBind (App_ProcInst_o* super, App_UnitItem_o* baseUnitItem, App_UnitItem_o* evolvedUnitItem, App_ItemEvolveData_o* itemEvolveData, App_ShopBuyYesNoDialog_YesEventHandler_o* yesEventHandler, const MethodInfo* method);
App_ExchangeYesNoDialog_o* App_ShopBuyYesNoDialog__CreateBind (App_ProcInst_o* super, App_SkillData_o* skillData, int32_t cost, App_ShopBuyYesNoDialog_YesEventHandler_o* yesEventHandler, const MethodInfo* method);
void App_ShopBuyYesNoDialog___ctor (App_ShopBuyYesNoDialog_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_BasicDialogContent_o* menuContent, const MethodInfo* method);
void App_ShopBuyYesNoDialog__OnClose (App_ShopBuyYesNoDialog_o* __this, const MethodInfo* method);
