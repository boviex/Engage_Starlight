#pragma once

#include "il2cpp.h"

App_SynthesisRingMenuTop_o* App_SynthesisRingMenuTop__CreateBind (App_ProcInst_o* super, int32_t initialGodUnitIndex, App_BasicMenuSelect_o* initialMenuSelect, App_SynthesisRingMenuTop_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
void App_SynthesisRingMenuTop__Destroy (App_SynthesisRingMenuTop_o* __this, const MethodInfo* method);
void App_SynthesisRingMenuTop___ctor (App_SynthesisRingMenuTop_o* __this, App_ProcInst_o* super, int32_t initialGodUnitIndex, App_BasicMenuSelect_o* initialMenuSelect, App_SynthesisRingMenuTop_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
void App_SynthesisRingMenuTop__OnSelect (App_SynthesisRingMenuTop_o* __this, App_RingData_o* ringData, const MethodInfo* method);
void App_SynthesisRingMenuTop__OnDecideSynthesis (App_SynthesisRingMenuTop_o* __this, App_RingData_o* ringData, int32_t countBaseRing, int32_t countPieceOfBonds, int32_t godUnitIndex, App_BasicMenuSelect_o* menuSelect, const MethodInfo* method);
void App_SynthesisRingMenuTop__OnYesToConfirm (App_SynthesisRingMenuTop_o* __this, const MethodInfo* method);
void App_SynthesisRingMenuTop__OnCancelClose (App_SynthesisRingMenuTop_o* __this, const MethodInfo* method);
