#pragma once

#include "il2cpp.h"

bool App_MapHeight__CalcRayCast (UnityEngine_RaycastHit_o* hit, float x, float z, int32_t layerMaskA, int32_t layerMaskB, const MethodInfo* method);
float App_MapHeight__CalcRayCast (float x, float z, int32_t layerMaskA, int32_t layerMaskB, const MethodInfo* method);
void App_MapHeight___ctor (App_MapHeight_o* __this, const MethodInfo* method);
void App_MapHeight__Clear (App_MapHeight_o* __this, const MethodInfo* method);
App_MapHeight_CellMap_o* App_MapHeight__GetCellMap (App_MapHeight_o* __this, int32_t layer, const MethodInfo* method);
App_MapHeight_CellMap_o* App_MapHeight__GetOver (App_MapHeight_o* __this, const MethodInfo* method);
App_MapHeight_CellMap_o* App_MapHeight__GetUnder (App_MapHeight_o* __this, const MethodInfo* method);
void App_MapHeight__Update (App_MapHeight_o* __this, int32_t x, int32_t z, const MethodInfo* method);
void App_MapHeight__OnUpdate (App_MapHeight_o* __this, const MethodInfo* method);
float App_MapHeight__Get (App_MapHeight_o* __this, UnityEngine_Vector3_o pos, int32_t layer, const MethodInfo* method);
UnityEngine_Vector3_o App_MapHeight__GetNormal (App_MapHeight_o* __this, UnityEngine_Vector3_o pos, int32_t layer, const MethodInfo* method);
float App_MapHeight__GetMaxHeight (App_MapHeight_o* __this, int32_t x, int32_t z, const MethodInfo* method);
float App_MapHeight__GetMinHeight (App_MapHeight_o* __this, int32_t x, int32_t z, const MethodInfo* method);
int32_t App_MapHeight__GetPlane (float ox, float oz, const MethodInfo* method);
bool App_MapHeight__IsOutSide (int32_t x, int32_t z, const MethodInfo* method);
float App_MapHeight__Get (App_MapHeight_o* __this, float x, float z, int32_t layer, const MethodInfo* method);
float App_MapHeight__Get (App_MapHeight_o* __this, int32_t x, int32_t z, int32_t index, int32_t layer, const MethodInfo* method);
UnityEngine_Vector3_o App_MapHeight__GetNormal (App_MapHeight_o* __this, float x, float z, int32_t layer, const MethodInfo* method);
float App_MapHeight__GetEdge (App_MapHeight_o* __this, int32_t x, int32_t z, uint8_t dir, const MethodInfo* method);
float App_MapHeight__GetMinEdge (App_MapHeight_o* __this, int32_t x, int32_t z, uint8_t dir, const MethodInfo* method);
float App_MapHeight__GetMaxEdge (App_MapHeight_o* __this, int32_t x, int32_t z, uint8_t dir, const MethodInfo* method);
bool App_MapHeight__IsSlope (App_MapHeight_o* __this, int32_t x, int32_t z, float slope, const MethodInfo* method);
float App_MapHeight__GetTiltAngle (App_MapHeight_o* __this, int32_t x, int32_t z, const MethodInfo* method);
float App_MapHeight__GetLength_point_plane (UnityEngine_Vector3_o P, UnityEngine_Vector3_o D, UnityEngine_Vector3_o NormalizedN, const MethodInfo* method);
float App_MapHeight__GetLength_point_plane (UnityEngine_Vector3_o P, float D, UnityEngine_Vector3_o NormalizedN, const MethodInfo* method);
bool App_MapHeight__GetIntersectPt_segment_plane (UnityEngine_Vector3_o P, UnityEngine_Vector3_o Q, UnityEngine_Vector3_o A, UnityEngine_Vector3_o B, UnityEngine_Vector3_o C, UnityEngine_Vector3_o* oPT, const MethodInfo* method);
bool App_MapHeight__GetIntersectPt_segment_triangle (UnityEngine_Vector3_o P, UnityEngine_Vector3_o Q, UnityEngine_Vector3_o A, UnityEngine_Vector3_o B, UnityEngine_Vector3_o C, UnityEngine_Vector3_o* oPT, const MethodInfo* method);
void App_MapHeight___cctor (const MethodInfo* method);
