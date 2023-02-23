#pragma once

#include "il2cpp.h"

App_Unit_o* App_RewindMenu__get_CurrentActorUnit (App_RewindMenu_o* __this, const MethodInfo* method);
void App_RewindMenu__set_CurrentActorUnit (App_RewindMenu_o* __this, App_Unit_o* value, const MethodInfo* method);
void App_RewindMenu___ctor (App_RewindMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_BasicMenuContent_o* menuContent, const MethodInfo* method);
System_String_o* App_RewindMenu__GetName (App_RewindMenu_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_RewindMenu__GetForcePlayerColor (App_RewindMenu_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_RewindMenu__GetForceEnemyColor (App_RewindMenu_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_RewindMenu__GetForceAllyColor (App_RewindMenu_o* __this, const MethodInfo* method);
void App_RewindMenu__AfterBuild (App_RewindMenu_o* __this, const MethodInfo* method);
void App_RewindMenu__OnClose (App_RewindMenu_o* __this, const MethodInfo* method);
int32_t App_RewindMenu__GetShowRowMax (App_RewindMenu_o* __this, const MethodInfo* method);
void App_RewindMenu__UpdateSelectAndScroll (App_RewindMenu_o* __this, const MethodInfo* method);
void App_RewindMenu__AdjustScrollIndex (App_RewindMenu_o* __this, const MethodInfo* method);
void App_RewindMenu__UpdateParts (App_RewindMenu_o* __this, int32_t currentForceType, int32_t turn, int32_t restUnitNum, const MethodInfo* method);
void App_RewindMenu__BrightOffCurrentActorUnit (App_RewindMenu_o* __this, const MethodInfo* method);
int32_t App_RewindMenu__BCall (App_RewindMenu_o* __this, const MethodInfo* method);
void App_RewindMenu__KeyUp (App_RewindMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_RewindMenu__KeyDown (App_RewindMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_RewindMenu__KeyLeft (App_RewindMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_RewindMenu__KeyRight (App_RewindMenu_o* __this, bool isTrigger, const MethodInfo* method);
App_RewindMenu_o* App_RewindMenu__CreateMenu (App_ProcInst_o* super, const MethodInfo* method);
