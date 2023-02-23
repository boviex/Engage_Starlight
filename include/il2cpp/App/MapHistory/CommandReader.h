#pragma once

#include "il2cpp.h"

void App_MapHistory_CommandReader___ctor (App_MapHistory_CommandReader_o* __this, System_Byte_array* commandStreamBuffer, const MethodInfo* method);
void App_MapHistory_CommandReader__Prepare (App_MapHistory_CommandReader_o* __this, App_MapHistory_Command_o command, const MethodInfo* method);
System_String_o* App_MapHistory_CommandReader__ReadVariableKey (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
System_String_o* App_MapHistory_CommandReader__ReadVariableKey (App_Stream_o* stream, const MethodInfo* method);
System_String_o* App_MapHistory_CommandReader__ReadGid (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
App_GodData_o* App_MapHistory_CommandReader__ReadGodData (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
System_String_o* App_MapHistory_CommandReader__ReadTid (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
System_String_o* App_MapHistory_CommandReader__ReadTid (App_Stream_o* stream, const MethodInfo* method);
System_String_o* App_MapHistory_CommandReader__ReadIid (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
App_ItemData_o* App_MapHistory_CommandReader__ReadItemData (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
System_String_o* App_MapHistory_CommandReader__ReadPid (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
void App_MapHistory_CommandReader__SkipPid (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
System_String_o* App_MapHistory_CommandReader__ReadJid (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
void App_MapHistory_CommandReader__SkipJid (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
System_String_o* App_MapHistory_CommandReader__ReadSid (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
App_SkillData_o* App_MapHistory_CommandReader__ReadSkillData (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
System_String_o* App_MapHistory_CommandReader__ReadEffectName (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
System_String_o* App_MapHistory_CommandReader__ReadMaterialString (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
System_String_o* App_MapHistory_CommandReader__ReadRnid (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
void App_MapHistory_CommandReader__ReadRandom (App_MapHistory_CommandReader_o* __this, App_Random_o* random, const MethodInfo* method);
int32_t App_MapHistory_CommandReader__get_Type (App_MapHistory_CommandReader_o* __this, const MethodInfo* method);
