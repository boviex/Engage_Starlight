#pragma once

#include "il2cpp.h"

int32_t App_UnitAccessoryList__get_Count (App_UnitAccessoryList_o* __this, const MethodInfo* method);
App_UnitAccessory_o* App_UnitAccessoryList__get_Item (App_UnitAccessoryList_o* __this, int32_t i, const MethodInfo* method);
App_UnitAccessory_o* App_UnitAccessoryList__get_Item (App_UnitAccessoryList_o* __this, int32_t kind, const MethodInfo* method);
void App_UnitAccessoryList___ctor (App_UnitAccessoryList_o* __this, const MethodInfo* method);
void App_UnitAccessoryList__Clear (App_UnitAccessoryList_o* __this, const MethodInfo* method);
bool App_UnitAccessoryList__IsExist (App_UnitAccessoryList_o* __this, App_AccessoryData_o* accessory, const MethodInfo* method);
void App_UnitAccessoryList__Clear (App_UnitAccessoryList_o* __this, int32_t index, const MethodInfo* method);
void App_UnitAccessoryList__Clear (App_UnitAccessoryList_o* __this, int32_t kind, const MethodInfo* method);
bool App_UnitAccessoryList__Add (App_UnitAccessoryList_o* __this, App_AccessoryData_o* accessory, int32_t kind, const MethodInfo* method);
bool App_UnitAccessoryList__Add (App_UnitAccessoryList_o* __this, App_AccessoryData_o* accessory, int32_t index, const MethodInfo* method);
void App_UnitAccessoryList__CopyFrom (App_UnitAccessoryList_o* __this, App_UnitAccessoryList_o* list, const MethodInfo* method);
void App_UnitAccessoryList__Serialize (App_UnitAccessoryList_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_UnitAccessoryList__Deserialize (App_UnitAccessoryList_o* __this, App_Stream_o* stream, const MethodInfo* method);
