#pragma once

#include "il2cpp.h"

float App_Map__get_GridAlpha (const MethodInfo* method);
void App_Map__set_GridAlpha (float value, const MethodInfo* method);
float App_Map__get_TerrAlpha (const MethodInfo* method);
void App_Map__set_TerrAlpha (float value, const MethodInfo* method);
bool App_Map__get_ShowLayer (const MethodInfo* method);
void App_Map__set_ShowLayer (bool value, const MethodInfo* method);
bool App_Map__get_ShowOverlap (const MethodInfo* method);
void App_Map__set_ShowOverlap (bool value, const MethodInfo* method);
float App_Map__GetHeight (UnityEngine_Vector3_o pos, const MethodInfo* method);
float App_Map__GetHeight (float x, float z, const MethodInfo* method);
float App_Map__GetUnder (UnityEngine_Vector3_o pos, const MethodInfo* method);
float App_Map__GetUnder (float x, float z, const MethodInfo* method);
float App_Map__GetEdge (int32_t x, int32_t z, uint8_t dir, const MethodInfo* method);
bool App_Map__IsConnect (int32_t x, int32_t z, uint8_t dir, const MethodInfo* method);
float App_Map__CellToWorld (int32_t v, const MethodInfo* method);
int32_t App_Map__WorldToCell (float v, const MethodInfo* method);
float App_Map__WorldToCenter (float v, const MethodInfo* method);
UnityEngine_Vector3_o App_Map__CellToWorld (int32_t x, int32_t z, const MethodInfo* method);
void App_Map__SetTerrain (int32_t x, int32_t z, System_String_o* tid, bool doUpdate, const MethodInfo* method);
void App_Map__UpdateUnitPosition (const MethodInfo* method);
void App_Map__UpdatePosition (const MethodInfo* method);
void App_Map__UpdateTerrain (const MethodInfo* method);
void App_Map__ApplyPreview (const MethodInfo* method);
bool App_Map__HasEventObjects (int32_t x, int32_t z, const MethodInfo* method);
bool App_Map__HasEventObject (int32_t x, int32_t z, int32_t kind, const MethodInfo* method);
App_MapObject_o* App_Map__GetEventObject (int32_t x, int32_t z, int32_t kind, const MethodInfo* method);
System_Collections_Generic_List_MapObject__o* App_Map__GetEventObjects (int32_t x, int32_t z, const MethodInfo* method);
int32_t App_Map__GetActionImpl (int32_t x, int32_t z, const MethodInfo* method);
void App_Map__PlayActionImpl (int32_t x, int32_t z, int32_t action, const MethodInfo* method);
void App_Map__ResetActionImpl (int32_t x, int32_t z, int32_t action, const MethodInfo* method);
void App_Map__PlayAction (int32_t x, int32_t z, int32_t action, const MethodInfo* method);
void App_Map__PlayActionMove (int32_t x, int32_t z, int32_t movedX, int32_t movedZ, int32_t action, const MethodInfo* method);
int32_t App_Map__GetStateImpl (int32_t x, int32_t z, const MethodInfo* method);
void App_Map__SetStateImpl (int32_t x, int32_t z, int32_t state, bool isPlay, const MethodInfo* method);
void App_Map__SetState (int32_t x, int32_t z, int32_t state, const MethodInfo* method);
void App_Map__PlayState (int32_t x, int32_t z, int32_t state, const MethodInfo* method);
void App_Map__ResetAction (int32_t x, int32_t z, int32_t action, const MethodInfo* method);
bool App_Map__IsPlaying (int32_t x, int32_t z, const MethodInfo* method);
void App_Map__PlayEndurance (int32_t x, int32_t z, int32_t hp, int32_t maxHp, const MethodInfo* method);
void App_Map__PlayEnduranceForRewind (int32_t x, int32_t z, int32_t hp, int32_t maxHp, const MethodInfo* method);
void App_Map__PlayEnduranceImpl (int32_t x, int32_t z, float ratio, const MethodInfo* method);
void App_Map__PlayAroundRoofImpl (int32_t x, int32_t z, int32_t action, const MethodInfo* method);
bool App_Map__CanLinkable (App_TerrainData_o* terrain, const MethodInfo* method);
App_TerrainData_o* App_Map__TryChangeTerrain (int32_t x, int32_t z, const MethodInfo* method);
App_TerrainData_o* App_Map__TryResumeTerrain (int32_t x, int32_t z, const MethodInfo* method);
void App_Map__Open (int32_t x, int32_t z, const MethodInfo* method);
void App_Map__Close (int32_t x, int32_t z, const MethodInfo* method);
void App_Map__Broken (int32_t x, int32_t z, const MethodInfo* method);
void App_Map__ResetBroken (int32_t x, int32_t z, const MethodInfo* method);
void App_Map__TorchImpl (int32_t x, int32_t z, bool enable, bool warning, const MethodInfo* method);
void App_Map__TorchImpl (int32_t x, int32_t z, const MethodInfo* method);
void App_Map__UpdateTorch (const MethodInfo* method);
void App_Map__SetTerrain (int32_t x, int32_t z, int32_t index, bool doUpdate, const MethodInfo* method);
System_Collections_Generic_List_Map_Pos__o* App_Map__FillTerrain (int32_t x, int32_t z, System_String_o* tid, const MethodInfo* method);
App_GroundAttribute_o* App_Map__GetGroundAttribute (UnityEngine_Vector3_o pos, const MethodInfo* method);
App_GroundAttribute_o* App_Map__GetGroundAttribute (UnityEngine_Vector3_o pos, int32_t layerMask, const MethodInfo* method);
App_GroundAttribute_o* App_Map__GetGroundAttribute (UnityEngine_Vector3_o origin, float radius, UnityEngine_Vector3_o direction, float maxDistance, int32_t layerMask, const MethodInfo* method);
App_GroundAttribute_o* App_Map__GetGroundAttribute (UnityEngine_RaycastHit_o* hit, const MethodInfo* method);
bool App_Map__CanEnterTerrain (App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
System_String_o* App_Map__GetAttributeName (UnityEngine_RaycastHit_o hit, const MethodInfo* method);
void App_Map__SetEnable (UnityEngine_Transform_o* transform, bool enable, int32_t renderMask, int32_t colliderMask, const MethodInfo* method);
void App_Map__SetRenderEnable (UnityEngine_Transform_o* transform, bool enable, const MethodInfo* method);
void App_Map__SetColliderEnable (UnityEngine_Transform_o* transform, bool enable, const MethodInfo* method);
int32_t App_Map__GetRange (int32_t x1, int32_t z1, int32_t x2, int32_t z2, const MethodInfo* method);
int32_t App_Map__GetRange (App_Unit_o* unit, App_Unit_o* target, const MethodInfo* method);
int32_t App_Map__GetRange (int32_t x, int32_t z, App_Unit_o* target, const MethodInfo* method);
bool App_Map__IsRange (int32_t attackX, int32_t attackZ, int32_t targetX, int32_t targetZ, int32_t _near_, int32_t _far_, const MethodInfo* method);
bool App_Map__IsRange (int32_t range, int32_t _near_, int32_t _far_, const MethodInfo* method);
bool App_Map__IsRange (App_Unit_o* unit, App_Unit_o* target, int32_t _near_, int32_t _far_, const MethodInfo* method);
bool App_Map__IsRange (int32_t attackUnitX, int32_t attackUnitZ, int32_t attackUnitSize, int32_t targetUnitX, int32_t targetUnitZ, int32_t targetUnitSize, int32_t _near_, int32_t _far_, const MethodInfo* method);
bool App_Map__GetRangePos (App_Unit_o* unit, App_Unit_o* target, int32_t _near_, int32_t _far_, int32_t* attackX, int32_t* attackZ, int32_t* targetX, int32_t* targetZ, const MethodInfo* method);
bool App_Map__GetRangePos (int32_t attackUnitX, int32_t attackUnitZ, int32_t attackUnitSize, int32_t targetUnitX, int32_t targetUnitZ, int32_t targetUnitSize, int32_t _near_, int32_t _far_, int32_t* attackX, int32_t* attackZ, int32_t* targetX, int32_t* targetZ, const MethodInfo* method);
bool App_Map__GetNearestPos (App_Unit_o* attack, App_Unit_o* target, int32_t* attackX, int32_t* attackZ, int32_t* targetX, int32_t* targetZ, const MethodInfo* method);
bool App_Map__GetNearestPos (App_Unit_o* attack, int32_t attackUnitX, int32_t attackUnitZ, App_Unit_o* target, int32_t* attackX, int32_t* attackZ, int32_t* targetX, int32_t* targetZ, const MethodInfo* method);
bool App_Map__GetNearestPos (App_Unit_o* attack, int32_t attackUnitX, int32_t attackUnitZ, App_PokeInspector_o* target, int32_t* attackX, int32_t* attackZ, int32_t* targetX, int32_t* targetZ, const MethodInfo* method);
bool App_Map__GetNearestPos (int32_t attackUnitX, int32_t attackUnitZ, int32_t attackUnitSize, int32_t targetUnitX, int32_t targetUnitZ, int32_t targetUnitSize, int32_t* attackX, int32_t* attackZ, int32_t* targetX, int32_t* targetZ, const MethodInfo* method);
bool App_Map__GetNearestPos (int32_t attackPosX, int32_t attackPosZ, int32_t attackSizeW, int32_t attackSizeH, int32_t targetPosX, int32_t targetPosZ, int32_t targetSizeW, int32_t targetSizeH, int32_t* attackX, int32_t* attackZ, int32_t* targetX, int32_t* targetZ, const MethodInfo* method);
bool App_Map__GetTargetPos (App_Unit_o* unit, int32_t x, int32_t z, App_Unit_o* target, int32_t _near_, int32_t _far_, App_SkillData_o* commandSkill, int32_t* attackX, int32_t* attackZ, int32_t* targetX, int32_t* targetZ, const MethodInfo* method);
bool App_Map__TestTerrainFlag (int32_t x, int32_t z, int32_t flags, const MethodInfo* method);
App_MapObject_o* App_Map__GetCannonObject (int32_t x, int32_t z, const MethodInfo* method);
App_MapObject_o* App_Map__GetCannonObject (UnityEngine_Vector3_o pos, const MethodInfo* method);
bool App_Map__HasBreakable (int32_t x, int32_t z, const MethodInfo* method);
bool App_Map__GetBreakableRect (int32_t x, int32_t z, int32_t* x1, int32_t* z1, int32_t* x2, int32_t* z2, const MethodInfo* method);
void App_Map__RegistGlobalKey (const MethodInfo* method);
void App_Map__CommitGlobalKey (const MethodInfo* method);
UnityEngine_Vector3_o App_Map__BreakableCenterPosition (int32_t x, int32_t z, const MethodInfo* method);
UnityEngine_Vector3_o App_Map__GetUnderPos (int32_t x, int32_t z, const MethodInfo* method);
UnityEngine_Vector3_o App_Map__GetOverPos (int32_t x, int32_t z, const MethodInfo* method);
UnityEngine_Vector3_o App_Map__GetEffectPos (int32_t x, int32_t z, const MethodInfo* method);
void App_Map__SetMaterialFloat (System_String_o* name, System_String_o* material, System_String_o* property, float value, const MethodInfo* method);
void App_Map__SetMaterialColor (System_String_o* name, System_String_o* material, System_String_o* property, UnityEngine_Color_o color, const MethodInfo* method);
void App_Map__UpdateBindBegin (const MethodInfo* method);
void App_Map__UpdateBindEnd (const MethodInfo* method);
bool App_Map__IsUpdateBind (const MethodInfo* method);
bool App_Map__TryCreateOverlap (App_Unit_o* unit, int32_t x, int32_t z, System_String_o* tid, const MethodInfo* method);
bool App_Map__TryCreateOverlap (App_Unit_o* unit, int32_t x, int32_t z, App_TerrainData_o* terrain, const MethodInfo* method);
void App_Map___ctor (App_Map_o* __this, const MethodInfo* method);
void App_Map___cctor (const MethodInfo* method);
