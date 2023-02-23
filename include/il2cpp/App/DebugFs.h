#pragma once

#include "il2cpp.h"

bool App_DebugFs__IsExists (System_String_o* path, const MethodInfo* method);
bool App_DebugFs__IsFileExists (System_String_o* path, const MethodInfo* method);
bool App_DebugFs__IsDirectoryExists (System_String_o* path, const MethodInfo* method);
System_String_array* App_DebugFs__GetFsEntries (System_String_o* path, System_String_o* pattern, bool isRecursive, const MethodInfo* method);
System_String_array* App_DebugFs__GetFiles (System_String_o* path, System_String_o* pattern, bool isRecursive, const MethodInfo* method);
System_String_array* App_DebugFs__GetDirectories (System_String_o* path, System_String_o* pattern, bool isRecursive, const MethodInfo* method);
System_Byte_array* App_DebugFs__ReadFile (System_String_o* path, const MethodInfo* method);
bool App_DebugFs__WriteFile (System_String_o* path, System_Byte_array* bin, int32_t size, const MethodInfo* method);
bool App_DebugFs__DeleteFile (System_String_o* path, const MethodInfo* method);
bool App_DebugFs__CreateDirectory (System_String_o* path, const MethodInfo* method);
bool App_DebugFs__DeleteDirectory (System_String_o* path, const MethodInfo* method);
