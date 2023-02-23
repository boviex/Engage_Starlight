#pragma once

#include "il2cpp.h"

App_ItemData_o* App_WeaponShopBuyMenuItem__get_m_ItemData (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenuItem__set_m_ItemData (App_WeaponShopBuyMenuItem_o* __this, App_ItemData_o* value, const MethodInfo* method);
App_UnitItem_o* App_WeaponShopBuyMenuItem__get_m_UnitItem (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenuItem__set_m_UnitItem (App_WeaponShopBuyMenuItem_o* __this, App_UnitItem_o* value, const MethodInfo* method);
int32_t App_WeaponShopBuyMenuItem__get_m_StockNum (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenuItem__set_m_StockNum (App_WeaponShopBuyMenuItem_o* __this, int32_t value, const MethodInfo* method);
bool App_WeaponShopBuyMenuItem__get_m_NewArrival (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenuItem__set_m_NewArrival (App_WeaponShopBuyMenuItem_o* __this, bool value, const MethodInfo* method);
void App_WeaponShopBuyMenuItem___ctor (App_WeaponShopBuyMenuItem_o* __this, App_ShopContent_o* shopContent, App_Unit_o* unit, App_WeaponShopBuyMenu_SelectEventHandler_o* selectEventHandler, App_WeaponShopBuyMenu_DecideEventHandler_o* decideEventHandler, App_WeaponShopBuyMenu_ChangeUnitToPrevEventHandler_o* changeUnitToPrevEventHandler, App_WeaponShopBuyMenu_ChangeUnitToNextEventHandler_o* changeUnitToNextEventHandler, const MethodInfo* method);
System_String_o* App_WeaponShopBuyMenuItem__GetName (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
int32_t App_WeaponShopBuyMenuItem__BuildAttribute (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenuItem__OnBuild (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenuItem__OnBuildMenuItemContent (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenuItem__SetInitialColor (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
bool App_WeaponShopBuyMenuItem__IsEffective (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenuItem__SetTextColor (App_WeaponShopBuyMenuItem_o* __this, UnityEngine_Color_o activeColor1, UnityEngine_Color_o activeColor2, UnityEngine_Color_o inactiveColor1, UnityEngine_Color_o inactiveColor2, const MethodInfo* method);
void App_WeaponShopBuyMenuItem__OnSelect (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenuItem__OnDeselect (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenuItem__OnCursorMoveEnd (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
int32_t App_WeaponShopBuyMenuItem__ACall (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenuItem__OnDoneToBuy (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
int32_t App_WeaponShopBuyMenuItem__CustomCall (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
int32_t App_WeaponShopBuyMenuItem__GetUnitItemEmptyCount (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
bool App_WeaponShopBuyMenuItem__IsEnoughMoneyToBeBuyed (App_WeaponShopBuyMenuItem_o* __this, const MethodInfo* method);
