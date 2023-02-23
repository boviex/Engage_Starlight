#pragma once

#include "il2cpp.h"

App_Unit_o* App_ShopSellMenuItem__get_m_Unit (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__set_m_Unit (App_ShopSellMenuItem_o* __this, App_Unit_o* value, const MethodInfo* method);
int32_t App_ShopSellMenuItem__get_m_ItemIndex (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__set_m_ItemIndex (App_ShopSellMenuItem_o* __this, int32_t value, const MethodInfo* method);
App_UnitItem_o* App_ShopSellMenuItem__get_m_UnitItem (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__set_m_UnitItem (App_ShopSellMenuItem_o* __this, App_UnitItem_o* value, const MethodInfo* method);
bool App_ShopSellMenuItem__get_m_Decided (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__set_m_Decided (App_ShopSellMenuItem_o* __this, bool value, const MethodInfo* method);
int64_t App_ShopSellMenuItem__get_m_SortValue (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__set_m_SortValue (App_ShopSellMenuItem_o* __this, int64_t value, const MethodInfo* method);
void App_ShopSellMenuItem___ctor (App_ShopSellMenuItem_o* __this, App_Unit_o* unit, int32_t itemIndex, bool decided, App_ShopSellMenu_SelectEventHandler_o* selectEventHandler, App_ShopSellMenuItem_DecideItemEventHandler_o* decideItemEventHandler, App_ShopSellMenuItem_CancelItemEventHandler_o* cancelItemEventHandler, App_ShopSellMenu_DecideEventHandler_o* decideEventHandler, App_ShopSellMenu_ChangeUnitToPrevEventHandler_o* changeUnitToPrevEventHandler, App_ShopSellMenu_ChangeUnitToNextEventHandler_o* changeUnitToNextEventHandler, const MethodInfo* method);
int32_t App_ShopSellMenuItem__BuildAttribute (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__OnBuild (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__OnBuildMenuItemContent (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__SetInitialColor (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
bool App_ShopSellMenuItem__IsEffective (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__SetTextColor (App_ShopSellMenuItem_o* __this, UnityEngine_Color_o activeColor, UnityEngine_Color_o activeColor2, UnityEngine_Color_o inactiveColor, UnityEngine_Color_o inactiveColor2, const MethodInfo* method);
void App_ShopSellMenuItem__SetDecide (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__SetNotDecide (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__OnSelect (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__OnDeselect (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__OnCursorMoveEnd (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
void App_ShopSellMenuItem__SetDecideItemEventHandler (App_ShopSellMenuItem_o* __this, App_ShopSellMenuItem_DecideItemEventHandler_o* decideItemEventHandler, const MethodInfo* method);
void App_ShopSellMenuItem__SetCancelItemEventHandler (App_ShopSellMenuItem_o* __this, App_ShopSellMenuItem_CancelItemEventHandler_o* cancelItemEventHandler, const MethodInfo* method);
int32_t App_ShopSellMenuItem__ACall (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
int32_t App_ShopSellMenuItem__BCall (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
int32_t App_ShopSellMenuItem__CustomCall (App_ShopSellMenuItem_o* __this, const MethodInfo* method);
