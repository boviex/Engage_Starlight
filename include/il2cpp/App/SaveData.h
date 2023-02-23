#pragma once

#include "il2cpp.h"

void App_SaveData__Setup (const MethodInfo* method);
void App_SaveData__Setup (nn_account_Uid_o userId, const MethodInfo* method);
void App_SaveData__Cleanup (const MethodInfo* method);
void App_SaveData__PauseExitApp (const MethodInfo* method);
void App_SaveData__ResumeExitApp (const MethodInfo* method);
nn_Result_o App_SaveData__Read (int64_t* readSize, System_String_o* path, int64_t offset, System_Byte_array* data, int64_t size, const MethodInfo* method);
App_SaveDataReadHandle_o* App_SaveData__ReadAsync (System_String_o* path, int64_t offset, System_Byte_array* data, int64_t size, const MethodInfo* method);
nn_Result_o App_SaveData__Write (System_String_o* path, int64_t offset, System_Byte_array* data, int64_t size, bool isEnableResize, const MethodInfo* method);
App_SaveDataHandle_o* App_SaveData__WriteAsync (System_String_o* path, int64_t offset, System_Byte_array* data, int64_t size, bool isEnableResize, const MethodInfo* method);
nn_Result_o App_SaveData__Delete (System_String_o* path, const MethodInfo* method);
App_SaveDataHandle_o* App_SaveData__DeleteAsync (System_String_o* path, const MethodInfo* method);
void App_SaveData__Commit (System_String_o* mountName, const MethodInfo* method);
App_SaveDataHandle_o* App_SaveData__CommitAsync (System_String_o* mountName, const MethodInfo* method);
bool App_SaveData__IsExist (System_String_o* path, const MethodInfo* method);
int64_t App_SaveData__GetFileSize (System_String_o* path, const MethodInfo* method);
void App_SaveData__Dump (System_String_o* rootPath, const MethodInfo* method);
bool App_SaveData__get_IsMounted (const MethodInfo* method);
void App_SaveData___ctor (App_SaveData_o* __this, const MethodInfo* method);
void App_SaveData___cctor (const MethodInfo* method);
