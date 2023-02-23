#pragma once

#include "il2cpp.h"

void App_MapHistory_RewindUnitMap__Preserve (App_MapHistory_RewindUnitMap_o* __this, App_Unit_o* unit, int32_t nextForceType, const MethodInfo* method);
void App_MapHistory_RewindUnitMap__Restore (App_MapHistory_RewindUnitMap_o* __this, int32_t index, App_Unit_o* prevUnit, const MethodInfo* method);
void App_MapHistory_RewindUnitMap__BeforeDispos (App_MapHistory_RewindUnitMap_o* __this, int32_t index, const MethodInfo* method);
void App_MapHistory_RewindUnitMap__PreviewLatest (App_MapHistory_RewindUnitMap_o* __this, const MethodInfo* method);
void App_MapHistory_RewindUnitMap__PreviewDecide (App_MapHistory_RewindUnitMap_o* __this, const MethodInfo* method);
void App_MapHistory_RewindUnitMap__PreviewCancel (App_MapHistory_RewindUnitMap_o* __this, const MethodInfo* method);
void App_MapHistory_RewindUnitMap__PreviewDeleteRestoredUnit (App_MapHistory_RewindUnitMap_o* __this, int32_t index, const MethodInfo* method);
void App_MapHistory_RewindUnitMap__PreviewCleanup (App_MapHistory_RewindUnitMap_o* __this, int32_t index, const MethodInfo* method);
int32_t App_MapHistory_RewindUnitMap__get_Version (App_MapHistory_RewindUnitMap_o* __this, const MethodInfo* method);
void App_MapHistory_RewindUnitMap__OnSerialize (App_MapHistory_RewindUnitMap_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapHistory_RewindUnitMap__OnDeserialize (App_MapHistory_RewindUnitMap_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_MapHistory_RewindUnitMap___ctor (App_MapHistory_RewindUnitMap_o* __this, const MethodInfo* method);
