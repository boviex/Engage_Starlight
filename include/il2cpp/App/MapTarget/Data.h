#pragma once

#include "il2cpp.h"

App_MapTarget_Data_o* App_MapTarget_Data__Set (App_MapTarget_Data_o* __this, App_Unit_o* unit, uint32_t itemMask, int32_t selectItemIndex, const MethodInfo* method);
App_MapTarget_Data_o* App_MapTarget_Data__Set (App_MapTarget_Data_o* __this, App_Unit_o* unit, int32_t x, int32_t z, uint32_t itemMask, int32_t selectItemIndex, const MethodInfo* method);
App_MapTarget_Data_o* App_MapTarget_Data__Set (App_MapTarget_Data_o* __this, int32_t x, int32_t z, uint32_t itemMask, int32_t selectItemIndex, const MethodInfo* method);
App_MapTarget_Data_o* App_MapTarget_Data__SetRect (App_MapTarget_Data_o* __this, int32_t x1, int32_t z1, int32_t x2, int32_t z2, const MethodInfo* method);
int32_t App_MapTarget_Data__get_Index (App_MapTarget_Data_o* __this, const MethodInfo* method);
void App_MapTarget_Data__set_Index (App_MapTarget_Data_o* __this, int32_t value, const MethodInfo* method);
App_Unit_o* App_MapTarget_Data__get_Unit (App_MapTarget_Data_o* __this, const MethodInfo* method);
int32_t App_MapTarget_Data__get_X (App_MapTarget_Data_o* __this, const MethodInfo* method);
int32_t App_MapTarget_Data__get_Z (App_MapTarget_Data_o* __this, const MethodInfo* method);
int32_t App_MapTarget_Data__get_X1 (App_MapTarget_Data_o* __this, const MethodInfo* method);
int32_t App_MapTarget_Data__get_Z1 (App_MapTarget_Data_o* __this, const MethodInfo* method);
int32_t App_MapTarget_Data__get_X2 (App_MapTarget_Data_o* __this, const MethodInfo* method);
int32_t App_MapTarget_Data__get_Z2 (App_MapTarget_Data_o* __this, const MethodInfo* method);
uint32_t App_MapTarget_Data__get_ItemMask (App_MapTarget_Data_o* __this, const MethodInfo* method);
int32_t App_MapTarget_Data__get_SelectItemIndex (App_MapTarget_Data_o* __this, const MethodInfo* method);
void App_MapTarget_Data__set_SelectItemIndex (App_MapTarget_Data_o* __this, int32_t value, const MethodInfo* method);
bool App_MapTarget_Data__CheckItemMask (App_MapTarget_Data_o* __this, int32_t index, const MethodInfo* method);
bool App_MapTarget_Data__IsOutSide (App_MapTarget_Data_o* __this, int32_t x, int32_t z, const MethodInfo* method);
void App_MapTarget_Data__CopyFrom (App_MapTarget_Data_o* __this, App_MapTarget_Data_o* from, const MethodInfo* method);
System_String_o* App_MapTarget_Data__GetName (App_MapTarget_Data_o* __this, const MethodInfo* method);
void App_MapTarget_Data___ctor (App_MapTarget_Data_o* __this, const MethodInfo* method);
