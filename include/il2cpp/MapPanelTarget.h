#pragma once

#include "il2cpp.h"

int32_t MapPanelTarget__get_SubMeshCount (MapPanelTarget_o* __this, const MethodInfo* method);
void MapPanelTarget__Awake (MapPanelTarget_o* __this, const MethodInfo* method);
void MapPanelTarget__Start (MapPanelTarget_o* __this, const MethodInfo* method);
void MapPanelTarget__LateUpdate (MapPanelTarget_o* __this, const MethodInfo* method);
UnityEngine_Material_array* MapPanelTarget__GetSourceMaterials (MapPanelTarget_o* __this, const MethodInfo* method);
void MapPanelTarget__UpdateDangerUnits (MapPanelTarget_o* __this, const MethodInfo* method);
App_Unit_o* MapPanelTarget__GetTargetUnit (MapPanelTarget_o* __this, const MethodInfo* method);
bool MapPanelTarget__IsEnemyAttackRange (MapPanelTarget_o* __this, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
void MapPanelTarget__CommitForAttack (MapPanelTarget_o* __this, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
void MapPanelTarget__CommitForFullBullet (MapPanelTarget_o* __this, const MethodInfo* method);
void MapPanelTarget__SetMesh (MapPanelTarget_o* __this, const MethodInfo* method);
void MapPanelTarget__SetMeshForGeneralAttack (MapPanelTarget_o* __this, UnityEngine_Vector3_o destPos, UnityEngine_Vector2_o uv0, UnityEngine_Vector2_o uv2, const MethodInfo* method);
void MapPanelTarget__SetMeshForEngageAttack (MapPanelTarget_o* __this, UnityEngine_Vector3_o destPos, UnityEngine_Vector2_o uv0, UnityEngine_Vector2_o uv2, const MethodInfo* method);
void MapPanelTarget__SetMeshForGunner (MapPanelTarget_o* __this, UnityEngine_Vector3_o destPos, UnityEngine_Vector2_o uv0, UnityEngine_Vector2_o uv2, const MethodInfo* method);
void MapPanelTarget__SetMeshForFullBullet (MapPanelTarget_o* __this, UnityEngine_Vector2_o uv0, UnityEngine_Vector2_o uv2, const MethodInfo* method);
bool MapPanelTarget__IsTargetedForGeneralAttack (MapPanelTarget_o* __this, App_Unit_o* enemy, int32_t x, int32_t z, const MethodInfo* method);
bool MapPanelTarget__IsTargetedForEngageAttack (MapPanelTarget_o* __this, App_Unit_o* enemy, App_Unit_o* target, const MethodInfo* method);
bool MapPanelTarget__IsTargetedForGunner (MapPanelTarget_o* __this, App_Unit_o* enemy, int32_t x, int32_t z, const MethodInfo* method);
UnityEngine_AnimationCurve_o* MapPanelTarget__get_AlphaCurve (MapPanelTarget_o* __this, const MethodInfo* method);
float MapPanelTarget__get_PositionZOffsetForGeneral (MapPanelTarget_o* __this, const MethodInfo* method);
float MapPanelTarget__get_PositionZOffsetForHorse (MapPanelTarget_o* __this, const MethodInfo* method);
float MapPanelTarget__get_PositionZOffsetForFly (MapPanelTarget_o* __this, const MethodInfo* method);
float MapPanelTarget__get_PositionZOffsetForBmapSize2 (MapPanelTarget_o* __this, const MethodInfo* method);
float MapPanelTarget__get_PositionZOffsetForBmapSize3 (MapPanelTarget_o* __this, const MethodInfo* method);
float MapPanelTarget__get_PositionZOffsetForBmapSize5 (MapPanelTarget_o* __this, const MethodInfo* method);
float MapPanelTarget__get_ArchHeightOffset (MapPanelTarget_o* __this, const MethodInfo* method);
void MapPanelTarget___ctor (MapPanelTarget_o* __this, const MethodInfo* method);
