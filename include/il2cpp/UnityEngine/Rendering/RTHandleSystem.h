#pragma once

#include "il2cpp.h"

UnityEngine_Rendering_RTHandleProperties_o UnityEngine_Rendering_RTHandleSystem__get_rtHandleProperties (UnityEngine_Rendering_RTHandleSystem_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem___ctor (UnityEngine_Rendering_RTHandleSystem_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem__Dispose (UnityEngine_Rendering_RTHandleSystem_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem__Initialize (UnityEngine_Rendering_RTHandleSystem_o* __this, int32_t width, int32_t height, bool scaledRTsupportsMSAA, int32_t scaledRTMSAASamples, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem__Release (UnityEngine_Rendering_RTHandleSystem_o* __this, UnityEngine_Rendering_RTHandle_o* rth, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem__Remove (UnityEngine_Rendering_RTHandleSystem_o* __this, UnityEngine_Rendering_RTHandle_o* rth, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem__ResetReferenceSize (UnityEngine_Rendering_RTHandleSystem_o* __this, int32_t width, int32_t height, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem__SetReferenceSize (UnityEngine_Rendering_RTHandleSystem_o* __this, int32_t width, int32_t height, int32_t msaaSamples, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem__SetReferenceSize (UnityEngine_Rendering_RTHandleSystem_o* __this, int32_t width, int32_t height, int32_t msaaSamples, bool reset, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem__SetHardwareDynamicResolutionState (UnityEngine_Rendering_RTHandleSystem_o* __this, bool enableHWDynamicRes, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem__SwitchResizeMode (UnityEngine_Rendering_RTHandleSystem_o* __this, UnityEngine_Rendering_RTHandle_o* rth, int32_t mode, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem__DemandResize (UnityEngine_Rendering_RTHandleSystem_o* __this, UnityEngine_Rendering_RTHandle_o* rth, const MethodInfo* method);
int32_t UnityEngine_Rendering_RTHandleSystem__GetMaxWidth (UnityEngine_Rendering_RTHandleSystem_o* __this, const MethodInfo* method);
int32_t UnityEngine_Rendering_RTHandleSystem__GetMaxHeight (UnityEngine_Rendering_RTHandleSystem_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem__Dispose (UnityEngine_Rendering_RTHandleSystem_o* __this, bool disposing, const MethodInfo* method);
void UnityEngine_Rendering_RTHandleSystem__Resize (UnityEngine_Rendering_RTHandleSystem_o* __this, int32_t width, int32_t height, int32_t msaaSamples, bool sizeChanged, bool msaaSampleChanged, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandleSystem__Alloc (UnityEngine_Rendering_RTHandleSystem_o* __this, int32_t width, int32_t height, int32_t slices, int32_t depthBufferBits, int32_t colorFormat, int32_t filterMode, int32_t wrapMode, int32_t dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, int32_t msaaSamples, bool bindTextureMS, bool useDynamicScale, int32_t memoryless, System_String_o* name, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandleSystem__Alloc (UnityEngine_Rendering_RTHandleSystem_o* __this, UnityEngine_Vector2_o scaleFactor, int32_t slices, int32_t depthBufferBits, int32_t colorFormat, int32_t filterMode, int32_t wrapMode, int32_t dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, int32_t memoryless, System_String_o* name, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandleSystem__Alloc (UnityEngine_Rendering_RTHandleSystem_o* __this, UnityEngine_Rendering_ScaleFunc_o* scaleFunc, int32_t slices, int32_t depthBufferBits, int32_t colorFormat, int32_t filterMode, int32_t wrapMode, int32_t dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, int32_t memoryless, System_String_o* name, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandleSystem__AllocAutoSizedRenderTexture (UnityEngine_Rendering_RTHandleSystem_o* __this, int32_t width, int32_t height, int32_t slices, int32_t depthBufferBits, int32_t colorFormat, int32_t filterMode, int32_t wrapMode, int32_t dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, int32_t memoryless, System_String_o* name, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandleSystem__Alloc (UnityEngine_Rendering_RTHandleSystem_o* __this, UnityEngine_RenderTexture_o* texture, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandleSystem__Alloc (UnityEngine_Rendering_RTHandleSystem_o* __this, UnityEngine_Texture_o* texture, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandleSystem__Alloc (UnityEngine_Rendering_RTHandleSystem_o* __this, UnityEngine_Rendering_RenderTargetIdentifier_o texture, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandleSystem__Alloc (UnityEngine_Rendering_RTHandleSystem_o* __this, UnityEngine_Rendering_RenderTargetIdentifier_o texture, System_String_o* name, const MethodInfo* method);
UnityEngine_Rendering_RTHandle_o* UnityEngine_Rendering_RTHandleSystem__Alloc (UnityEngine_Rendering_RTHandle_o* tex, const MethodInfo* method);
System_String_o* UnityEngine_Rendering_RTHandleSystem__DumpRTInfo (UnityEngine_Rendering_RTHandleSystem_o* __this, const MethodInfo* method);
