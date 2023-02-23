#pragma once

#include "il2cpp.h"

void App_MapTarget_DataSet___ctor (App_MapTarget_DataSet_o* __this, int32_t capacity, const MethodInfo* method);
System_Collections_Generic_List_MapTarget_Data__o* App_MapTarget_DataSet__get_List (App_MapTarget_DataSet_o* __this, const MethodInfo* method);
int32_t App_MapTarget_DataSet__get_Count (App_MapTarget_DataSet_o* __this, const MethodInfo* method);
App_MapTarget_Data_o* App_MapTarget_DataSet__get_Item (App_MapTarget_DataSet_o* __this, int32_t i, const MethodInfo* method);
uint32_t App_MapTarget_DataSet__get_ItemMask (App_MapTarget_DataSet_o* __this, const MethodInfo* method);
void App_MapTarget_DataSet__set_ItemMask (App_MapTarget_DataSet_o* __this, uint32_t value, const MethodInfo* method);
int32_t App_MapTarget_DataSet__IndexOf (App_MapTarget_DataSet_o* __this, App_Unit_o* unit, const MethodInfo* method);
int32_t App_MapTarget_DataSet__IndexOf (App_MapTarget_DataSet_o* __this, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapTarget_DataSet__IsExist (App_MapTarget_DataSet_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_MapTarget_DataSet__IsExist (App_MapTarget_DataSet_o* __this, int32_t x, int32_t z, const MethodInfo* method);
App_MapTarget_Data_o* App_MapTarget_DataSet__NewData (App_MapTarget_DataSet_o* __this, const MethodInfo* method);
App_MapTarget_Data_o* App_MapTarget_DataSet__NewData (App_MapTarget_DataSet_o* __this, App_Unit_o* unit, int32_t x, int32_t z, uint32_t itemMask, int32_t selectItemIndex, const MethodInfo* method);
App_MapTarget_Data_o* App_MapTarget_DataSet__NewData (App_MapTarget_DataSet_o* __this, int32_t x, int32_t z, uint32_t itemMask, int32_t selectItemIndex, const MethodInfo* method);
void App_MapTarget_DataSet__Clear (App_MapTarget_DataSet_o* __this, const MethodInfo* method);
void App_MapTarget_DataSet__CopyFrom (App_MapTarget_DataSet_o* __this, App_MapTarget_DataSet_o* from, const MethodInfo* method);
void App_MapTarget_DataSet__Sort (App_MapTarget_DataSet_o* __this, const MethodInfo* method);
int32_t App_MapTarget_DataSet__GetDataItemCount (App_MapTarget_DataSet_o* __this, const MethodInfo* method);
