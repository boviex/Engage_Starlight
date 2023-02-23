#pragma once

#include "il2cpp.h"

void App_BitHash___ctor (App_BitHash_o* __this, int32_t shift, const MethodInfo* method);
void App_BitHash__Dispose (App_BitHash_o* __this, const MethodInfo* method);
void App_BitHash__Add (App_BitHash_o* __this, System_String_o* name, const MethodInfo* method);
void App_BitHash__Add (App_BitHash_o* __this, System_String_array* conditions, const MethodInfo* method);
void App_BitHash__Clear (App_BitHash_o* __this, const MethodInfo* method);
bool App_BitHash__Test (App_BitHash_o* __this, int32_t key, const MethodInfo* method);
bool App_BitHash__Test (App_BitHash_o* __this, int32_t key1, int32_t key2, const MethodInfo* method);
bool App_BitHash__Test (App_BitHash_o* __this, int32_t key1, int32_t key2, int32_t key3, const MethodInfo* method);
bool App_BitHash__Test (App_BitHash_o* __this, int32_t key1, int32_t key2, int32_t key3, int32_t key4, const MethodInfo* method);
bool App_BitHash__Test (App_BitHash_o* __this, System_Int32_array* keys, const MethodInfo* method);
bool App_BitHash__Test (App_BitHash_o* __this, System_Collections_Generic_List_int__o* keys, const MethodInfo* method);
bool App_BitHash__Not (App_BitHash_o* __this, int32_t key, const MethodInfo* method);
bool App_BitHash__Not (App_BitHash_o* __this, System_Int32_array* keys, const MethodInfo* method);
bool App_BitHash__Not (App_BitHash_o* __this, System_Collections_Generic_List_int__o* keys, const MethodInfo* method);
int32_t App_BitHash__CalcKey (System_String_o* name, int32_t shift, const MethodInfo* method);
bool App_BitHash__Test (App_BitHash_o* __this, System_String_o* key, const MethodInfo* method);
System_Collections_Generic_List_string__o* App_BitHash__get_Names (App_BitHash_o* __this, const MethodInfo* method);
