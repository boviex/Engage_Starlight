#pragma once

#include "il2cpp.h"

void App_DebugHost__Setup (System_String_o* root, const MethodInfo* method);
void App_DebugHost__Cleanup (const MethodInfo* method);
bool App_DebugHost__HasEnv (System_String_o* name, const MethodInfo* method);
System_String_o* App_DebugHost__GetEnv (System_String_o* name, const MethodInfo* method);
System_String_o* App_DebugHost__GetUserName (const MethodInfo* method);
bool App_DebugHost__get_IsConnected (const MethodInfo* method);
System_String_o* App_DebugHost__get_Root (const MethodInfo* method);
bool App_DebugHost__WriteToHost (System_String_o* path, System_String_o* text, const MethodInfo* method);
bool App_DebugHost__WriteToHost (System_String_o* path, System_Byte_array* data, const MethodInfo* method);
bool App_DebugHost__WriteToSdCard (System_String_o* path, System_String_o* text, const MethodInfo* method);
bool App_DebugHost__WriteToSdCard (System_String_o* path, System_Byte_array* data, const MethodInfo* method);
bool App_DebugHost__Exists (System_String_o* path, const MethodInfo* method);
System_Byte_array* App_DebugHost__Load (System_String_o* path, const MethodInfo* method);
