#pragma once

#include "il2cpp.h"

void App_MapHistory_ReplayAppearanceMap__OnCreate (App_MapHistory_ReplayAppearanceMap_o* __this, const MethodInfo* method);
int32_t App_MapHistory_ReplayAppearanceMap__RegisterAppearanceUnit (App_MapHistory_ReplayAppearanceMap_o* __this, App_Unit_o* unit, const MethodInfo* method);
int32_t App_MapHistory_ReplayAppearanceMap__RegisterLeavingUnit (App_MapHistory_ReplayAppearanceMap_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_MapHistory_ReplayAppearanceMap__GetIndexes (App_MapHistory_ReplayAppearanceMap_o* __this, System_Int32_array** appearanceIndexes, System_Int32_array** leavingIndexes, const MethodInfo* method);
App_Unit_o* App_MapHistory_ReplayAppearanceMap__CreateAppearanceUnit (App_MapHistory_ReplayAppearanceMap_o* __this, int32_t index, const MethodInfo* method);
App_Unit_o* App_MapHistory_ReplayAppearanceMap__GetLeavingUnit (App_MapHistory_ReplayAppearanceMap_o* __this, int32_t index, const MethodInfo* method);
void App_MapHistory_ReplayAppearanceMap__SerializeForAppearance (App_MapHistory_ReplayAppearanceMap_o* __this, App_Stream_o* stream, App_Unit_o* unit, const MethodInfo* method);
App_Unit_o* App_MapHistory_ReplayAppearanceMap__DeserializeForAppearance (App_MapHistory_ReplayAppearanceMap_o* __this, App_Stream_o* stream, const MethodInfo* method);
int32_t App_MapHistory_ReplayAppearanceMap__get_Version (App_MapHistory_ReplayAppearanceMap_o* __this, const MethodInfo* method);
void App_MapHistory_ReplayAppearanceMap__OnSerialize (App_MapHistory_ReplayAppearanceMap_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapHistory_ReplayAppearanceMap__OnDeserialize (App_MapHistory_ReplayAppearanceMap_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_MapHistory_ReplayAppearanceMap__DbgDump (App_MapHistory_ReplayAppearanceMap_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
void App_MapHistory_ReplayAppearanceMap___ctor (App_MapHistory_ReplayAppearanceMap_o* __this, const MethodInfo* method);
