#pragma once

#include "il2cpp.h"

int32_t UnityEngine_Rendering_RTHandles__get_maxWidth (const MethodInfo* method);
int32_t UnityEngine_Rendering_RTHandles__get_maxHeight (const MethodInfo* method);
UnityEngine_Rendering_RTHandleProperties_o UnityEngine_Rendering_RTHandles__get_rtHandleProperties (const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandles__Alloc (int32_t width, int32_t height, int32_t slices, int32_t depthBufferBits, int32_t colorFormat, int32_t filterMode, int32_t wrapMode, int32_t dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, int32_t msaaSamples, bool bindTextureMS, bool useDynamicScale, int32_t memoryless, System_String_o* name, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandles__Alloc (UnityEngine_Vector2_o scaleFactor, int32_t slices, int32_t depthBufferBits, int32_t colorFormat, int32_t filterMode, int32_t wrapMode, int32_t dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, int32_t memoryless, System_String_o* name, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandles__Alloc (UnityEngine_Rendering_ScaleFunc_o* scaleFunc, int32_t slices, int32_t depthBufferBits, int32_t colorFormat, int32_t filterMode, int32_t wrapMode, int32_t dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, int32_t memoryless, System_String_o* name, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandles__Alloc (UnityEngine_Texture_o* tex, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandles__Alloc (UnityEngine_RenderTexture_o* tex, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandles__Alloc (UnityEngine_Rendering_RenderTargetIdentifier_o tex, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandles__Alloc (UnityEngine_Rendering_RenderTargetIdentifier_o tex, System_String_o* name, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandles__Alloc (UnityEngine_Rendering_RTHandle_o* tex, const MethodInfo* method);
void UnityEngine_Rendering_RTHandles__Initialize (int32_t width, int32_t height, bool scaledRTsupportsMSAA, int32_t scaledRTMSAASamples, const MethodInfo* method);
void UnityEngine_Rendering_RTHandles__Release (UnityEngine_Rendering_RTHandle_o* rth, const MethodInfo* method);
void UnityEngine_Rendering_RTHandles__SetHardwareDynamicResolutionState (bool hwDynamicResRequested, const MethodInfo* method);
void UnityEngine_Rendering_RTHandles__SetReferenceSize (int32_t width, int32_t height, int32_t msaaSamples, const MethodInfo* method);
void UnityEngine_Rendering_RTHandles__ResetReferenceSize (int32_t width, int32_t height, const MethodInfo* method);
void UnityEngine_Rendering_RTHandles___cctor (const MethodInfo* method);
