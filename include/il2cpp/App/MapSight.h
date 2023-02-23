#pragma once

#include "il2cpp.h"

bool App_MapSight__get_IsUsable (App_MapSight_o* __this, const MethodInfo* method);
void App_MapSight__set_IsUsable (App_MapSight_o* __this, bool value, const MethodInfo* method);
void App_MapSight___ctor (App_MapSight_o* __this, const MethodInfo* method);
void App_MapSight__Setup (App_MapSight_o* __this, App_ChapterData_o* chapter, const MethodInfo* method);
void App_MapSight__Update (App_MapSight_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapSight__Update (App_MapSight_o* __this, int32_t forceType, const MethodInfo* method);
void App_MapSight__UpdateAll (App_MapSight_o* __this, const MethodInfo* method);
void App_MapSight__UpdateProjection (App_MapSight_o* __this, const MethodInfo* method);
void App_MapSight__UpdateUnit (App_MapSight_o* __this, const MethodInfo* method);
bool App_MapSight__IsIn (App_MapSight_o* __this, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapSight__IsIn (App_MapSight_o* __this, int32_t x, int32_t z, int32_t forceType, const MethodInfo* method);
bool App_MapSight__IsOut (App_MapSight_o* __this, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapSight__IsOut (App_MapSight_o* __this, int32_t x, int32_t z, int32_t forceType, const MethodInfo* method);
App_MapImageSight_o* App_MapSight__GetSightImage (App_MapSight_o* __this, App_Unit_o* unit, const MethodInfo* method);
App_MapImageSight_o* App_MapSight__GetSightImage (App_MapSight_o* __this, int32_t forceType, const MethodInfo* method);
int32_t App_MapSight__get_Version (App_MapSight_o* __this, const MethodInfo* method);
void App_MapSight__OnSerialize (App_MapSight_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapSight__OnDeserialize (App_MapSight_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
App_MapImageSight_o* App_MapSight__get_ImagePlayer (App_MapSight_o* __this, const MethodInfo* method);
App_MapImageSight_o* App_MapSight__get_ImageEnemy (App_MapSight_o* __this, const MethodInfo* method);
App_MapImageSight_o* App_MapSight__get_ImageAlly (App_MapSight_o* __this, const MethodInfo* method);
App_MapImageSight_o* App_MapSight__GetViewImage (App_MapSight_o* __this, const MethodInfo* method);
bool App_MapSight__IsViewIn (App_MapSight_o* __this, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapSight__IsViewOut (App_MapSight_o* __this, int32_t x, int32_t z, const MethodInfo* method);
