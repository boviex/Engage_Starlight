#pragma once

#include "il2cpp.h"

void App_HelpManager__Add (App_HelpItemList_o* list, const MethodInfo* method);
void App_HelpManager__Remove (App_HelpItemList_o* list, const MethodInfo* method);
bool App_HelpManager__Setup (App_HelpManager_o* __this, bool isTempGod, App_GodUnit_o* tempGod, bool isTempRing, App_UnitRing_o* tempRing, bool isTempUnit, App_Unit_o* tempUnit, const MethodInfo* method);
void App_HelpManager__SetContents (App_HelpManager_o* __this, bool immediate, const MethodInfo* method);
bool App_HelpManager__Up (App_HelpManager_o* __this, bool isTrigger, const MethodInfo* method);
bool App_HelpManager__Down (App_HelpManager_o* __this, bool isTrigger, const MethodInfo* method);
bool App_HelpManager__Left (App_HelpManager_o* __this, bool isTrigger, const MethodInfo* method);
bool App_HelpManager__Right (App_HelpManager_o* __this, bool isTrigger, const MethodInfo* method);
float App_HelpManager__Dot (App_HelpManager_o* __this, UnityEngine_Vector2_o ab, UnityEngine_Vector2_o p, const MethodInfo* method);
bool App_HelpManager__SearchDestItem (App_HelpManager_o* __this, int32_t dirIdx, int32_t pairDirIdx, UnityEngine_Vector2_o curPos, UnityEngine_Vector2_o curA, UnityEngine_Vector2_o curB, UnityEngine_Vector2_o curAB, bool isMoveToNoTouchItem, bool isLoop, UnityEngine_Vector2_o loopLimit, const MethodInfo* method);
bool App_HelpManager__MoveImpl (App_HelpManager_o* __this, int32_t dir, bool isTrigger, const MethodInfo* method);
bool App_HelpManager__IsHelpValid (App_HelpManager_o* __this, App_HelpItemBase_o* hib, const MethodInfo* method);
int32_t App_HelpManager__StartItemPriority (App_HelpManager_o* __this, App_HelpItemBase_o* hib, const MethodInfo* method);
int32_t App_HelpManager__StartItemConstPriority (App_HelpManager_o* __this, App_HelpItemBase_o* hib, const MethodInfo* method);
void App_HelpManager___ctor (App_HelpManager_o* __this, const MethodInfo* method);
int32_t App_HelpManager___Setup_g__SortCompareX_12_7 (App_HelpManager_Item_o* a, App_HelpManager_Item_o* b, const MethodInfo* method);
