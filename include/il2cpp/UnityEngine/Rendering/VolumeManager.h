#pragma once

#include "il2cpp.h"

UnityEngine_Rendering_VolumeManager_o* UnityEngine_Rendering_VolumeManager__get_instance (const MethodInfo* method);
UnityEngine_Rendering_VolumeStack_o* UnityEngine_Rendering_VolumeManager__get_stack (UnityEngine_Rendering_VolumeManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__set_stack (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_Rendering_VolumeStack_o* value, const MethodInfo* method);
System_Collections_Generic_IEnumerable_Type__o* UnityEngine_Rendering_VolumeManager__get_baseComponentTypes (UnityEngine_Rendering_VolumeManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__set_baseComponentTypes (UnityEngine_Rendering_VolumeManager_o* __this, System_Collections_Generic_IEnumerable_Type__o* value, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager___ctor (UnityEngine_Rendering_VolumeManager_o* __this, const MethodInfo* method);
UnityEngine_Rendering_VolumeStack_o* UnityEngine_Rendering_VolumeManager__CreateStack (UnityEngine_Rendering_VolumeManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__DestroyStack (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_Rendering_VolumeStack_o* stack, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__ReloadBaseTypes (UnityEngine_Rendering_VolumeManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__Register (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_Rendering_Volume_o* volume, int32_t layer, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__Unregister (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_Rendering_Volume_o* volume, int32_t layer, const MethodInfo* method);
bool UnityEngine_Rendering_VolumeManager__IsComponentActiveInMask_object_ (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_LayerMask_o layerMask, const MethodInfo_386BAD0* method);
void UnityEngine_Rendering_VolumeManager__SetLayerDirty (UnityEngine_Rendering_VolumeManager_o* __this, int32_t layer, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__UpdateVolumeLayer (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_Rendering_Volume_o* volume, int32_t prevLayer, int32_t newLayer, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__OverrideData (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_Rendering_VolumeStack_o* stack, System_Collections_Generic_List_VolumeComponent__o* components, float interpFactor, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__ReplaceData (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_Rendering_VolumeStack_o* stack, System_Collections_Generic_List_VolumeComponent__o* components, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__CheckBaseTypes (UnityEngine_Rendering_VolumeManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__CheckStack (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_Rendering_VolumeStack_o* stack, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__Update (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_Transform_o* trigger, UnityEngine_LayerMask_o layerMask, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__Update (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_Rendering_VolumeStack_o* stack, UnityEngine_Transform_o* trigger, UnityEngine_LayerMask_o layerMask, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__UpdateByVolumeProfile (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_Rendering_VolumeProfile_o* profile, const MethodInfo* method);
UnityEngine_Rendering_Volume_array* UnityEngine_Rendering_VolumeManager__GetVolumes (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_LayerMask_o layerMask, const MethodInfo* method);
System_Collections_Generic_List_Volume__o* UnityEngine_Rendering_VolumeManager__GrabVolumes (UnityEngine_Rendering_VolumeManager_o* __this, UnityEngine_LayerMask_o mask, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager__SortByPriority (System_Collections_Generic_List_Volume__o* volumes, const MethodInfo* method);
bool UnityEngine_Rendering_VolumeManager__IsVolumeRenderedByCamera (UnityEngine_Rendering_Volume_o* volume, UnityEngine_Camera_o* camera, const MethodInfo* method);
void UnityEngine_Rendering_VolumeManager___cctor (const MethodInfo* method);