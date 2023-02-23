#pragma once

#include "il2cpp.h"

UnityEngine_GameObject_o* App_RingListSkillMenu__get_RootObject (App_RingListSkillMenu_o* __this, const MethodInfo* method);
App_RingListSkillMenu_ItemHelpWindow_o* App_RingListSkillMenu__get_ItemHelpWdw (App_RingListSkillMenu_o* __this, const MethodInfo* method);
void App_RingListSkillMenu__set_ItemHelpWdw (App_RingListSkillMenu_o* __this, App_RingListSkillMenu_ItemHelpWindow_o* value, const MethodInfo* method);
App_RingListSkillMenu_SkillHelpWindow_o* App_RingListSkillMenu__get_SkillHelpWdw (App_RingListSkillMenu_o* __this, const MethodInfo* method);
void App_RingListSkillMenu__set_SkillHelpWdw (App_RingListSkillMenu_o* __this, App_RingListSkillMenu_SkillHelpWindow_o* value, const MethodInfo* method);
bool App_RingListSkillMenu__get_IsEnableGotIcon (App_RingListSkillMenu_o* __this, const MethodInfo* method);
void App_RingListSkillMenu__set_IsEnableGotIcon (App_RingListSkillMenu_o* __this, bool value, const MethodInfo* method);
bool App_RingListSkillMenu__get_IsEnableUnitGotIcon (App_RingListSkillMenu_o* __this, const MethodInfo* method);
void App_RingListSkillMenu__set_IsEnableUnitGotIcon (App_RingListSkillMenu_o* __this, bool value, const MethodInfo* method);
int32_t App_RingListSkillMenu__get_FromLv (App_RingListSkillMenu_o* __this, const MethodInfo* method);
void App_RingListSkillMenu__set_FromLv (App_RingListSkillMenu_o* __this, int32_t value, const MethodInfo* method);
App_RingListSkillMenu_Menu_o* App_RingListSkillMenu__GetMenu (App_RingListSkillMenu_o* __this, const MethodInfo* method);
void App_RingListSkillMenu___ctor (App_RingListSkillMenu_o* __this, UnityEngine_GameObject_o* rootObject, const MethodInfo* method);
void App_RingListSkillMenu__CreateGodGrowthMenuItem (App_GodData_o* godData, App_RingListSkillMenu_o* root, int32_t fromLv, int32_t toLv, int32_t maxBondLevel, System_Collections_Generic_List_BasicMenuItem__o** outList, bool isRingSelectMenu, const MethodInfo* method);
bool App_RingListSkillMenu__CreateMenu (App_RingListSkillMenu_o* __this, App_ProcInst_o* super, bool isBindParent, bool isEnableGotIcon, bool isEnableUnitGotIcon, App_RingListSequence_GodPageData_o* godPageData, int32_t fromLv, App_RingListSkillMenu_CancelEventHandler_o* cancel, bool isRingSelectMenu, const MethodInfo* method);
void App_RingListSkillMenu__Delete (App_RingListSkillMenu_o* __this, const MethodInfo* method);
void App_RingListSkillMenu__IncSuspend (App_RingListSkillMenu_o* __this, const MethodInfo* method);
void App_RingListSkillMenu__DecSuspend (App_RingListSkillMenu_o* __this, const MethodInfo* method);
