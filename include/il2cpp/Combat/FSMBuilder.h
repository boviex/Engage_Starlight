#pragma once

#include "il2cpp.h"

Combat_CombatWorld_o* Combat_FSMBuilder__get_world (const MethodInfo* method);
Combat_CombatRecord_o* Combat_FSMBuilder__get_record (const MethodInfo* method);
Combat_Character_array* Combat_FSMBuilder__get_chrs (const MethodInfo* method);
Combat_CameraManager_o* Combat_FSMBuilder__get_cam (const MethodInfo* method);
int32_t Combat_FSMBuilder__get_style (const MethodInfo* method);
Combat_Character_o* Combat_FSMBuilder__get_anyone (const MethodInfo* method);
Combat_Phase_o* Combat_FSMBuilder__get_FirstAttackPhase (const MethodInfo* method);
Combat_Character_o* Combat_FSMBuilder__get_FirstAttacker (const MethodInfo* method);
void Combat_FSMBuilder__PreLoad (const MethodInfo* method);
Combat_FSMBuilder_o* Combat_FSMBuilder__CreateAndRun (const MethodInfo* method);
void Combat_FSMBuilder__Build (Combat_FSMBuilder_o* __this, const MethodInfo* method);
void Combat_FSMBuilder__BuildStart (Combat_FSMBuilder_o* __this, const MethodInfo* method);
void Combat_FSMBuilder__BuildMain (Combat_FSMBuilder_o* __this, const MethodInfo* method);
void Combat_FSMBuilder__BuildEnd (Combat_FSMBuilder_o* __this, const MethodInfo* method);
void Combat_FSMBuilder__BuildSkipover (Combat_FSMBuilder_o* __this, const MethodInfo* method);
void Combat_FSMBuilder__RunEternalCombatAppendObserver (const MethodInfo* method);
void Combat_FSMBuilder__FSMAdd_WaitForTransitionCamera (float rate, const MethodInfo* method);
Combat_ActionBase_o* Combat_FSMBuilder__ActionWairForTransitionCamera (float rate, const MethodInfo* method);
void Combat_FSMBuilder__FSMAdd_SyncEveryone (bool includeGrandew, const MethodInfo* method);
void Combat_FSMBuilder___ctor (Combat_FSMBuilder_o* __this, const MethodInfo* method);
void Combat_FSMBuilder___FSMAdd_SyncEveryone_g__add_26_0 (int32_t side, Combat_SyncToken_o* token, const MethodInfo* method);
