#pragma once

#include "il2cpp.h"

UnityEngine_Cubemap_o* UnityEngine_Rendering_CoreUtils__get_blackCubeTexture (const MethodInfo* method);
UnityEngine_Cubemap_o* UnityEngine_Rendering_CoreUtils__get_magentaCubeTexture (const MethodInfo* method);
UnityEngine_CubemapArray_o* UnityEngine_Rendering_CoreUtils__get_magentaCubeTextureArray (const MethodInfo* method);
UnityEngine_Cubemap_o* UnityEngine_Rendering_CoreUtils__get_whiteCubeTexture (const MethodInfo* method);
UnityEngine_RenderTexture_o* UnityEngine_Rendering_CoreUtils__get_emptyUAV (const MethodInfo* method);
UnityEngine_Texture3D_o* UnityEngine_Rendering_CoreUtils__get_blackVolumeTexture (const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__ClearRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, int32_t clearFlag, UnityEngine_Color_o clearColor, const MethodInfo* method);
int32_t UnityEngine_Rendering_CoreUtils__FixupDepthSlice (int32_t depthSlice, UnityEngine_Rendering_RTHandle_o* buffer, const MethodInfo* method);
int32_t UnityEngine_Rendering_CoreUtils__FixupDepthSlice (int32_t depthSlice, int32_t cubemapFace, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o buffer, int32_t clearFlag, UnityEngine_Color_o clearColor, int32_t miplevel, int32_t cubemapFace, int32_t depthSlice, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o buffer, int32_t clearFlag, int32_t miplevel, int32_t cubemapFace, int32_t depthSlice, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o colorBuffer, UnityEngine_Rendering_RenderTargetIdentifier_o depthBuffer, int32_t miplevel, int32_t cubemapFace, int32_t depthSlice, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o colorBuffer, UnityEngine_Rendering_RenderTargetIdentifier_o depthBuffer, int32_t clearFlag, int32_t miplevel, int32_t cubemapFace, int32_t depthSlice, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o colorBuffer, UnityEngine_Rendering_RenderTargetIdentifier_o depthBuffer, int32_t clearFlag, UnityEngine_Color_o clearColor, int32_t miplevel, int32_t cubemapFace, int32_t depthSlice, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_array* colorBuffers, UnityEngine_Rendering_RenderTargetIdentifier_o depthBuffer, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_array* colorBuffers, UnityEngine_Rendering_RenderTargetIdentifier_o depthBuffer, int32_t clearFlag, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_array* colorBuffers, UnityEngine_Rendering_RenderTargetIdentifier_o depthBuffer, int32_t clearFlag, UnityEngine_Color_o clearColor, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o buffer, int32_t loadAction, int32_t storeAction, int32_t clearFlag, UnityEngine_Color_o clearColor, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o buffer, int32_t loadAction, int32_t storeAction, int32_t clearFlag, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o colorBuffer, int32_t colorLoadAction, int32_t colorStoreAction, UnityEngine_Rendering_RenderTargetIdentifier_o depthBuffer, int32_t depthLoadAction, int32_t depthStoreAction, int32_t clearFlag, UnityEngine_Color_o clearColor, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_o colorBuffer, int32_t colorLoadAction, int32_t colorStoreAction, UnityEngine_Rendering_RenderTargetIdentifier_o depthBuffer, int32_t depthLoadAction, int32_t depthStoreAction, int32_t clearFlag, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetViewportAndClear (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RTHandle_o* buffer, int32_t clearFlag, UnityEngine_Color_o clearColor, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RTHandle_o* buffer, int32_t clearFlag, UnityEngine_Color_o clearColor, int32_t miplevel, int32_t cubemapFace, int32_t depthSlice, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RTHandle_o* buffer, int32_t clearFlag, int32_t miplevel, int32_t cubemapFace, int32_t depthSlice, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RTHandle_o* colorBuffer, UnityEngine_Rendering_RTHandle_o* depthBuffer, int32_t miplevel, int32_t cubemapFace, int32_t depthSlice, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RTHandle_o* colorBuffer, UnityEngine_Rendering_RTHandle_o* depthBuffer, int32_t clearFlag, int32_t miplevel, int32_t cubemapFace, int32_t depthSlice, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RTHandle_o* colorBuffer, UnityEngine_Rendering_RTHandle_o* depthBuffer, int32_t clearFlag, UnityEngine_Color_o clearColor, int32_t miplevel, int32_t cubemapFace, int32_t depthSlice, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_array* colorBuffers, UnityEngine_Rendering_RTHandle_o* depthBuffer, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_array* colorBuffers, UnityEngine_Rendering_RTHandle_o* depthBuffer, int32_t clearFlag, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetRenderTarget (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RenderTargetIdentifier_array* colorBuffers, UnityEngine_Rendering_RTHandle_o* depthBuffer, int32_t clearFlag, UnityEngine_Color_o clearColor, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetViewport (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Rendering_RTHandle_o* target, const MethodInfo* method);
System_String_o* UnityEngine_Rendering_CoreUtils__GetRenderTargetAutoName (int32_t width, int32_t height, int32_t depth, int32_t format, System_String_o* name, bool mips, bool enableMSAA, int32_t msaaSamples, const MethodInfo* method);
System_String_o* UnityEngine_Rendering_CoreUtils__GetRenderTargetAutoName (int32_t width, int32_t height, int32_t depth, int32_t format, System_String_o* name, bool mips, bool enableMSAA, int32_t msaaSamples, const MethodInfo* method);
System_String_o* UnityEngine_Rendering_CoreUtils__GetRenderTargetAutoName (int32_t width, int32_t height, int32_t depth, System_String_o* format, System_String_o* name, bool mips, bool enableMSAA, int32_t msaaSamples, const MethodInfo* method);
System_String_o* UnityEngine_Rendering_CoreUtils__GetTextureAutoName (int32_t width, int32_t height, int32_t format, int32_t dim, System_String_o* name, bool mips, int32_t depth, const MethodInfo* method);
System_String_o* UnityEngine_Rendering_CoreUtils__GetTextureAutoName (int32_t width, int32_t height, int32_t format, int32_t dim, System_String_o* name, bool mips, int32_t depth, const MethodInfo* method);
System_String_o* UnityEngine_Rendering_CoreUtils__GetTextureAutoName (int32_t width, int32_t height, System_String_o* format, int32_t dim, System_String_o* name, bool mips, int32_t depth, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__ClearCubemap (UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_RenderTexture_o* renderTexture, UnityEngine_Color_o clearColor, bool clearMips, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__DrawFullScreen (UnityEngine_Rendering_CommandBuffer_o* commandBuffer, UnityEngine_Material_o* material, UnityEngine_MaterialPropertyBlock_o* properties, int32_t shaderPassId, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__DrawFullScreen (UnityEngine_Rendering_CommandBuffer_o* commandBuffer, UnityEngine_Material_o* material, UnityEngine_Rendering_RenderTargetIdentifier_o colorBuffer, UnityEngine_MaterialPropertyBlock_o* properties, int32_t shaderPassId, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__DrawFullScreen (UnityEngine_Rendering_CommandBuffer_o* commandBuffer, UnityEngine_Material_o* material, UnityEngine_Rendering_RenderTargetIdentifier_o colorBuffer, UnityEngine_Rendering_RenderTargetIdentifier_o depthStencilBuffer, UnityEngine_MaterialPropertyBlock_o* properties, int32_t shaderPassId, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__DrawFullScreen (UnityEngine_Rendering_CommandBuffer_o* commandBuffer, UnityEngine_Material_o* material, UnityEngine_Rendering_RenderTargetIdentifier_array* colorBuffers, UnityEngine_Rendering_RenderTargetIdentifier_o depthStencilBuffer, UnityEngine_MaterialPropertyBlock_o* properties, int32_t shaderPassId, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__DrawFullScreen (UnityEngine_Rendering_CommandBuffer_o* commandBuffer, UnityEngine_Material_o* material, UnityEngine_Rendering_RenderTargetIdentifier_array* colorBuffers, UnityEngine_MaterialPropertyBlock_o* properties, int32_t shaderPassId, const MethodInfo* method);
UnityEngine_Color_o UnityEngine_Rendering_CoreUtils__ConvertSRGBToActiveColorSpace (UnityEngine_Color_o color, const MethodInfo* method);
UnityEngine_Color_o UnityEngine_Rendering_CoreUtils__ConvertLinearToActiveColorSpace (UnityEngine_Color_o color, const MethodInfo* method);
UnityEngine_Material_o* UnityEngine_Rendering_CoreUtils__CreateEngineMaterial (System_String_o* shaderPath, const MethodInfo* method);
UnityEngine_Material_o* UnityEngine_Rendering_CoreUtils__CreateEngineMaterial (UnityEngine_Shader_o* shader, const MethodInfo* method);
bool UnityEngine_Rendering_CoreUtils__HasFlag_object_ (Il2CppObject* mask, Il2CppObject* flag, const MethodInfo_22C3E80* method);
void UnityEngine_Rendering_CoreUtils__Swap_int_ (int32_t* a, int32_t* b, const MethodInfo_22C3FA0* method);
void UnityEngine_Rendering_CoreUtils__Swap_object_ (Il2CppObject** a, Il2CppObject** b, const MethodInfo_22C3FC0* method);
void UnityEngine_Rendering_CoreUtils__SetKeyword (UnityEngine_Rendering_CommandBuffer_o* cmd, System_String_o* keyword, bool state, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetKeyword (UnityEngine_Material_o* material, System_String_o* keyword, bool state, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__SetKeyword (UnityEngine_ComputeShader_o* cs, System_String_o* keyword, bool state, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__Destroy (UnityEngine_Object_o* obj, const MethodInfo* method);
System_Collections_Generic_IEnumerable_Type__o* UnityEngine_Rendering_CoreUtils__GetAllAssemblyTypes (const MethodInfo* method);
System_Collections_Generic_IEnumerable_Type__o* UnityEngine_Rendering_CoreUtils__GetAllTypesDerivedFrom_object_ (const MethodInfo_22C3C60* method);
System_Collections_Generic_IEnumerable_Type__o* UnityEngine_Rendering_CoreUtils__GetAllTypesDerivedFrom_VolumeComponent_ (const MethodInfo_22C3C60* method);
void UnityEngine_Rendering_CoreUtils__SafeRelease (UnityEngine_ComputeBuffer_o* buffer, const MethodInfo* method);
UnityEngine_Mesh_o* UnityEngine_Rendering_CoreUtils__CreateCubeMesh (UnityEngine_Vector3_o min, UnityEngine_Vector3_o max, const MethodInfo* method);
bool UnityEngine_Rendering_CoreUtils__ArePostProcessesEnabled (UnityEngine_Camera_o* camera, const MethodInfo* method);
bool UnityEngine_Rendering_CoreUtils__AreAnimatedMaterialsEnabled (UnityEngine_Camera_o* camera, const MethodInfo* method);
bool UnityEngine_Rendering_CoreUtils__IsSceneLightingDisabled (UnityEngine_Camera_o* camera, const MethodInfo* method);
bool UnityEngine_Rendering_CoreUtils__IsLightOverlapDebugEnabled (UnityEngine_Camera_o* camera, const MethodInfo* method);
bool UnityEngine_Rendering_CoreUtils__IsSceneViewFogEnabled (UnityEngine_Camera_o* camera, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils__DrawRendererList (UnityEngine_Rendering_ScriptableRenderContext_o renderContext, UnityEngine_Rendering_CommandBuffer_o* cmd, UnityEngine_Experimental_Rendering_RendererList_o rendererList, const MethodInfo* method);
void UnityEngine_Rendering_CoreUtils___cctor (const MethodInfo* method);
