#pragma once

#include "il2cpp.h"

void UnityEngine_Rendering_CommandBufferExtensions__Internal_SwitchIntoFastMemory (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o* rt, int32_t fastMemoryFlags, float residency, bool copyContents, const MethodInfo* method);
void UnityEngine_Rendering_CommandBufferExtensions__Internal_SwitchOutOfFastMemory (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o* rt, bool copyContents, const MethodInfo* method);
void UnityEngine_Rendering_CommandBufferExtensions__SwitchIntoFastMemory (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o rid, int32_t fastMemoryFlags, float residency, bool copyContents, const MethodInfo* method);
void UnityEngine_Rendering_CommandBufferExtensions__SwitchOutOfFastMemory (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o rid, bool copyContents, const MethodInfo* method);
