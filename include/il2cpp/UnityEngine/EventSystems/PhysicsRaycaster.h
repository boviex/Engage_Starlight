#pragma once

#include "il2cpp.h"

void UnityEngine_EventSystems_PhysicsRaycaster___ctor (UnityEngine_EventSystems_PhysicsRaycaster_o* __this, const MethodInfo* method);
UnityEngine_Camera_o* UnityEngine_EventSystems_PhysicsRaycaster__get_eventCamera (UnityEngine_EventSystems_PhysicsRaycaster_o* __this, const MethodInfo* method);
int32_t UnityEngine_EventSystems_PhysicsRaycaster__get_depth (UnityEngine_EventSystems_PhysicsRaycaster_o* __this, const MethodInfo* method);
int32_t UnityEngine_EventSystems_PhysicsRaycaster__get_finalEventMask (UnityEngine_EventSystems_PhysicsRaycaster_o* __this, const MethodInfo* method);
UnityEngine_LayerMask_o UnityEngine_EventSystems_PhysicsRaycaster__get_eventMask (UnityEngine_EventSystems_PhysicsRaycaster_o* __this, const MethodInfo* method);
void UnityEngine_EventSystems_PhysicsRaycaster__set_eventMask (UnityEngine_EventSystems_PhysicsRaycaster_o* __this, UnityEngine_LayerMask_o value, const MethodInfo* method);
int32_t UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections (UnityEngine_EventSystems_PhysicsRaycaster_o* __this, const MethodInfo* method);
void UnityEngine_EventSystems_PhysicsRaycaster__set_maxRayIntersections (UnityEngine_EventSystems_PhysicsRaycaster_o* __this, int32_t value, const MethodInfo* method);
bool UnityEngine_EventSystems_PhysicsRaycaster__ComputeRayAndDistance (UnityEngine_EventSystems_PhysicsRaycaster_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, UnityEngine_Ray_o* ray, int32_t* eventDisplayIndex, float* distanceToClipPlane, const MethodInfo* method);
void UnityEngine_EventSystems_PhysicsRaycaster__Raycast (UnityEngine_EventSystems_PhysicsRaycaster_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, System_Collections_Generic_List_RaycastResult__o* resultAppendList, const MethodInfo* method);
