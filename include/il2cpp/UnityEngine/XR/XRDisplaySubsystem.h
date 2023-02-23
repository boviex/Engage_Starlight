#pragma once

#include "il2cpp.h"

void UnityEngine_XR_XRDisplaySubsystem__InvokeDisplayFocusChanged (UnityEngine_XR_XRDisplaySubsystem_o* __this, bool focus, const MethodInfo* method);
void UnityEngine_XR_XRDisplaySubsystem__set_scaleOfAllRenderTargets (UnityEngine_XR_XRDisplaySubsystem_o* __this, float value, const MethodInfo* method);
void UnityEngine_XR_XRDisplaySubsystem__set_zNear (UnityEngine_XR_XRDisplaySubsystem_o* __this, float value, const MethodInfo* method);
void UnityEngine_XR_XRDisplaySubsystem__set_zFar (UnityEngine_XR_XRDisplaySubsystem_o* __this, float value, const MethodInfo* method);
void UnityEngine_XR_XRDisplaySubsystem__set_sRGB (UnityEngine_XR_XRDisplaySubsystem_o* __this, bool value, const MethodInfo* method);
void UnityEngine_XR_XRDisplaySubsystem__set_textureLayout (UnityEngine_XR_XRDisplaySubsystem_o* __this, int32_t value, const MethodInfo* method);
void UnityEngine_XR_XRDisplaySubsystem__SetMSAALevel (UnityEngine_XR_XRDisplaySubsystem_o* __this, int32_t level, const MethodInfo* method);
void UnityEngine_XR_XRDisplaySubsystem__set_disableLegacyRenderer (UnityEngine_XR_XRDisplaySubsystem_o* __this, bool value, const MethodInfo* method);
int32_t UnityEngine_XR_XRDisplaySubsystem__GetRenderPassCount (UnityEngine_XR_XRDisplaySubsystem_o* __this, const MethodInfo* method);
void UnityEngine_XR_XRDisplaySubsystem__GetRenderPass (UnityEngine_XR_XRDisplaySubsystem_o* __this, int32_t renderPassIndex, UnityEngine_XR_XRDisplaySubsystem_XRRenderPass_o* renderPass, const MethodInfo* method);
bool UnityEngine_XR_XRDisplaySubsystem__Internal_TryGetRenderPass (UnityEngine_XR_XRDisplaySubsystem_o* __this, int32_t renderPassIndex, UnityEngine_XR_XRDisplaySubsystem_XRRenderPass_o* renderPass, const MethodInfo* method);
void UnityEngine_XR_XRDisplaySubsystem__GetCullingParameters (UnityEngine_XR_XRDisplaySubsystem_o* __this, UnityEngine_Camera_o* camera, int32_t cullingPassIndex, UnityEngine_Rendering_ScriptableCullingParameters_o* scriptableCullingParameters, const MethodInfo* method);
bool UnityEngine_XR_XRDisplaySubsystem__Internal_TryGetCullingParams (UnityEngine_XR_XRDisplaySubsystem_o* __this, UnityEngine_Camera_o* camera, int32_t cullingPassIndex, UnityEngine_Rendering_ScriptableCullingParameters_o* scriptableCullingParameters, const MethodInfo* method);
int32_t UnityEngine_XR_XRDisplaySubsystem__GetPreferredMirrorBlitMode (UnityEngine_XR_XRDisplaySubsystem_o* __this, const MethodInfo* method);
bool UnityEngine_XR_XRDisplaySubsystem__GetMirrorViewBlitDesc (UnityEngine_XR_XRDisplaySubsystem_o* __this, UnityEngine_RenderTexture_o* mirrorRt, UnityEngine_XR_XRDisplaySubsystem_XRMirrorViewBlitDesc_o* outDesc, int32_t mode, const MethodInfo* method);
bool UnityEngine_XR_XRDisplaySubsystem__AddGraphicsThreadMirrorViewBlit (UnityEngine_XR_XRDisplaySubsystem_o* __this, UnityEngine_Rendering_CommandBuffer_o* cmd, bool allowGraphicsStateInvalidate, int32_t mode, const MethodInfo* method);
void UnityEngine_XR_XRDisplaySubsystem___ctor (UnityEngine_XR_XRDisplaySubsystem_o* __this, const MethodInfo* method);
