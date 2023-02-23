#pragma once

#include "il2cpp.h"

void App_MapFor__EachPoke (int32_t kind, App_MapFor_PosFunction_o* func, const MethodInfo* method);
void App_MapFor__EachPoke (int32_t kind, App_MapFor_PokeFunction_o* func, const MethodInfo* method);
void App_MapFor__EachDestroy (App_Unit_o* unit, App_MapFor_DestroyFunction_o* func, const MethodInfo* method);
void App_MapFor__EachDestroy (App_PokeInspector_o* inspector, App_Unit_o* unit, uint32_t itemMask, App_MapFor_DestroyFunction_o* func, const MethodInfo* method);
void App_MapFor__EachPlayArea (App_MapFor_PosFunction_o* func, const MethodInfo* method);
void App_MapFor__EachPlayArea2 (App_MapFor_Pos2Function_o* func, const MethodInfo* method);
void App_MapFor__EachRange (int32_t px, int32_t pz, int32_t _near_, int32_t _far_, App_MapFor_RangeFunction_o* func, const MethodInfo* method);
void App_MapFor__EachRange2 (int32_t px, int32_t pz, int32_t _near_, int32_t _far_, App_MapFor_Range2Function_o* func, const MethodInfo* method);
void App_MapFor__EachRange (App_Unit_o* unit, int32_t px, int32_t pz, int32_t _near_, int32_t _far_, App_MapFor_RangeFunction_o* func, const MethodInfo* method);
void App_MapFor__EachTarget (App_Unit_o* unit, int32_t x, int32_t z, int32_t _near_, int32_t _far_, uint32_t itemMask, App_UnitItem_o* specifiedItem, App_SkillData_o* commandSkill, App_MapFor_TargetFunction_o* func, const MethodInfo* method);
void App_MapFor__EachLine (int32_t x0, int32_t z0, int32_t x1, int32_t z1, App_MapFor_Pos2Function_o* func, const MethodInfo* method);
void App_MapFor__EachRhombus (int32_t x, int32_t z, int32_t range, App_MapFor_PosFunction_o* func, const MethodInfo* method);
void App_MapFor__EachForce (App_MapFor_ForceFunction_o* func, const MethodInfo* method);
void App_MapFor__EachForce2 (App_MapFor_Force2Function_o* func, const MethodInfo* method);
void App_MapFor__EachAllyForce (int32_t forceType, App_MapFor_ForceFunction_o* func, const MethodInfo* method);
void App_MapFor__EachEnemyForce (int32_t forceType, App_MapFor_ForceFunction_o* func, const MethodInfo* method);
void App_MapFor__EachUnit (App_MapFor_UnitFunction_o* func, const MethodInfo* method);
void App_MapFor__EachForceUnit (int32_t forceType, App_MapFor_UnitFunction_o* func, const MethodInfo* method);
void App_MapFor__EachSelfForceUnit (App_MapFor_UnitFunction_o* func, const MethodInfo* method);
void App_MapFor__EachForceUnit (int32_t forceType, App_MapFor_Unit2Function_o* func, const MethodInfo* method);
void App_MapFor__EachAllyUnit (int32_t forceType, App_MapFor_UnitFunction_o* func, const MethodInfo* method);
void App_MapFor__EachAllyUnit2 (int32_t forceType, App_MapFor_Unit2Function_o* func, const MethodInfo* method);
void App_MapFor__EachEnemyUnit (int32_t forceType, App_MapFor_UnitFunction_o* func, const MethodInfo* method);
void App_MapFor__EachEnemyUnit2 (int32_t forceType, App_MapFor_Unit2Function_o* func, const MethodInfo* method);
void App_MapFor__EachAroundUnit (App_Unit_o* unit, int32_t forceType, App_MapFor_UnitFunction_o* func, const MethodInfo* method);
void App_MapFor__EachAroundUnit (App_Unit_o* unit, App_MapFor_UnitFunction_o* func, const MethodInfo* method);
void App_MapFor__EachRangeUnit (App_Unit_o* unit, int32_t forceType, int32_t range, App_MapFor_UnitFunction_o* func, const MethodInfo* method);
void App_MapFor__EachRangeUnit (App_Unit_o* unit, int32_t range, App_MapFor_UnitFunction_o* func, const MethodInfo* method);
void App_MapFor__EachRangeUnitSkill (App_Unit_o* target, int32_t timing, App_MapFor_UnitSkillFunction_o* func, const MethodInfo* method);
void App_MapFor__EachRangeUnitAround (App_Unit_o* unit, App_SkillData_o* skill, App_MapFor_UnitFunction_o* func, const MethodInfo* method);
void App_MapFor__EachRangeUnitSupport (App_Unit_o* unit, App_SkillData_o* skill, App_MapFor_UnitFunction_o* func, const MethodInfo* method);
void App_MapFor___ctor (App_MapFor_o* __this, const MethodInfo* method);
void App_MapFor___cctor (const MethodInfo* method);
