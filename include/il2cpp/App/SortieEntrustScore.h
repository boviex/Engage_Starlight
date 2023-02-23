#pragma once

#include "il2cpp.h"

uint32_t App_SortieEntrustScore__GetItemKindMask (App_SortieEntrustUnitData_o* unitData, const MethodInfo* method);
void App_SortieEntrustScore___ctor (App_SortieEntrustScore_o* __this, const MethodInfo* method);
void App_SortieEntrustScore__Initialize (App_SortieEntrustScore_o* __this, App_SortieEntrustStockData_o* stockData, const MethodInfo* method);
void App_SortieEntrustScore__Calc (App_SortieEntrustScore_o* __this, App_SortieEntrustUnitData_o* unitData, const MethodInfo* method);
void App_SortieEntrustScore__SelectHigh (App_SortieEntrustScore_o* __this, App_SortieEntrustScore_o* other, const MethodInfo* method);
App_SortieEntrustStockData_o* App_SortieEntrustScore__get_StockData (App_SortieEntrustScore_o* __this, const MethodInfo* method);
bool App_SortieEntrustScore__get_IsValidScore (App_SortieEntrustScore_o* __this, const MethodInfo* method);
int32_t App_SortieEntrustScore__get_Score (App_SortieEntrustScore_o* __this, const MethodInfo* method);
bool App_SortieEntrustScore__IsExclude (App_SortieEntrustScore_o* __this, App_SortieEntrustUnitData_o* unitData, const MethodInfo* method);
bool App_SortieEntrustScore__IsRangeNormal (App_ItemData_o* itemData, const MethodInfo* method);
bool App_SortieEntrustScore__IsRangeSpecial (App_ItemData_o* itemData, const MethodInfo* method);
bool App_SortieEntrustScore__IsRangeCovered (App_SortieEntrustUnitData_o* unitData, App_ItemData_o* stockItemData, const MethodInfo* method);
bool App_SortieEntrustScore__IsPersonalUse (App_ItemData_o* itemData, const MethodInfo* method);
