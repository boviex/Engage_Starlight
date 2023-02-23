#pragma once

#include "il2cpp.h"

UnityEngine_Vector2_o UnityEngine_Rendering_RTHandle__get_scaleFactor (UnityEngine_Rendering_RTHandle_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_RTHandle__set_scaleFactor (UnityEngine_Rendering_RTHandle_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
bool UnityEngine_Rendering_RTHandle__get_useScaling (UnityEngine_Rendering_RTHandle_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_RTHandle__set_useScaling (UnityEngine_Rendering_RTHandle_o* __this, bool value, const MethodInfo* method);
UnityEngine_Vector2Int_o UnityEngine_Rendering_RTHandle__get_referenceSize (UnityEngine_Rendering_RTHandle_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_RTHandle__set_referenceSize (UnityEngine_Rendering_RTHandle_o* __this, UnityEngine_Vector2Int_o value, const MethodInfo* method);
UnityEngine_Rendering_RTHandleProperties_o UnityEngine_Rendering_RTHandle__get_rtHandleProperties (UnityEngine_Rendering_RTHandle_o* __this, const MethodInfo* method);
UnityEngine_RenderTexture_o* UnityEngine_Rendering_RTHandle__get_rt (UnityEngine_Rendering_RTHandle_o* __this, const MethodInfo* method);
UnityEngine_Rendering_RenderTargetIdentifier_o UnityEngine_Rendering_RTHandle__get_nameID (UnityEngine_Rendering_RTHandle_o* __this, const MethodInfo* method);
System_String_o* UnityEngine_Rendering_RTHandle__get_name (UnityEngine_Rendering_RTHandle_o* __this, const MethodInfo* method);
bool UnityEngine_Rendering_RTHandle__get_isMSAAEnabled (UnityEngine_Rendering_RTHandle_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_RTHandle___ctor (UnityEngine_Rendering_RTHandle_o* __this, UnityEngine_Rendering_RTHandleSystem_o* owner, const MethodInfo* method);
UnityEngine_RenderTexture_o* UnityEngine_Rendering_RTHandle__op_Implicit (UnityEngine_Rendering_RTHandle_o* handle, const MethodInfo* method);
UnityEngine_Texture_o* UnityEngine_Rendering_RTHandle__op_Implicit (UnityEngine_Rendering_RTHandle_o* handle, const MethodInfo* method);
UnityEngine_Rendering_RenderTargetIdentifier_o UnityEngine_Rendering_RTHandle__op_Implicit (UnityEngine_Rendering_RTHandle_o* handle, const MethodInfo* method);
void UnityEngine_Rendering_RTHandle__SetRenderTexture (UnityEngine_Rendering_RTHandle_o* __this, UnityEngine_RenderTexture_o* rt, const MethodInfo* method);
void UnityEngine_Rendering_RTHandle__SetTexture (UnityEngine_Rendering_RTHandle_o* __this, UnityEngine_Texture_o* tex, const MethodInfo* method);
void UnityEngine_Rendering_RTHandle__SetTexture (UnityEngine_Rendering_RTHandle_o* __this, UnityEngine_Rendering_RenderTargetIdentifier_o tex, const MethodInfo* method);
void UnityEngine_Rendering_RTHandle__Release (UnityEngine_Rendering_RTHandle_o* __this, const MethodInfo* method);
UnityEngine_Vector2Int_o UnityEngine_Rendering_RTHandle__GetScaledSize (UnityEngine_Rendering_RTHandle_o* __this, UnityEngine_Vector2Int_o refSize, const MethodInfo* method);
void UnityEngine_Rendering_RTHandle__SwitchToFastMemory (UnityEngine_Rendering_RTHandle_o* __this, UnityEngine_Rendering_CommandBuffer_o* cmd, float residencyFraction, int32_t flags, bool copyContents, const MethodInfo* method);
void UnityEngine_Rendering_RTHandle__CopyToFastMemory (UnityEngine_Rendering_RTHandle_o* __this, UnityEngine_Rendering_CommandBuffer_o* cmd, float residencyFraction, int32_t flags, const MethodInfo* method);
void UnityEngine_Rendering_RTHandle__SwitchOutFastMemory (UnityEngine_Rendering_RTHandle_o* __this, UnityEngine_Rendering_CommandBuffer_o* cmd, bool copyContents, const MethodInfo* method);
