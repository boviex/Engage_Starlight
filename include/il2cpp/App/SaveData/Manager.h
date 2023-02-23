#pragma once

#include "il2cpp.h"

void App_SaveData_Manager___ctor (App_SaveData_Manager_o* __this, const MethodInfo* method);
void App_SaveData_Manager__Finalize (App_SaveData_Manager_o* __this, const MethodInfo* method);
void App_SaveData_Manager__Cleanup (App_SaveData_Manager_o* __this, const MethodInfo* method);
void App_SaveData_Manager__RegisterTask (App_SaveData_Manager_o* __this, App_SaveData_Manager_Task_o* task, const MethodInfo* method);
nn_Result_o App_SaveData_Manager__Read (App_SaveData_Manager_o* __this, int64_t* readSize, System_String_o* path, int64_t offset, System_Byte_array* data, int64_t size, const MethodInfo* method);
nn_Result_o App_SaveData_Manager__Write (App_SaveData_Manager_o* __this, System_String_o* path, int64_t offset, System_Byte_array* data, int64_t size, bool isEnableResize, const MethodInfo* method);
nn_Result_o App_SaveData_Manager__Delete (App_SaveData_Manager_o* __this, System_String_o* path, const MethodInfo* method);
void App_SaveData_Manager__Commit (App_SaveData_Manager_o* __this, System_String_o* mountName, const MethodInfo* method);
bool App_SaveData_Manager__IsExist (App_SaveData_Manager_o* __this, System_String_o* path, const MethodInfo* method);
int64_t App_SaveData_Manager__GetFileSize (App_SaveData_Manager_o* __this, System_String_o* path, const MethodInfo* method);
void App_SaveData_Manager__Dump (App_SaveData_Manager_o* __this, System_String_o* rootPath, const MethodInfo* method);
void App_SaveData_Manager__ThreadFunc (App_SaveData_Manager_o* __this, const MethodInfo* method);
void App_SaveData_Manager__Read (App_SaveData_Manager_o* __this, App_SaveData_Manager_Task_o* task, const MethodInfo* method);
void App_SaveData_Manager__Write (App_SaveData_Manager_o* __this, App_SaveData_Manager_Task_o* task, const MethodInfo* method);
void App_SaveData_Manager__Delete (App_SaveData_Manager_o* __this, App_SaveData_Manager_Task_o* task, const MethodInfo* method);
void App_SaveData_Manager__Commit (App_SaveData_Manager_o* __this, App_SaveData_Manager_Task_o* task, const MethodInfo* method);
nn_Result_o App_SaveData_Manager__ReadNX (App_SaveData_Manager_o* __this, int64_t* readSize, System_String_o* path, int64_t offset, System_Byte_array* data, int64_t size, const MethodInfo* method);
nn_Result_o App_SaveData_Manager__WriteNX (App_SaveData_Manager_o* __this, System_String_o* path, int64_t offset, System_Byte_array* data, int64_t size, bool isEnableResize, const MethodInfo* method);
nn_Result_o App_SaveData_Manager__DeleteNX (App_SaveData_Manager_o* __this, System_String_o* path, const MethodInfo* method);
void App_SaveData_Manager__CommitNX (App_SaveData_Manager_o* __this, System_String_o* mountName, const MethodInfo* method);
bool App_SaveData_Manager__IsExistNX (App_SaveData_Manager_o* __this, System_String_o* path, const MethodInfo* method);
int64_t App_SaveData_Manager__GetFileSizeNX (App_SaveData_Manager_o* __this, System_String_o* path, const MethodInfo* method);
nn_Result_o App_SaveData_Manager__CreateFileNX (App_SaveData_Manager_o* __this, System_String_o* path, int64_t size, const MethodInfo* method);
void App_SaveData_Manager__DumpNX (App_SaveData_Manager_o* __this, System_String_o* rootPath, const MethodInfo* method);
void App_SaveData_Manager__DumpSingleDirectoryNX (App_SaveData_Manager_o* __this, System_Text_StringBuilder_o* sb, int32_t indentCount, System_String_o* parentPath, System_String_o* dirName, const MethodInfo* method);
System_String_o* App_SaveData_Manager__Backslash2Slash (App_SaveData_Manager_o* __this, System_String_o* path, const MethodInfo* method);
System_Threading_EventWaitHandle_o* App_SaveData_Manager__get_CleanupEvent (App_SaveData_Manager_o* __this, const MethodInfo* method);
System_Threading_EventWaitHandle_o* App_SaveData_Manager__get_TaskEvent (App_SaveData_Manager_o* __this, const MethodInfo* method);
void App_SaveData_Manager___cctor (const MethodInfo* method);
