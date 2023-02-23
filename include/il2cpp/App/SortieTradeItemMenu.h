#pragma once

#include "il2cpp.h"

int32_t App_SortieTradeItemMenu__get_m_CommonIndex (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
void App_SortieTradeItemMenu__set_m_CommonIndex (App_SortieTradeItemMenu_o* __this, int32_t value, const MethodInfo* method);
App_SortieTradeItemMenu_o* App_SortieTradeItemMenu__Create (App_ProcInst_o* super, App_Unit_o* unit, App_Unit_o* recieverUnit, int32_t defaultSelect, App_SortieTradeItemMenuContent_o* menuContent, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_SortieTradeItemMenu__CreateMenuItemList (App_Unit_o* unit, App_Unit_o* recieverUnit, int32_t defaultSelect, const MethodInfo* method);
void App_SortieTradeItemMenu___ctor (App_SortieTradeItemMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_SortieTradeItemMenuContent_o* menuContent, const MethodInfo* method);
void App_SortieTradeItemMenu__RebuildMenu (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
System_String_o* App_SortieTradeItemMenu__GetName (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
void App_SortieTradeItemMenu__KeyUp (App_SortieTradeItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_SortieTradeItemMenu__KeyDown (App_SortieTradeItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_SortieTradeItemMenu__KeyLeft (App_SortieTradeItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_SortieTradeItemMenu__KeyRight (App_SortieTradeItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
App_Unit_o* App_SortieTradeItemMenu__GetUnit (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
void App_SortieTradeItemMenu__SetUnit (App_SortieTradeItemMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_SortieTradeItemMenu__SetRecieverUnit (App_SortieTradeItemMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
App_UnitItem_o* App_SortieTradeItemMenu__GetSelectItem (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
void App_SortieTradeItemMenu__ClearSelect (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
void App_SortieTradeItemMenu__SetSelect (App_SortieTradeItemMenu_o* __this, int32_t selectNo, const MethodInfo* method);
void App_SortieTradeItemMenu__SetFirstSelectAtSelectIndex (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
int32_t App_SortieTradeItemMenu__GetFirstSelect (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
int32_t App_SortieTradeItemMenu__GetSecondSelect (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
bool App_SortieTradeItemMenu__IsFirstSelect (App_SortieTradeItemMenu_o* __this, App_SortieTradeItemMenuItem_o* menuItem, const MethodInfo* method);
App_SortieTradeItemMenuItem_o* App_SortieTradeItemMenu__GetFirstSelectMenuItem (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
void App_SortieTradeItemMenu__ShowCursor (App_SortieTradeItemMenu_o* __this, bool isShow, const MethodInfo* method);
void App_SortieTradeItemMenu__SetInitialSelect (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
void App_SortieTradeItemMenu__MoveFrontCursorFrom (App_SortieTradeItemMenu_o* __this, App_BasicMenu_o* anotherMenu, const MethodInfo* method);
void App_SortieTradeItemMenu__SetSelectIndexAtFirstSelect (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
void App_SortieTradeItemMenu__SetSelectIndexEx (App_SortieTradeItemMenu_o* __this, int32_t commonIndex, const MethodInfo* method);
void App_SortieTradeItemMenu__SetSelectIndexForSecondSelect (App_SortieTradeItemMenu_o* __this, int32_t anotherIndex, const MethodInfo* method);
void App_SortieTradeItemMenu__EnableToSelectBlank (App_SortieTradeItemMenu_o* __this, bool enabled, const MethodInfo* method);
void App_SortieTradeItemMenu__SetSelectableBlankToDisable (App_SortieTradeItemMenu_o* __this, bool disabled, const MethodInfo* method);
bool App_SortieTradeItemMenu__IsEmpty (App_SortieTradeItemMenu_o* __this, const MethodInfo* method);
