#pragma once

#include "il2cpp.h"

void App_Identifier__Create (App_Identifier_o* __this, const MethodInfo* method);
void App_Identifier__Create (App_Identifier_o* __this, App_Random_o* random, const MethodInfo* method);
void App_Identifier__Clear (App_Identifier_o* __this, const MethodInfo* method);
void App_Identifier__CopyFrom (App_Identifier_o* __this, App_Identifier_o* src, const MethodInfo* method);
bool App_Identifier__IsValid (App_Identifier_o* __this, const MethodInfo* method);
void App_Identifier__Serialize (App_Identifier_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_Identifier__Deserialize (App_Identifier_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_Identifier__DummyDeserialize (App_Stream_o* stream, const MethodInfo* method);
bool App_Identifier__Equals (App_Identifier_o* __this, Il2CppObject* obj, const MethodInfo* method);
int32_t App_Identifier__GetHashCode (App_Identifier_o* __this, const MethodInfo* method);
bool App_Identifier__op_Equality (App_Identifier_o* lhs, App_Identifier_o* rhs, const MethodInfo* method);
bool App_Identifier__op_Inequality (App_Identifier_o* lhs, App_Identifier_o* rhs, const MethodInfo* method);
uint64_t App_Identifier__MakeUserId (App_Identifier_o* __this, uint32_t v0, uint32_t v1, const MethodInfo* method);
uint64_t App_Identifier__MakeUserId (App_Identifier_o* __this, App_Random_o* random, const MethodInfo* method);
uint64_t App_Identifier__MakeMakeTime (App_Identifier_o* __this, System_DateTime_o dt, const MethodInfo* method);
uint64_t App_Identifier__MakeMakeTime (App_Identifier_o* __this, App_Random_o* random, const MethodInfo* method);
void App_Identifier___ctor (App_Identifier_o* __this, const MethodInfo* method);
