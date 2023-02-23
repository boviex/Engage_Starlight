#pragma once

#include "il2cpp.h"

void App_NexKillBonus__OnCreate (App_NexKillBonus_o* __this, const MethodInfo* method);
bool App_NexKillBonus__Download (App_NexKillBonus_o* __this, App_ProcInst_o* super, System_String_o* cid, const MethodInfo* method);
bool App_NexKillBonus__Upload (App_NexKillBonus_o* __this, App_ProcInst_o* super, System_String_o* cid, App_MapKillBonus_CountImage_o* killCountImage, App_MapKillBonus_CountImage_o* killedCountImage, const MethodInfo* method);
void App_NexKillBonus__ClearSucceeded (App_NexKillBonus_o* __this, const MethodInfo* method);
System_Int32_array* App_NexKillBonus__get_Data (App_NexKillBonus_o* __this, const MethodInfo* method);
bool App_NexKillBonus__get_IsSucceeded (App_NexKillBonus_o* __this, const MethodInfo* method);
void App_NexKillBonus__SetData (App_NexKillBonus_o* __this, System_String_o* cid, System_Byte_array* data, const MethodInfo* method);
void App_NexKillBonus__CreateData (App_NexKillBonus_o* __this, App_MapKillBonus_CountImage_o* killCountImage, App_MapKillBonus_CountImage_o* killedCountImage, System_Byte_array** data, uint32_t* dataSize, const MethodInfo* method);
void App_NexKillBonus__AddCounts (App_NexKillBonus_o* __this, int32_t kind, App_MapKillBonus_CountImage_o* countImage, const MethodInfo* method);
int32_t App_NexKillBonus__get_Version (App_NexKillBonus_o* __this, const MethodInfo* method);
void App_NexKillBonus__Serialize (App_NexKillBonus_o* __this, System_Byte_array** data, uint32_t* dataSize, const MethodInfo* method);
void App_NexKillBonus__Deserialize (App_NexKillBonus_o* __this, System_Byte_array* data, const MethodInfo* method);
void App_NexKillBonus__ClearData (App_NexKillBonus_o* __this, const MethodInfo* method);
void App_NexKillBonus___ctor (App_NexKillBonus_o* __this, const MethodInfo* method);
