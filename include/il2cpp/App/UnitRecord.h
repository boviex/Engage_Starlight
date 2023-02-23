#pragma once

#include "il2cpp.h"

void App_UnitRecord__Initialize (const MethodInfo* method);
int32_t App_UnitRecord__GetKey (int32_t kind, const MethodInfo* method);
int32_t App_UnitRecord__GetKind (int32_t key, const MethodInfo* method);
System_String_o* App_UnitRecord__GetName (int32_t kind, const MethodInfo* method);
void App_UnitRecord___ctor (App_UnitRecord_o* __this, const MethodInfo* method);
int32_t App_UnitRecord__Get (App_UnitRecord_o* __this, int32_t kind, const MethodInfo* method);
void App_UnitRecord__Set (App_UnitRecord_o* __this, int32_t kind, int32_t value, const MethodInfo* method);
void App_UnitRecord__Add (App_UnitRecord_o* __this, int32_t kind, int32_t value, const MethodInfo* method);
void App_UnitRecord__ResetMapBegin (App_UnitRecord_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_UnitRecord__ResetMapEnd (App_UnitRecord_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_UnitRecord__Clear (App_UnitRecord_o* __this, const MethodInfo* method);
void App_UnitRecord__Copy (App_UnitRecord_o* __this, App_UnitRecord_o* src, const MethodInfo* method);
void App_UnitRecord__Serialize (App_UnitRecord_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_UnitRecord__Deserialize (App_UnitRecord_o* __this, App_Stream_o* stream, const MethodInfo* method);
int32_t App_UnitRecord__GetHeroReliance (App_Unit_o* unit, const MethodInfo* method);
App_Unit_o* App_UnitRecord__GetMvpUnit (const MethodInfo* method);
App_ChapterData_o* App_UnitRecord__GetDeadChapter (App_UnitRecord_o* __this, const MethodInfo* method);
void App_UnitRecord__SetDeadChapter (App_UnitRecord_o* __this, App_ChapterData_o* chapter, const MethodInfo* method);
int32_t App_UnitRecord__GetDeadFlag (App_UnitRecord_o* __this, const MethodInfo* method);
void App_UnitRecord__SetDeadFlag (App_UnitRecord_o* __this, int32_t flags, const MethodInfo* method);
void App_UnitRecord___cctor (const MethodInfo* method);
