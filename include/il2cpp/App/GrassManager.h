#pragma once

#include "il2cpp.h"

int32_t App_GrassManager__get_ReferenceTransformNum (App_GrassManager_o* __this, const MethodInfo* method);
void App_GrassManager__set_GrassData (App_GrassManager_o* __this, App_GrassData_o* value, const MethodInfo* method);
App_GrassData_o* App_GrassManager__get_GrassData (App_GrassManager_o* __this, const MethodInfo* method);
bool App_GrassManager__get_HasTerrain (App_GrassManager_o* __this, const MethodInfo* method);
void App_GrassManager__Awake (App_GrassManager_o* __this, const MethodInfo* method);
void App_GrassManager__OnEnable (App_GrassManager_o* __this, const MethodInfo* method);
UnityEngine_Material_o* App_GrassManager__GetMaterial (App_GrassManager_o* __this, int32_t index, const MethodInfo* method);
UnityEngine_Texture2D_o* App_GrassManager__GetTexture (App_GrassManager_o* __this, int32_t index, const MethodInfo* method);
void App_GrassManager__SetInteractionCenter (App_GrassManager_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
void App_GrassManager__Setup (App_GrassManager_o* __this, const MethodInfo* method);
UnityEngine_Texture2D_o* App_GrassManager__GetAtlasTexture (UnityEngine_U2D_SpriteAtlas_o* atlas, const MethodInfo* method);
void App_GrassManager__SetupMaterial (App_GrassManager_o* __this, const MethodInfo* method);
void App_GrassManager__UpdateMaterialParameter (App_GrassManager_o* __this, const MethodInfo* method);
void App_GrassManager__UpdateMaterialParameter (App_GrassManager_o* __this, int32_t meshIndex, const MethodInfo* method);
void App_GrassManager__UpdateLightmap (App_GrassManager_o* __this, const MethodInfo* method);
void App_GrassManager__UpdateLightmap (App_GrassManager_o* __this, int32_t meshIndex, const MethodInfo* method);
void App_GrassManager__SetMaterialToChildrenAll (App_GrassManager_o* __this, const MethodInfo* method);
void App_GrassManager__SetMaterialToChildren (App_GrassManager_o* __this, UnityEngine_Transform_o* parent, int32_t meshIndex, const MethodInfo* method);
void App_GrassManager__SetNotEditableToChildren (App_GrassManager_o* __this, const MethodInfo* method);
void App_GrassManager__SetEditableToChildren (App_GrassManager_o* __this, const MethodInfo* method);
void App_GrassManager__SetGrassMaterialKeyword (App_GrassManager_o* __this, int32_t materialIndex, System_String_o* keyword, bool enabled, const MethodInfo* method);
UnityEngine_Transform_o* App_GrassManager__FindGrassMeshParentTransform (App_GrassManager_o* __this, UnityEngine_Transform_o* parent, int32_t meshIndex, const MethodInfo* method);
void App_GrassManager__InitRefrenceTransform (App_GrassManager_o* __this, const MethodInfo* method);
int32_t App_GrassManager__CalcReferenceTransformNum (App_GrassManager_o* __this, const MethodInfo* method);
System_ValueTuple_Transform__int__o App_GrassManager__FindGroundTransform (App_GrassManager_o* __this, int32_t meshIndex, const MethodInfo* method);
int32_t App_GrassManager__FindGroundTransformIndex (App_GrassManager_o* __this, UnityEngine_Transform_o* searchTargetTransform, const MethodInfo* method);
bool App_GrassManager__GetFieldSizeOffset (App_GrassManager_o* __this, UnityEngine_Vector3_o* size, UnityEngine_Vector3_o* offset, const MethodInfo* method);
bool App_GrassManager__GetLightmapData (App_GrassManager_o* __this, int32_t meshIndex, int32_t* index, UnityEngine_Vector4_o* scaleOffset, const MethodInfo* method);
UnityEngine_Texture2D_o* App_GrassManager__FindGroundTexture (App_GrassManager_o* __this, int32_t meshIndex, const MethodInfo* method);
void App_GrassManager___ctor (App_GrassManager_o* __this, const MethodInfo* method);
