#pragma once

#include "il2cpp.h"

App_UnitItem_o* App_SortieUtil__GetUnitItem (App_Unit_o* unit, int32_t index, const MethodInfo* method);
bool App_SortieUtil__CanStoreItem (App_UnitItem_o* unitItem, const MethodInfo* method);
bool App_SortieUtil__StoreAllItem (App_Unit_o* unit, const MethodInfo* method);
void App_SortieUtil__ExpendItem (App_Unit_o* ownerUnit, int32_t ownerItemIndex, const MethodInfo* method);
App_Unit_o* App_SortieUtil__GetFirstUnit (const MethodInfo* method);
App_Unit_o* App_SortieUtil__GetLastUnit (const MethodInfo* method);
App_Unit_o* App_SortieUtil__GetPrevUnit (App_Unit_o* unit, const MethodInfo* method);
App_Unit_o* App_SortieUtil__GetNextUnit (App_Unit_o* unit, const MethodInfo* method);
App_Unit_o* App_SortieUtil__GetPrevUnitLoop (App_Unit_o* unit, const MethodInfo* method);
App_Unit_o* App_SortieUtil__GetNextUnitLoop (App_Unit_o* unit, const MethodInfo* method);
int32_t App_SortieUtil__GetUnitCount (const MethodInfo* method);
int32_t App_SortieUtil__GetSortieUnitCount (const MethodInfo* method);
int32_t App_SortieUtil__GetSortieUnitMax (const MethodInfo* method);
bool App_SortieUtil__IsPlayerUnitForRelay (App_Unit_o* unit, const MethodInfo* method);
void App_SortieUtil__RelocationUnitsBind (App_ProcInst_o* super, const MethodInfo* method);
bool App_SortieUtil__CanStartBattle (const MethodInfo* method);
bool App_SortieUtil__CanBackTo (const MethodInfo* method);
bool App_SortieUtil__IsUseLabelForNetworkBack (const MethodInfo* method);
bool App_SortieUtil__CannotStartBattleForRelay (const MethodInfo* method);
void App_SortieUtil__NotifyCannotStartBattleForRelay (App_ProcInst_o* super, const MethodInfo* method);
bool App_SortieUtil__CanTalk (const MethodInfo* method);
bool App_SortieUtil__CanTalk (App_Unit_o* unit, const MethodInfo* method);
bool App_SortieUtil__IsForbidStoring (App_UnitItem_o* unitItem, const MethodInfo* method);
void App_SortieUtil__SetCheckMark (UnityEngine_GameObject_o* check, App_Unit_o* unit, const MethodInfo* method);
void App_SortieUtil__SetUnitFace (UnityEngine_GameObject_o* face, App_Unit_o* unit, const MethodInfo* method);
void App_SortieUtil__SetSortieFaceColor (UnityEngine_GameObject_o* face, App_Unit_o* unit, const MethodInfo* method);
void App_SortieUtil__SetMapMenuFaceColor (UnityEngine_GameObject_o* face, App_Unit_o* unit, const MethodInfo* method);
void App_SortieUtil__SetGodIconColor (UnityEngine_GameObject_o* icon, bool bOn, const MethodInfo* method);
void App_SortieUtil___ctor (App_SortieUtil_o* __this, const MethodInfo* method);
