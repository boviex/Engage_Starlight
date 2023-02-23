#pragma once

#include "il2cpp.h"

void App_RelayAppearanceSequence___ctor (App_RelayAppearanceSequence_o* __this, const MethodInfo* method);
void App_RelayAppearanceSequence___ctor (App_RelayAppearanceSequence_o* __this, System_Int32_array* appearanceIndexes, System_Int32_array* leavingIndexes, const MethodInfo* method);
void App_RelayAppearanceSequence__LeavingBegin (App_RelayAppearanceSequence_o* __this, const MethodInfo* method);
void App_RelayAppearanceSequence__Leaving (App_RelayAppearanceSequence_o* __this, const MethodInfo* method);
void App_RelayAppearanceSequence__LeavingNext (App_RelayAppearanceSequence_o* __this, const MethodInfo* method);
void App_RelayAppearanceSequence__AppearanceBegin (App_RelayAppearanceSequence_o* __this, const MethodInfo* method);
void App_RelayAppearanceSequence__Appearance (App_RelayAppearanceSequence_o* __this, const MethodInfo* method);
void App_RelayAppearanceSequence__AppearanceNext (App_RelayAppearanceSequence_o* __this, const MethodInfo* method);
void App_RelayAppearanceSequence__FocusUnit (App_RelayAppearanceSequence_o* __this, const MethodInfo* method);
App_Unit_o* App_RelayAppearanceSequence__GetLeavingUnit (App_RelayAppearanceSequence_o* __this, int32_t index, const MethodInfo* method);
App_Unit_o* App_RelayAppearanceSequence__GetAppearanceUnit (App_RelayAppearanceSequence_o* __this, int32_t index, const MethodInfo* method);
void App_RelayAppearanceSequence__CreateBindTakeOver (App_ProcInst_o* super, const MethodInfo* method);
void App_RelayAppearanceSequence__CreateBindReplay (App_ProcInst_o* super, const MethodInfo* method);
void App_RelayAppearanceSequence__CreateBindCommon (App_RelayAppearanceSequence_o* p, App_ProcInst_o* super, const MethodInfo* method);
