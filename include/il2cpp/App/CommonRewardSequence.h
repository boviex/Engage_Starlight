#pragma once

#include "il2cpp.h"

void App_CommonRewardSequence__CreateBind (App_ProcInst_o* super, System_Collections_Generic_Dictionary_Unit__int__o* rewardExpList, System_Collections_Generic_List_ItemData__o* rewardList, int32_t rewardMoney, bool isCreateBg, const MethodInfo* method);
void App_CommonRewardSequence__CreateBindClear (App_ProcInst_o* super, System_Collections_Generic_List_ItemData__o* rewardList, const MethodInfo* method);
void App_CommonRewardSequence__CreateBindForWell (App_ProcInst_o* super, System_Collections_Generic_List_ItemData__o* rewardList, System_String_o* title, const MethodInfo* method);
void App_CommonRewardSequence___ctor (App_CommonRewardSequence_o* __this, System_Collections_Generic_Dictionary_Unit__int__o* rewardExpList, System_Collections_Generic_List_ItemData__o* rewardItemList, int32_t rewardMoney, bool isCreateBg, bool isClear, const MethodInfo* method);
App_ProcDesc_array* App_CommonRewardSequence__CreateDesc (App_CommonRewardSequence_o* __this, const MethodInfo* method);
App_ProcDesc_array* App_CommonRewardSequence__CreateDescForWell (App_CommonRewardSequence_o* __this, const MethodInfo* method);
void App_CommonRewardSequence__LoadRes (App_CommonRewardSequence_o* __this, const MethodInfo* method);
bool App_CommonRewardSequence__IsLoadingRes (App_CommonRewardSequence_o* __this, const MethodInfo* method);
void App_CommonRewardSequence__OpenRewardExp (App_CommonRewardSequence_o* __this, const MethodInfo* method);
void App_CommonRewardSequence__CheckLevelUp (App_CommonRewardSequence_o* __this, const MethodInfo* method);
App_ProcInst_o* App_CommonRewardSequence__TryCreateBindDiscardMessage (App_ProcInst_o* super, bool discard, const MethodInfo* method);
System_Collections_Generic_Dictionary_ItemData__int__o* App_CommonRewardSequence__CalcRewardItemList (System_Collections_Generic_List_ItemData__o* itemList, int32_t* money, bool* discard, const MethodInfo* method);
System_Collections_Generic_Dictionary_ItemData__int__o* App_CommonRewardSequence__CalcRewardItemList (App_CommonRewardSequence_o* __this, const MethodInfo* method);
void App_CommonRewardSequence__OpenRewardItem (App_CommonRewardSequence_o* __this, const MethodInfo* method);
void App_CommonRewardSequence__OpenRewardItemForWell (App_CommonRewardSequence_o* __this, const MethodInfo* method);
void App_CommonRewardSequence__Close (App_CommonRewardSequence_o* __this, const MethodInfo* method);
void App_CommonRewardSequence__CheckItemOverflow (App_CommonRewardSequence_o* __this, const MethodInfo* method);
bool App_CommonRewardSequence___CreateDesc_b__14_0 (App_CommonRewardSequence_o* __this, const MethodInfo* method);
bool App_CommonRewardSequence___CreateDesc_b__14_1 (App_CommonRewardSequence_o* __this, const MethodInfo* method);
void App_CommonRewardSequence___OpenRewardExp_b__18_0 (App_CommonRewardSequence_o* __this, App_Unit_o* unit, int32_t levelOld, const MethodInfo* method);
