#pragma once

#include "il2cpp.h"

UnityEngine_Rendering_RenderTargetIdentifier_o UnityEngine_Rendering_Universal_Internal_CopyColorPass__get_source (UnityEngine_Rendering_Universal_Internal_CopyColorPass_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_Universal_Internal_CopyColorPass__set_source (UnityEngine_Rendering_Universal_Internal_CopyColorPass_o* __this, UnityEngine_Rendering_RenderTargetIdentifier_o value, const MethodInfo* method);
UnityEngine_Rendering_Universal_RenderTargetHandle_o UnityEngine_Rendering_Universal_Internal_CopyColorPass__get_destination (UnityEngine_Rendering_Universal_Internal_CopyColorPass_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_Universal_Internal_CopyColorPass__set_destination (UnityEngine_Rendering_Universal_Internal_CopyColorPass_o* __this, UnityEngine_Rendering_Universal_RenderTargetHandle_o value, const MethodInfo* method);
void UnityEngine_Rendering_Universal_Internal_CopyColorPass___ctor (UnityEngine_Rendering_Universal_Internal_CopyColorPass_o* __this, int32_t evt, UnityEngine_Material_o* samplingMaterial, UnityEngine_Material_o* copyColorMaterial, const MethodInfo* method);
void UnityEngine_Rendering_Universal_Internal_CopyColorPass__Setup (UnityEngine_Rendering_Universal_Internal_CopyColorPass_o* __this, UnityEngine_Rendering_RenderTargetIdentifier_o source, UnityEngine_Rendering_Universal_RenderTargetHandle_o destination, int32_t downsampling, const MethodInfo* method);
void UnityEngine_Rendering_Universal_Internal_CopyColorPass__OnCameraSetup (UnityEngine_Rendering_Universal_Internal_CopyColorPass_o* __this, UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_Universal_RenderingData_o* renderingData, const MethodInfo* method);
void UnityEngine_Rendering_Universal_Internal_CopyColorPass__Execute (UnityEngine_Rendering_Universal_Internal_CopyColorPass_o* __this, UnityEngine_Rendering_ScriptableRenderContext_o context, UnityEngine_Rendering_Universal_RenderingData_o* renderingData, const MethodInfo* method);
void UnityEngine_Rendering_Universal_Internal_CopyColorPass__OnCameraCleanup (UnityEngine_Rendering_Universal_Internal_CopyColorPass_o* __this, UnityEngine_Rendering_CommandBuffer_o* cmd, const MethodInfo* method);
