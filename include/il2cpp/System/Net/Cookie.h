#pragma once

#include "il2cpp.h"

void System_Net_Cookie___ctor (System_Net_Cookie_o* __this, const MethodInfo* method);
System_String_o* System_Net_Cookie__get_Comment (System_Net_Cookie_o* __this, const MethodInfo* method);
void System_Net_Cookie__set_Comment (System_Net_Cookie_o* __this, System_String_o* value, const MethodInfo* method);
void System_Net_Cookie__set_CommentUri (System_Net_Cookie_o* __this, System_Uri_o* value, const MethodInfo* method);
void System_Net_Cookie__set_HttpOnly (System_Net_Cookie_o* __this, bool value, const MethodInfo* method);
void System_Net_Cookie__set_Discard (System_Net_Cookie_o* __this, bool value, const MethodInfo* method);
System_String_o* System_Net_Cookie__get_Domain (System_Net_Cookie_o* __this, const MethodInfo* method);
void System_Net_Cookie__set_Domain (System_Net_Cookie_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* System_Net_Cookie__get__Domain (System_Net_Cookie_o* __this, const MethodInfo* method);
bool System_Net_Cookie__get_Expired (System_Net_Cookie_o* __this, const MethodInfo* method);
void System_Net_Cookie__set_Expires (System_Net_Cookie_o* __this, System_DateTime_o value, const MethodInfo* method);
System_String_o* System_Net_Cookie__get_Name (System_Net_Cookie_o* __this, const MethodInfo* method);
bool System_Net_Cookie__InternalSetName (System_Net_Cookie_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* System_Net_Cookie__get_Path (System_Net_Cookie_o* __this, const MethodInfo* method);
void System_Net_Cookie__set_Path (System_Net_Cookie_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* System_Net_Cookie__get__Path (System_Net_Cookie_o* __this, const MethodInfo* method);
bool System_Net_Cookie__get_Plain (System_Net_Cookie_o* __this, const MethodInfo* method);
bool System_Net_Cookie__IsDomainEqualToHost (System_String_o* domain, System_String_o* host, const MethodInfo* method);
bool System_Net_Cookie__VerifySetDefaults (System_Net_Cookie_o* __this, int32_t variant, System_Uri_o* uri, bool isLocalDomain, System_String_o* localDomain, bool set_default, bool isThrow, const MethodInfo* method);
bool System_Net_Cookie__DomainCharsTest (System_String_o* name, const MethodInfo* method);
void System_Net_Cookie__set_Port (System_Net_Cookie_o* __this, System_String_o* value, const MethodInfo* method);
System_Int32_array* System_Net_Cookie__get_PortList (System_Net_Cookie_o* __this, const MethodInfo* method);
System_String_o* System_Net_Cookie__get__Port (System_Net_Cookie_o* __this, const MethodInfo* method);
bool System_Net_Cookie__get_Secure (System_Net_Cookie_o* __this, const MethodInfo* method);
void System_Net_Cookie__set_Secure (System_Net_Cookie_o* __this, bool value, const MethodInfo* method);
System_String_o* System_Net_Cookie__get_Value (System_Net_Cookie_o* __this, const MethodInfo* method);
void System_Net_Cookie__set_Value (System_Net_Cookie_o* __this, System_String_o* value, const MethodInfo* method);
int32_t System_Net_Cookie__get_Variant (System_Net_Cookie_o* __this, const MethodInfo* method);
System_String_o* System_Net_Cookie__get_DomainKey (System_Net_Cookie_o* __this, const MethodInfo* method);
int32_t System_Net_Cookie__get_Version (System_Net_Cookie_o* __this, const MethodInfo* method);
void System_Net_Cookie__set_Version (System_Net_Cookie_o* __this, int32_t value, const MethodInfo* method);
System_String_o* System_Net_Cookie__get__Version (System_Net_Cookie_o* __this, const MethodInfo* method);
System_Collections_IComparer_o* System_Net_Cookie__GetComparer (const MethodInfo* method);
bool System_Net_Cookie__Equals (System_Net_Cookie_o* __this, Il2CppObject* comparand, const MethodInfo* method);
int32_t System_Net_Cookie__GetHashCode (System_Net_Cookie_o* __this, const MethodInfo* method);
System_String_o* System_Net_Cookie__ToString (System_Net_Cookie_o* __this, const MethodInfo* method);
void System_Net_Cookie___cctor (const MethodInfo* method);
