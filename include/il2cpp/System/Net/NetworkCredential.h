#pragma once

#include "il2cpp.h"

void System_Net_NetworkCredential___ctor (System_Net_NetworkCredential_o* __this, System_String_o* userName, System_String_o* password, const MethodInfo* method);
void System_Net_NetworkCredential___ctor (System_Net_NetworkCredential_o* __this, System_String_o* userName, System_String_o* password, System_String_o* domain, const MethodInfo* method);
System_String_o* System_Net_NetworkCredential__get_UserName (System_Net_NetworkCredential_o* __this, const MethodInfo* method);
void System_Net_NetworkCredential__set_UserName (System_Net_NetworkCredential_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* System_Net_NetworkCredential__get_Password (System_Net_NetworkCredential_o* __this, const MethodInfo* method);
void System_Net_NetworkCredential__set_Password (System_Net_NetworkCredential_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* System_Net_NetworkCredential__get_Domain (System_Net_NetworkCredential_o* __this, const MethodInfo* method);
void System_Net_NetworkCredential__set_Domain (System_Net_NetworkCredential_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* System_Net_NetworkCredential__InternalGetUserName (System_Net_NetworkCredential_o* __this, const MethodInfo* method);
System_String_o* System_Net_NetworkCredential__InternalGetPassword (System_Net_NetworkCredential_o* __this, const MethodInfo* method);
System_String_o* System_Net_NetworkCredential__InternalGetDomain (System_Net_NetworkCredential_o* __this, const MethodInfo* method);
System_Net_NetworkCredential_o* System_Net_NetworkCredential__GetCredential (System_Net_NetworkCredential_o* __this, System_Uri_o* uri, System_String_o* authType, const MethodInfo* method);
