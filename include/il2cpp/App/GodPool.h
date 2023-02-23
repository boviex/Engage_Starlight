#pragma once

#include "il2cpp.h"

void App_GodPool___ctor (App_GodPool_o* __this, const MethodInfo* method);
int32_t App_GodPool__get_Version (App_GodPool_o* __this, const MethodInfo* method);
App_GodUnit_o* App_GodPool__TryGet (System_String_o* gid, bool includeReserved, const MethodInfo* method);
App_GodUnit_o* App_GodPool__TryGet (App_GodData_o* data, bool includeReserved, const MethodInfo* method);
App_GodUnit_o* App_GodPool__TryGetImpl (App_GodData_o* data, bool includeReserved, const MethodInfo* method);
App_GodUnit_o* App_GodPool__Create (App_GodData_o* data, const MethodInfo* method);
void App_GodPool__Delete (App_GodUnit_o* god, const MethodInfo* method);
void App_GodPool__DeleteOrReserve (App_GodUnit_o* god, const MethodInfo* method);
void App_GodPool__DeleteReserved (const MethodInfo* method);
void App_GodPool__DeleteExceptForPlayer (const MethodInfo* method);
App_GodUnit_o* App_GodPool__AppendEnemyGod (App_GodUnit_o* god, const MethodInfo* method);
bool App_GodPool__HasArmlet (const MethodInfo* method);
void App_GodPool__OnSerialize (App_GodPool_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_GodPool__OnDeserialize (App_GodPool_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
