#pragma once

#include "il2cpp.h"

int32_t App_MapLayer__get_Count (App_MapLayer_o* __this, const MethodInfo* method);
App_MapLayer_Data_o* App_MapLayer__get_Item (App_MapLayer_o* __this, int32_t i, const MethodInfo* method);
void App_MapLayer__Clear (App_MapLayer_o* __this, const MethodInfo* method);
void App_MapLayer__Add (App_MapLayer_o* __this, App_MapLayer_Data_o* data, const MethodInfo* method);
void App_MapLayer__Add (App_MapLayer_o* __this, int32_t x, int32_t z, int32_t w, int32_t h, int32_t group, System_String_o* tid, bool enable, const MethodInfo* method);
void App_MapLayer__SetEnable (App_MapLayer_o* __this, int32_t x, int32_t z, bool enable, const MethodInfo* method);
void App_MapLayer__SetEnable (App_MapLayer_o* __this, int32_t group, bool enable, const MethodInfo* method);
App_MapLayer_Data_o* App_MapLayer__Find (App_MapLayer_o* __this, int32_t x, int32_t z, const MethodInfo* method);
int32_t App_MapLayer__get_Version (App_MapLayer_o* __this, const MethodInfo* method);
void App_MapLayer__OnSerialize (App_MapLayer_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapLayer__OnDeserialize (App_MapLayer_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_MapLayer___ctor (App_MapLayer_o* __this, const MethodInfo* method);
