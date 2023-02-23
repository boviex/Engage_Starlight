#pragma once

#include "il2cpp.h"

void App_Account__Initialize (const MethodInfo* method);
void App_Account__SetupNsa (App_ProcInst_o* super, bool isShowError, App_Account_SetupNsaResultFunction_o* resultFunc, const MethodInfo* method);
bool App_Account__IsUserValid (const MethodInfo* method);
bool App_Account__IsNsaValid (const MethodInfo* method);
System_String_o* App_Account__GetNickname (const MethodInfo* method);
nn_account_UserHandle_o App_Account__get_UserHandle (const MethodInfo* method);
nn_account_Uid_o App_Account__get_Uid (const MethodInfo* method);
nn_account_NetworkServiceAccountId_o App_Account__get_NsaId (const MethodInfo* method);
System_Byte_array* App_Account__get_NsaIdTokenCache (const MethodInfo* method);
void App_Account___cctor (const MethodInfo* method);
