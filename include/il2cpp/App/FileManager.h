#pragma once

#include "il2cpp.h"

void App_FileManager__Initialize (const MethodInfo* method);
void App_FileManager__BuildCRC32Table (const MethodInfo* method);
uint32_t App_FileManager__CalcCrc32 (System_Byte_array* buf, const MethodInfo* method);
void App_FileManager__Dump (const MethodInfo* method);
void App_FileManager__Update (const MethodInfo* method);
App_FileData_o* App_FileManager__DirectLoad (System_String_o* path, const MethodInfo* method);
void App_FileManager__ThreadFunc (const MethodInfo* method);
void App_FileManager___ctor (App_FileManager_o* __this, const MethodInfo* method);
void App_FileManager___cctor (const MethodInfo* method);
