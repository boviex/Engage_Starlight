#pragma once

#include "il2cpp.h"

System_String_o* UnityEngine_PhysicsScene2D__ToString (UnityEngine_PhysicsScene2D_o __this, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene2D__GetHashCode (UnityEngine_PhysicsScene2D_o __this, const MethodInfo* method);
bool UnityEngine_PhysicsScene2D__Equals (UnityEngine_PhysicsScene2D_o __this, Il2CppObject* other, const MethodInfo* method);
bool UnityEngine_PhysicsScene2D__Equals (UnityEngine_PhysicsScene2D_o __this, UnityEngine_PhysicsScene2D_o other, const MethodInfo* method);
UnityEngine_RaycastHit2D_o UnityEngine_PhysicsScene2D__Raycast (UnityEngine_PhysicsScene2D_o __this, UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, float distance, int32_t layerMask, const MethodInfo* method);
UnityEngine_RaycastHit2D_o UnityEngine_PhysicsScene2D__Raycast (UnityEngine_PhysicsScene2D_o __this, UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, float distance, UnityEngine_ContactFilter2D_o contactFilter, const MethodInfo* method);
UnityEngine_RaycastHit2D_o UnityEngine_PhysicsScene2D__Raycast_Internal (UnityEngine_PhysicsScene2D_o physicsScene, UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, float distance, UnityEngine_ContactFilter2D_o contactFilter, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene2D__Raycast (UnityEngine_PhysicsScene2D_o __this, UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, float distance, UnityEngine_ContactFilter2D_o contactFilter, UnityEngine_RaycastHit2D_array* results, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene2D__RaycastArray_Internal (UnityEngine_PhysicsScene2D_o physicsScene, UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, float distance, UnityEngine_ContactFilter2D_o contactFilter, UnityEngine_RaycastHit2D_array* results, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene2D__Raycast (UnityEngine_PhysicsScene2D_o __this, UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, float distance, UnityEngine_ContactFilter2D_o contactFilter, System_Collections_Generic_List_RaycastHit2D__o* results, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene2D__RaycastList_Internal (UnityEngine_PhysicsScene2D_o physicsScene, UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, float distance, UnityEngine_ContactFilter2D_o contactFilter, System_Collections_Generic_List_RaycastHit2D__o* results, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene2D__GetRayIntersection (UnityEngine_PhysicsScene2D_o __this, UnityEngine_Ray_o ray, float distance, UnityEngine_RaycastHit2D_array* results, int32_t layerMask, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene2D__GetRayIntersectionArray_Internal (UnityEngine_PhysicsScene2D_o physicsScene, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, float distance, int32_t layerMask, UnityEngine_RaycastHit2D_array* results, const MethodInfo* method);
void UnityEngine_PhysicsScene2D__Raycast_Internal_Injected (UnityEngine_PhysicsScene2D_o* physicsScene, UnityEngine_Vector2_o* origin, UnityEngine_Vector2_o* direction, float distance, UnityEngine_ContactFilter2D_o* contactFilter, UnityEngine_RaycastHit2D_o* ret, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene2D__RaycastArray_Internal_Injected (UnityEngine_PhysicsScene2D_o* physicsScene, UnityEngine_Vector2_o* origin, UnityEngine_Vector2_o* direction, float distance, UnityEngine_ContactFilter2D_o* contactFilter, UnityEngine_RaycastHit2D_array* results, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene2D__RaycastList_Internal_Injected (UnityEngine_PhysicsScene2D_o* physicsScene, UnityEngine_Vector2_o* origin, UnityEngine_Vector2_o* direction, float distance, UnityEngine_ContactFilter2D_o* contactFilter, System_Collections_Generic_List_RaycastHit2D__o* results, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene2D__GetRayIntersectionArray_Internal_Injected (UnityEngine_PhysicsScene2D_o* physicsScene, UnityEngine_Vector3_o* origin, UnityEngine_Vector3_o* direction, float distance, int32_t layerMask, UnityEngine_RaycastHit2D_array* results, const MethodInfo* method);
