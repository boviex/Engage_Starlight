#pragma once

#include "il2cpp.h"

Combat_TR_o Combat_GranUtility__CalcAttackStance2 (Combat_Character_o* ghr, float distance, bool allrange, const MethodInfo* method);
Combat_TR_o Combat_GranUtility__CalcAttackStanceNN (Combat_Character_o* ghr, Combat_Phase_o* phase, const MethodInfo* method);
Combat_TR_o Combat_GranUtility__CalcAttackStanceFN (Combat_Character_o* ghr, Combat_Phase_o* phase, const MethodInfo* method);
Combat_TR_o Combat_GranUtility__CalcAttackStanceFF (Combat_Character_o* ghr, const MethodInfo* method);
Combat_TR_o Combat_GranUtility__CalcAttackStanceNF (Combat_Character_o* ghr, const MethodInfo* method);
Combat_TR_o Combat_GranUtility__CalcShootStance (Combat_Character_o* grandew, const MethodInfo* method);
Combat_TR_o Combat_GranUtility__CalcWaitPosition (Combat_Character_o* grandew, float distance, float degree, const MethodInfo* method);
Combat_TR_o Combat_GranUtility__CalcWaitPosition (Combat_Character_o* master, Combat_Character_o* grandew, Combat_Character_o* enemy, float distance, float degree, const MethodInfo* method);
Combat_TR_o Combat_GranUtility__CalcDamageStance (Combat_Character_o* grandew, const MethodInfo* method);
Combat_TR_o Combat_GranUtility__Calc___Stance (Combat_Character_o* grandew, const MethodInfo* method);
Combat_TR_o Combat_GranUtility__CalcPoint (Combat_FXZ_o target, Combat_FXZ_o dirToTarget, float rad, float distance, const MethodInfo* method);
Combat_TR_o Combat_GranUtility__CalcNearAttackStance (Combat_Character_o* grandew, float distance, const MethodInfo* method);
Combat_TR_o Combat_GranUtility__CalcNearDamageStance (Combat_Character_o* grandew, float distance, const MethodInfo* method);
Combat_FXZ_o Combat_GranUtility__CalcBehindAttackLine (Combat_FXZ_o plpos, Combat_FXZ_o enpos, float ratio, float distance, const MethodInfo* method);
Combat_FXZ_o Combat_GranUtility__CalcBehindAttackLine2 (Combat_FXZ_o plpos, Combat_FXZ_o enpos, float ratio, float angle, float distance, const MethodInfo* method);
Combat_FXZ_o Combat_GranUtility__CalcBehindAttackLine3 (Combat_Character_o* grandew, float ratio, float angle, float distance, const MethodInfo* method);
Combat_FXZ_o Combat_GranUtility__CalcBehindAttackLine4 (Combat_Character_o* grandew, Combat_FXZ_o plpos, Combat_FXZ_o enpos, float ratio, float angle, float distance, const MethodInfo* method);
