#pragma once

#include "il2cpp.h"

App_CommonRewardMenu_o* App_CommonRewardMenu__CreateBind (App_ProcInst_o* super, System_Collections_Generic_Dictionary_Unit__int__o* rewardExpList, System_Action_Unit__int__o* addLevelUpUnitList, const MethodInfo* method);
void App_CommonRewardMenu___ctor (App_CommonRewardMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_BasicMenuContent_o* menuContent, System_Action_Unit__int__o* addLevelUpUnitList, const MethodInfo* method);
System_String_o* App_CommonRewardMenu__GetName (App_CommonRewardMenu_o* __this, const MethodInfo* method);
void App_CommonRewardMenu__Tick (App_CommonRewardMenu_o* __this, const MethodInfo* method);
int32_t App_CommonRewardMenu__ACall (App_CommonRewardMenu_o* __this, const MethodInfo* method);
int32_t App_CommonRewardMenu__BCall (App_CommonRewardMenu_o* __this, const MethodInfo* method);
void App_CommonRewardMenu__MoveUp (App_CommonRewardMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_CommonRewardMenu__MoveDown (App_CommonRewardMenu_o* __this, bool isTrigger, const MethodInfo* method);
