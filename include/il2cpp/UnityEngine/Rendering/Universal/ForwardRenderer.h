#pragma once

#include "il2cpp.h"

int32_t UnityEngine_Rendering_Universal_ForwardRenderer__get_renderingMode (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, const MethodInfo* method);
int32_t UnityEngine_Rendering_Universal_ForwardRenderer__get_actualRenderingMode (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, const MethodInfo* method);
bool UnityEngine_Rendering_Universal_ForwardRenderer__get_accurateGbufferNormals (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_Universal_ForwardRenderer___ctor (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, UnityEngine_Rendering_Universal_ForwardRendererData_o* data, const MethodInfo* method);
void UnityEngine_Rendering_Universal_ForwardRenderer__Dispose (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, bool disposing, const MethodInfo* method);
void UnityEngine_Rendering_Universal_ForwardRenderer__Setup (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, UnityEngine_Rendering_ScriptableRenderContext_o context, UnityEngine_Rendering_Universal_RenderingData_o* renderingData, const MethodInfo* method);
void UnityEngine_Rendering_Universal_ForwardRenderer__SetupLights (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, UnityEngine_Rendering_ScriptableRenderContext_o context, UnityEngine_Rendering_Universal_RenderingData_o* renderingData, const MethodInfo* method);
void UnityEngine_Rendering_Universal_ForwardRenderer__SetupCullingParameters (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, UnityEngine_Rendering_ScriptableCullingParameters_o* cullingParameters, UnityEngine_Rendering_Universal_CameraData_o* cameraData, const MethodInfo* method);
void UnityEngine_Rendering_Universal_ForwardRenderer__FinishRendering (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, UnityEngine_Rendering_CommandBuffer_o* cmd, const MethodInfo* method);
void UnityEngine_Rendering_Universal_ForwardRenderer__EnqueueDeferred (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, UnityEngine_Rendering_Universal_RenderingData_o* renderingData, bool hasDepthPrepass, bool applyMainShadow, bool applyAdditionalShadow, const MethodInfo* method);
UnityEngine_Rendering_Universal_ForwardRenderer_RenderPassInputSummary_o UnityEngine_Rendering_Universal_ForwardRenderer__GetRenderPassInputs (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, UnityEngine_Rendering_Universal_RenderingData_o* renderingData, const MethodInfo* method);
void UnityEngine_Rendering_Universal_ForwardRenderer__CreateCameraRenderTarget (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, UnityEngine_Rendering_ScriptableRenderContext_o context, UnityEngine_RenderTextureDescriptor_o* descriptor, bool createColor, bool createDepth, const MethodInfo* method);
bool UnityEngine_Rendering_Universal_ForwardRenderer__PlatformRequiresExplicitMsaaResolve (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, const MethodInfo* method);
bool UnityEngine_Rendering_Universal_ForwardRenderer__RequiresIntermediateColorTexture (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, UnityEngine_Rendering_Universal_CameraData_o* cameraData, const MethodInfo* method);
bool UnityEngine_Rendering_Universal_ForwardRenderer__CanCopyDepth (UnityEngine_Rendering_Universal_ForwardRenderer_o* __this, UnityEngine_Rendering_Universal_CameraData_o* cameraData, const MethodInfo* method);
