#pragma once

#include "il2cpp.h"

void System_Net_WebHeaderCollection__NormalizeCommonHeaders (System_Net_WebHeaderCollection_o* __this, const MethodInfo* method);
System_Collections_Specialized_NameValueCollection_o* System_Net_WebHeaderCollection__get_InnerCollection (System_Net_WebHeaderCollection_o* __this, const MethodInfo* method);
bool System_Net_WebHeaderCollection__AllowMultiValues (System_String_o* name, const MethodInfo* method);
bool System_Net_WebHeaderCollection__get_AllowHttpRequestHeader (System_Net_WebHeaderCollection_o* __this, const MethodInfo* method);
void System_Net_WebHeaderCollection__Remove (System_Net_WebHeaderCollection_o* __this, int32_t header, const MethodInfo* method);
void System_Net_WebHeaderCollection__AddInternal (System_Net_WebHeaderCollection_o* __this, System_String_o* name, System_String_o* value, const MethodInfo* method);
void System_Net_WebHeaderCollection__ChangeInternal (System_Net_WebHeaderCollection_o* __this, System_String_o* name, System_String_o* value, const MethodInfo* method);
void System_Net_WebHeaderCollection__RemoveInternal (System_Net_WebHeaderCollection_o* __this, System_String_o* name, const MethodInfo* method);
System_String_o* System_Net_WebHeaderCollection__CheckBadChars (System_String_o* name, bool isHeaderValue, const MethodInfo* method);
bool System_Net_WebHeaderCollection__ContainsNonAsciiChars (System_String_o* token, const MethodInfo* method);
void System_Net_WebHeaderCollection__ThrowOnRestrictedHeader (System_Net_WebHeaderCollection_o* __this, System_String_o* headerName, const MethodInfo* method);
void System_Net_WebHeaderCollection__Add (System_Net_WebHeaderCollection_o* __this, System_String_o* name, System_String_o* value, const MethodInfo* method);
void System_Net_WebHeaderCollection__Add (System_Net_WebHeaderCollection_o* __this, System_String_o* header, const MethodInfo* method);
void System_Net_WebHeaderCollection__Set (System_Net_WebHeaderCollection_o* __this, System_String_o* name, System_String_o* value, const MethodInfo* method);
void System_Net_WebHeaderCollection__SetInternal (System_Net_WebHeaderCollection_o* __this, System_String_o* name, System_String_o* value, const MethodInfo* method);
void System_Net_WebHeaderCollection__Remove (System_Net_WebHeaderCollection_o* __this, System_String_o* name, const MethodInfo* method);
System_String_array* System_Net_WebHeaderCollection__GetValues (System_Net_WebHeaderCollection_o* __this, System_String_o* header, const MethodInfo* method);
System_String_o* System_Net_WebHeaderCollection__ToString (System_Net_WebHeaderCollection_o* __this, const MethodInfo* method);
System_String_o* System_Net_WebHeaderCollection__GetAsString (System_Collections_Specialized_NameValueCollection_o* cc, bool winInetCompat, bool forTrace, const MethodInfo* method);
void System_Net_WebHeaderCollection___ctor (System_Net_WebHeaderCollection_o* __this, const MethodInfo* method);
void System_Net_WebHeaderCollection___ctor (System_Net_WebHeaderCollection_o* __this, uint16_t type, const MethodInfo* method);
void System_Net_WebHeaderCollection___ctor (System_Net_WebHeaderCollection_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_WebHeaderCollection__OnDeserialization (System_Net_WebHeaderCollection_o* __this, Il2CppObject* sender, const MethodInfo* method);
void System_Net_WebHeaderCollection__GetObjectData (System_Net_WebHeaderCollection_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_WebHeaderCollection__System_Runtime_Serialization_ISerializable_GetObjectData (System_Net_WebHeaderCollection_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
System_String_o* System_Net_WebHeaderCollection__Get (System_Net_WebHeaderCollection_o* __this, System_String_o* name, const MethodInfo* method);
System_Collections_IEnumerator_o* System_Net_WebHeaderCollection__GetEnumerator (System_Net_WebHeaderCollection_o* __this, const MethodInfo* method);
int32_t System_Net_WebHeaderCollection__get_Count (System_Net_WebHeaderCollection_o* __this, const MethodInfo* method);
System_String_o* System_Net_WebHeaderCollection__Get (System_Net_WebHeaderCollection_o* __this, int32_t index, const MethodInfo* method);
System_String_o* System_Net_WebHeaderCollection__GetKey (System_Net_WebHeaderCollection_o* __this, int32_t index, const MethodInfo* method);
void System_Net_WebHeaderCollection___cctor (const MethodInfo* method);
