#pragma once

#include "il2cpp.h"

void App_MapHistory_RewindLog___ctor (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
void App_MapHistory_RewindLog__Clear (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
bool App_MapHistory_RewindLog__IsValid (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
void App_MapHistory_RewindLog__SetActorUnitIcon (App_MapHistory_RewindLog_o* __this, System_String_o* pid, System_String_o* jid, int32_t itemKind, bool isFemale, bool isEngage, System_String_o* gid, const MethodInfo* method);
void App_MapHistory_RewindLog__SetActorUnitIconEngage (App_MapHistory_RewindLog_o* __this, System_String_o* gid, const MethodInfo* method);
void App_MapHistory_RewindLog__SetActorMapHistoryIndex (App_MapHistory_RewindLog_o* __this, int32_t mapHistoryIndex, const MethodInfo* method);
void App_MapHistory_RewindLog__ClearActor (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
void App_MapHistory_RewindLog__SetAction (App_MapHistory_RewindLog_o* __this, System_String_o* mhid, const MethodInfo* method);
void App_MapHistory_RewindLog__SetAction (App_MapHistory_RewindLog_o* __this, System_String_o* mhid, System_String_o* arg, const MethodInfo* method);
void App_MapHistory_RewindLog__SetAction (App_MapHistory_RewindLog_o* __this, System_String_o* mhid, System_String_o* arg0, System_String_o* arg1, const MethodInfo* method);
void App_MapHistory_RewindLog__SetAction (App_MapHistory_RewindLog_o* __this, System_String_o* action, int32_t priority, const MethodInfo* method);
void App_MapHistory_RewindLog__AddItem (App_MapHistory_RewindLog_o* __this, System_String_o* iid, const MethodInfo* method);
void App_MapHistory_RewindLog__AddDeadUnit (App_MapHistory_RewindLog_o* __this, System_String_o* pid, System_String_o* jid, int32_t itemKind, bool isFemale, bool isEngage, System_String_o* gid, const MethodInfo* method);
void App_MapHistory_RewindLog__DeleteDeadUnitIcons (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
App_MapHistory_RewindLog_UnitIcon_o* App_MapHistory_RewindLog__get_ActorUnitIcon (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
int32_t App_MapHistory_RewindLog__get_ActorMapHistoryIndex (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
System_String_o* App_MapHistory_RewindLog__get_ActorName (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
void App_MapHistory_RewindLog__set_ActorName (App_MapHistory_RewindLog_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* App_MapHistory_RewindLog__get_Action (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
App_ItemData_array* App_MapHistory_RewindLog__get_Items (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
int32_t App_MapHistory_RewindLog__get_ItemCount (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
App_MapHistory_RewindLog_UnitIcon_array* App_MapHistory_RewindLog__get_DeadUnitIcons (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
int32_t App_MapHistory_RewindLog__get_DeadUnitIconCount (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
bool App_MapHistory_RewindLog__get_IsForCheck (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
void App_MapHistory_RewindLog__set_IsForCheck (App_MapHistory_RewindLog_o* __this, bool value, const MethodInfo* method);
bool App_MapHistory_RewindLog__get_IsPhaseBegin (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
int32_t App_MapHistory_RewindLog__get_PhaseBeginForce (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
void App_MapHistory_RewindLog__set_PhaseBeginForce (App_MapHistory_RewindLog_o* __this, int32_t value, const MethodInfo* method);
bool App_MapHistory_RewindLog__get_HasPrevForce (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
int32_t App_MapHistory_RewindLog__get_PrevForce (App_MapHistory_RewindLog_o* __this, const MethodInfo* method);
void App_MapHistory_RewindLog__set_PrevForce (App_MapHistory_RewindLog_o* __this, int32_t value, const MethodInfo* method);
