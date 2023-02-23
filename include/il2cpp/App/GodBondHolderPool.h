#pragma once

#include "il2cpp.h"

void App_GodBondHolderPool___ctor (App_GodBondHolderPool_o* __this, const MethodInfo* method);
int32_t App_GodBondHolderPool__get_Version (App_GodBondHolderPool_o* __this, const MethodInfo* method);
App_GodBondHolder_o* App_GodBondHolderPool__CreateOrGet (App_GodBondHolderPool_o* __this, App_GodData_o* data, const MethodInfo* method);
void App_GodBondHolderPool__OnSerialize (App_GodBondHolderPool_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_GodBondHolderPool__OnDeserialize (App_GodBondHolderPool_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_GodBondHolderPool__SerializeForRewindLatest (App_GodBondHolderPool_o* __this, App_Stream_o* stream, System_Collections_Generic_HashSet_string__o* excludePids, const MethodInfo* method);
void App_GodBondHolderPool__DeserializeForRewindLatest (App_GodBondHolderPool_o* __this, App_Stream_o* stream, const MethodInfo* method);
