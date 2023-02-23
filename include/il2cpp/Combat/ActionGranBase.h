#pragma once

#include "il2cpp.h"

bool Combat_ActionGranBase__get_IsSkyLandCombat (Combat_ActionGranBase_o* __this, const MethodInfo* method);
bool Combat_ActionGranBase__MasterIsFarAndGrandewIsNear (Combat_Character_o* ghr, const MethodInfo* method);
void Combat_ActionGranBase___ctor (Combat_ActionGranBase_o* __this, Combat_Character_o* ghr, const MethodInfo* method);
bool Combat_ActionGranBase__isskyland (const MethodInfo* method);
int32_t Combat_ActionGranBase__get_moveAct (Combat_ActionGranBase_o* __this, const MethodInfo* method);
void Combat_ActionGranBase__set_moveAct (Combat_ActionGranBase_o* __this, int32_t value, const MethodInfo* method);
float Combat_ActionGranBase__MoveTo (Combat_ActionGranBase_o* __this, Combat_FXZ_o goal, const MethodInfo* method);
float Combat_ActionGranBase__RunTo (Combat_ActionGranBase_o* __this, Combat_FXZ_o goal, const MethodInfo* method);
float Combat_ActionGranBase__Warp (Combat_ActionGranBase_o* __this, Combat_FXZ_o goal, const MethodInfo* method);
void Combat_ActionGranBase__MoveEnd (Combat_ActionGranBase_o* __this, const MethodInfo* method);
int32_t Combat_ActionGranBase__GetEvasionHash (Combat_ActionGranBase_o* __this, const MethodInfo* method);
Combat_TR_o Combat_ActionGranBase__CalcAttackTR (Combat_Character_o* ghr, const MethodInfo* method);
Combat_TR_o Combat_ActionGranBase__CalcAttackNNTR (Combat_Character_o* ghr, const MethodInfo* method);
Combat_TR_o Combat_ActionGranBase__CalcAttackNFTR (Combat_Character_o* ghr, const MethodInfo* method);
Combat_TR_o Combat_ActionGranBase__CalcAttackFFTR (Combat_Character_o* ghr, const MethodInfo* method);
Combat_TR_o Combat_ActionGranBase__CalcDamageTR (Combat_Character_o* ghr, const MethodInfo* method);
void Combat_ActionGranBase__AdjustGroundLevel (Combat_ActionGranBase_o* __this, int32_t side, const MethodInfo* method);
