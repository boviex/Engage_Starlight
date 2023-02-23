#pragma once

#include "il2cpp.h"

void App_GameVariable___ctor (App_GameVariable_o* __this, int32_t capacity, const MethodInfo* method);
int32_t App_GameVariable__get_Count (App_GameVariable_o* __this, const MethodInfo* method);
int32_t App_GameVariable__get_Capacity (App_GameVariable_o* __this, const MethodInfo* method);
bool App_GameVariable__CanRwind (App_GameVariable_o* __this, System_String_o* key, const MethodInfo* method);
bool App_GameVariable__Entry (App_GameVariable_o* __this, System_String_o* key, int32_t num, const MethodInfo* method);
bool App_GameVariable__Entry (App_GameVariable_o* __this, System_String_o* key, System_String_o* str, const MethodInfo* method);
bool App_GameVariable__EntryNoRewind (App_GameVariable_o* __this, System_String_o* key, int32_t num, const MethodInfo* method);
bool App_GameVariable__EntryNoRewind (App_GameVariable_o* __this, System_String_o* key, System_String_o* str, const MethodInfo* method);
void App_GameVariable__EntryImpl (App_GameVariable_o* __this, System_String_o* key, App_GameVariable_Value_o value, bool rewindable, const MethodInfo* method);
bool App_GameVariable__Remove (App_GameVariable_o* __this, System_String_o* key, const MethodInfo* method);
void App_GameVariable__RemoveImpl (App_GameVariable_o* __this, System_String_o* key, const MethodInfo* method);
int32_t App_GameVariable__Get (App_GameVariable_o* __this, System_String_o* key, const MethodInfo* method);
bool App_GameVariable__IsString (App_GameVariable_o* __this, System_String_o* key, const MethodInfo* method);
int32_t App_GameVariable__GetNumber (App_GameVariable_o* __this, System_String_o* key, const MethodInfo* method);
bool App_GameVariable__GetBool (App_GameVariable_o* __this, System_String_o* key, const MethodInfo* method);
bool App_GameVariable__TryGetBool (App_GameVariable_o* __this, System_String_o* key, const MethodInfo* method);
System_String_o* App_GameVariable__GetString (App_GameVariable_o* __this, System_String_o* key, const MethodInfo* method);
int32_t App_GameVariable__TryGet (App_GameVariable_o* __this, System_String_o* key, int32_t empty, const MethodInfo* method);
bool App_GameVariable__TryGet (App_GameVariable_o* __this, System_String_o* key, int32_t* result, const MethodInfo* method);
void App_GameVariable__Set (App_GameVariable_o* __this, System_String_o* key, bool enable, const MethodInfo* method);
void App_GameVariable__Set (App_GameVariable_o* __this, System_String_o* key, int32_t num, const MethodInfo* method);
void App_GameVariable__Set (App_GameVariable_o* __this, System_String_o* key, System_String_o* str, const MethodInfo* method);
void App_GameVariable__SetNumber (App_GameVariable_o* __this, System_String_o* key, int32_t num, const MethodInfo* method);
void App_GameVariable__SetString (App_GameVariable_o* __this, System_String_o* key, System_String_o* str, const MethodInfo* method);
int32_t App_GameVariable__Add (App_GameVariable_o* __this, System_String_o* key, int32_t count, int32_t min, int32_t max, const MethodInfo* method);
void App_GameVariable__ClearAll (App_GameVariable_o* __this, const MethodInfo* method);
void App_GameVariable__ClearLocal (App_GameVariable_o* __this, const MethodInfo* method);
void App_GameVariable__ClearChapter (App_GameVariable_o* __this, const MethodInfo* method);
void App_GameVariable__ClearHub (App_GameVariable_o* __this, const MethodInfo* method);
void App_GameVariable__ClearStartsWith (App_GameVariable_o* __this, System_String_o* name, const MethodInfo* method);
System_Collections_Generic_List_string__o* App_GameVariable__FindStartsWith (App_GameVariable_o* __this, System_String_o* name, const MethodInfo* method);
void App_GameVariable__ClearKeys (App_GameVariable_o* __this, System_Collections_Generic_List_string__o* keys, const MethodInfo* method);
bool App_GameVariable__IsExist (App_GameVariable_o* __this, System_String_o* key, const MethodInfo* method);
bool App_GameVariable__IsLocal (System_String_o* key, const MethodInfo* method);
bool App_GameVariable__IsChapter (System_String_o* key, const MethodInfo* method);
bool App_GameVariable__IsHub (System_String_o* key, const MethodInfo* method);
bool App_GameVariable__IsGlobal (System_String_o* key, const MethodInfo* method);
void App_GameVariable__Serialize (App_GameVariable_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_GameVariable__Deserialize (App_GameVariable_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_GameVariable__SerializeKeyValue (App_GameVariable_o* __this, App_Stream_o* stream, System_Collections_Generic_KeyValuePair_string__GameVariable_Value__o keyValue, const MethodInfo* method);
void App_GameVariable__DeserializeKeyValue (App_GameVariable_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_GameVariable__SerializeForOnline (App_GameVariable_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_GameVariable__DeserializeForOnline (App_GameVariable_o* __this, App_Stream_o* stream, const MethodInfo* method);
System_Collections_Generic_List_string__o* App_GameVariable__FindKeys (App_GameVariable_o* __this, System_String_o* header, const MethodInfo* method);
System_String_o* App_GameVariable__GetName (App_GameVariable_o* __this, System_String_o* key, const MethodInfo* method);
