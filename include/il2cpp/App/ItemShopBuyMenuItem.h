#pragma once

#include "il2cpp.h"

App_ItemData_o* App_ItemShopBuyMenuItem__get_m_ItemData (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_ItemShopBuyMenuItem__set_m_ItemData (App_ItemShopBuyMenuItem_o* __this, App_ItemData_o* value, const MethodInfo* method);
App_UnitItem_o* App_ItemShopBuyMenuItem__get_m_UnitItem (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_ItemShopBuyMenuItem__set_m_UnitItem (App_ItemShopBuyMenuItem_o* __this, App_UnitItem_o* value, const MethodInfo* method);
int32_t App_ItemShopBuyMenuItem__get_m_StockNum (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_ItemShopBuyMenuItem__set_m_StockNum (App_ItemShopBuyMenuItem_o* __this, int32_t value, const MethodInfo* method);
bool App_ItemShopBuyMenuItem__get_m_NewArrival (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_ItemShopBuyMenuItem__set_m_NewArrival (App_ItemShopBuyMenuItem_o* __this, bool value, const MethodInfo* method);
void App_ItemShopBuyMenuItem___ctor (App_ItemShopBuyMenuItem_o* __this, App_ShopContent_o* shopContent, App_Unit_o* unit, App_ItemShopBuyMenu_SelectEventHandler_o* selectEventHandler, App_ItemShopBuyMenu_DecideEventHandler_o* decideEventHandler, App_ItemShopBuyMenu_ChangeUnitToPrevEventHandler_o* changeUnitToPrevEventHandler, App_ItemShopBuyMenu_ChangeUnitToNextEventHandler_o* changeUnitToNextEventHandler, bool forFleaMarket, const MethodInfo* method);
System_String_o* App_ItemShopBuyMenuItem__GetName (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
int32_t App_ItemShopBuyMenuItem__BuildAttribute (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_ItemShopBuyMenuItem__OnBuild (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_ItemShopBuyMenuItem__OnBuildMenuItemContent (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_ItemShopBuyMenuItem__SetInitialColor (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
bool App_ItemShopBuyMenuItem__IsEffective (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_ItemShopBuyMenuItem__SetTextColor (App_ItemShopBuyMenuItem_o* __this, UnityEngine_Color_o activeColor1, UnityEngine_Color_o activeColor2, UnityEngine_Color_o inactiveColor1, UnityEngine_Color_o inactiveColor2, const MethodInfo* method);
void App_ItemShopBuyMenuItem__OnSelect (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_ItemShopBuyMenuItem__OnDeselect (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_ItemShopBuyMenuItem__OnCursorMoveEnd (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
int32_t App_ItemShopBuyMenuItem__ACall (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_ItemShopBuyMenuItem__OnDoneToBuy (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
int32_t App_ItemShopBuyMenuItem__CustomCall (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
int32_t App_ItemShopBuyMenuItem__GetUnitItemEmptyCount (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
bool App_ItemShopBuyMenuItem__IsEnoughMoneyToBeBuyed (App_ItemShopBuyMenuItem_o* __this, const MethodInfo* method);
