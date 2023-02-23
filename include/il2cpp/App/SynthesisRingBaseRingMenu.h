#pragma once

#include "il2cpp.h"

System_Collections_Generic_List_GodUnit__o* App_SynthesisRingBaseRingMenu__get_m_GodUnitList (App_SynthesisRingBaseRingMenu_o* __this, const MethodInfo* method);
void App_SynthesisRingBaseRingMenu__set_m_GodUnitList (App_SynthesisRingBaseRingMenu_o* __this, System_Collections_Generic_List_GodUnit__o* value, const MethodInfo* method);
int32_t App_SynthesisRingBaseRingMenu__get_m_GodUnitIndex (App_SynthesisRingBaseRingMenu_o* __this, const MethodInfo* method);
void App_SynthesisRingBaseRingMenu__set_m_GodUnitIndex (App_SynthesisRingBaseRingMenu_o* __this, int32_t value, const MethodInfo* method);
App_GodUnit_o* App_SynthesisRingBaseRingMenu__get_m_GodUnit (App_SynthesisRingBaseRingMenu_o* __this, const MethodInfo* method);
void App_SynthesisRingBaseRingMenu__set_m_GodUnit (App_SynthesisRingBaseRingMenu_o* __this, App_GodUnit_o* value, const MethodInfo* method);
App_SynthesisRingBaseRingMenu_o* App_SynthesisRingBaseRingMenu__CreateBind (App_ProcInst_o* super, UnityEngine_GameObject_o* menuObject, int32_t initialGodUnitIndex, App_BasicMenuSelect_o* initialMenuSelect, App_RingMenuItem_SelectEventHandler_o* selectEventHandler, App_RingMenuItem_DecideEventHandler_o* decideEventHandler, App_SynthesisRingBaseRingMenu_CloseEventHandler_o* requestCloseEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_SynthesisRingBaseRingMenu__CreateMenuItemList (System_String_o* gid, App_RingMenuItem_SelectEventHandler_o* selectEventHandler, App_RingMenuItem_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
void App_SynthesisRingBaseRingMenu___ctor (App_SynthesisRingBaseRingMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_SynthesisRingBaseRingMenuContent_o* menuContent, System_Collections_Generic_List_GodUnit__o* godUnitList, int32_t initialGodUnitIndex, App_RingMenuItem_SelectEventHandler_o* selectEventHandler, App_RingMenuItem_DecideEventHandler_o* decideEventHandler, App_SynthesisRingBaseRingMenu_CloseEventHandler_o* requestCloseEventHandler, const MethodInfo* method);
void App_SynthesisRingBaseRingMenu__RebuildMenu (App_SynthesisRingBaseRingMenu_o* __this, const MethodInfo* method);
void App_SynthesisRingBaseRingMenu__RebuildMenuItem (App_SynthesisRingBaseRingMenu_o* __this, const MethodInfo* method);
System_String_o* App_SynthesisRingBaseRingMenu__GetName (App_SynthesisRingBaseRingMenu_o* __this, const MethodInfo* method);
void App_SynthesisRingBaseRingMenu__EnableMenu (App_SynthesisRingBaseRingMenu_o* __this, const MethodInfo* method);
void App_SynthesisRingBaseRingMenu__DisableMenu (App_SynthesisRingBaseRingMenu_o* __this, const MethodInfo* method);
App_BasicMenuSelect_o* App_SynthesisRingBaseRingMenu__GetSelect (App_SynthesisRingBaseRingMenu_o* __this, const MethodInfo* method);
void App_SynthesisRingBaseRingMenu__KeyLeft (App_SynthesisRingBaseRingMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_SynthesisRingBaseRingMenu__KeyRight (App_SynthesisRingBaseRingMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_SynthesisRingBaseRingMenu__BCall (App_SynthesisRingBaseRingMenu_o* __this, const MethodInfo* method);
