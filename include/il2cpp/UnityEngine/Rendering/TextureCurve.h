#pragma once

#include "il2cpp.h"

int32_t UnityEngine_Rendering_TextureCurve__get_length (UnityEngine_Rendering_TextureCurve_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_TextureCurve__set_length (UnityEngine_Rendering_TextureCurve_o* __this, int32_t value, const MethodInfo* method);
UnityEngine_Keyframe_o UnityEngine_Rendering_TextureCurve__get_Item (UnityEngine_Rendering_TextureCurve_o* __this, int32_t index, const MethodInfo* method);
void UnityEngine_Rendering_TextureCurve___ctor (UnityEngine_Rendering_TextureCurve_o* __this, UnityEngine_AnimationCurve_o* baseCurve, float zeroValue, bool loop, UnityEngine_Vector2_o* bounds, const MethodInfo* method);
void UnityEngine_Rendering_TextureCurve___ctor (UnityEngine_Rendering_TextureCurve_o* __this, UnityEngine_Keyframe_array* keys, float zeroValue, bool loop, UnityEngine_Vector2_o* bounds, const MethodInfo* method);
void UnityEngine_Rendering_TextureCurve__Finalize (UnityEngine_Rendering_TextureCurve_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_TextureCurve__Dispose (UnityEngine_Rendering_TextureCurve_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_TextureCurve__Release (UnityEngine_Rendering_TextureCurve_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_TextureCurve__SetDirty (UnityEngine_Rendering_TextureCurve_o* __this, const MethodInfo* method);
int32_t UnityEngine_Rendering_TextureCurve__GetTextureFormat (const MethodInfo* method);
UnityEngine_Texture2D_o* UnityEngine_Rendering_TextureCurve__GetTexture (UnityEngine_Rendering_TextureCurve_o* __this, const MethodInfo* method);
float UnityEngine_Rendering_TextureCurve__Evaluate (UnityEngine_Rendering_TextureCurve_o* __this, float time, const MethodInfo* method);
int32_t UnityEngine_Rendering_TextureCurve__AddKey (UnityEngine_Rendering_TextureCurve_o* __this, float time, float value, const MethodInfo* method);
int32_t UnityEngine_Rendering_TextureCurve__MoveKey (UnityEngine_Rendering_TextureCurve_o* __this, int32_t index, UnityEngine_Keyframe_o* key, const MethodInfo* method);
void UnityEngine_Rendering_TextureCurve__RemoveKey (UnityEngine_Rendering_TextureCurve_o* __this, int32_t index, const MethodInfo* method);
void UnityEngine_Rendering_TextureCurve__SmoothTangents (UnityEngine_Rendering_TextureCurve_o* __this, int32_t index, float weight, const MethodInfo* method);
