#pragma once

#include "il2cpp.h"

float UnityEngine_Camera__get_nearClipPlane (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_nearClipPlane (UnityEngine_Camera_o* __this, float value, const MethodInfo* method_info);
float UnityEngine_Camera__get_farClipPlane (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_farClipPlane (UnityEngine_Camera_o* __this, float value, const MethodInfo* method_info);
float UnityEngine_Camera__get_fieldOfView (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_fieldOfView (UnityEngine_Camera_o* __this, float value, const MethodInfo* method_info);
void UnityEngine_Camera__set_allowHDR (UnityEngine_Camera_o* __this, bool value, const MethodInfo* method_info);
void UnityEngine_Camera__set_allowMSAA (UnityEngine_Camera_o* __this, bool value, const MethodInfo* method_info);
void UnityEngine_Camera__set_forceIntoRenderTexture (UnityEngine_Camera_o* __this, bool value, const MethodInfo* method_info);
float UnityEngine_Camera__get_orthographicSize (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_orthographicSize (UnityEngine_Camera_o* __this, float value, const MethodInfo* method_info);
bool UnityEngine_Camera__get_orthographic (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_orthographic (UnityEngine_Camera_o* __this, bool value, const MethodInfo* method_info);
float UnityEngine_Camera__get_depth (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_depth (UnityEngine_Camera_o* __this, float value, const MethodInfo* method_info);
float UnityEngine_Camera__get_aspect (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_aspect (UnityEngine_Camera_o* __this, float value, const MethodInfo* method_info);
int32_t UnityEngine_Camera__get_cullingMask (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_cullingMask (UnityEngine_Camera_o* __this, int32_t value, const MethodInfo* method_info);
int32_t UnityEngine_Camera__get_eventMask (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_useOcclusionCulling (UnityEngine_Camera_o* __this, bool value, const MethodInfo* method_info);
void UnityEngine_Camera__set_cullingMatrix (UnityEngine_Camera_o* __this, UnityEngine_Matrix4x4_o value, const MethodInfo* method_info);
void UnityEngine_Camera__ResetCullingMatrix (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
UnityEngine_Color_o UnityEngine_Camera__get_backgroundColor (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_backgroundColor (UnityEngine_Camera_o* __this, UnityEngine_Color_o value, const MethodInfo* method_info);
int32_t UnityEngine_Camera__get_clearFlags (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_clearFlags (UnityEngine_Camera_o* __this, int32_t value, const MethodInfo* method_info);
bool UnityEngine_Camera__get_usePhysicalProperties (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_usePhysicalProperties (UnityEngine_Camera_o* __this, bool value, const MethodInfo* method_info);
UnityEngine_Vector2_o UnityEngine_Camera__get_sensorSize (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
float UnityEngine_Camera__get_focalLength (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_gateFit (UnityEngine_Camera_o* __this, int32_t value, const MethodInfo* method_info);
UnityEngine_Rect_o UnityEngine_Camera__get_rect (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_rect (UnityEngine_Camera_o* __this, UnityEngine_Rect_o value, const MethodInfo* method_info);
UnityEngine_Rect_o UnityEngine_Camera__get_pixelRect (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_pixelRect (UnityEngine_Camera_o* __this, UnityEngine_Rect_o value, const MethodInfo* method_info);
UnityEngine_RenderTexture_o* UnityEngine_Camera__get_targetTexture (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_targetTexture (UnityEngine_Camera_o* __this, UnityEngine_RenderTexture_o* value, const MethodInfo* method_info);
int32_t UnityEngine_Camera__get_targetDisplay (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__SetTargetBuffersImpl (UnityEngine_Camera_o* __this, UnityEngine_RenderBuffer_o color, UnityEngine_RenderBuffer_o depth, const MethodInfo* method_info);
void UnityEngine_Camera__SetTargetBuffers (UnityEngine_Camera_o* __this, UnityEngine_RenderBuffer_o colorBuffer, UnityEngine_RenderBuffer_o depthBuffer, const MethodInfo* method_info);
UnityEngine_Matrix4x4_o UnityEngine_Camera__get_worldToCameraMatrix (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_worldToCameraMatrix (UnityEngine_Camera_o* __this, UnityEngine_Matrix4x4_o value, const MethodInfo* method_info);
UnityEngine_Matrix4x4_o UnityEngine_Camera__get_projectionMatrix (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_projectionMatrix (UnityEngine_Camera_o* __this, UnityEngine_Matrix4x4_o value, const MethodInfo* method_info);
void UnityEngine_Camera__ResetWorldToCameraMatrix (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__ResetProjectionMatrix (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
UnityEngine_Matrix4x4_o UnityEngine_Camera__CalculateObliqueMatrix (UnityEngine_Camera_o* __this, UnityEngine_Vector4_o clipPlane, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Camera__WorldToScreenPoint (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o position, int32_t eye, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Camera__WorldToViewportPoint (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o position, int32_t eye, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Camera__ViewportToWorldPoint (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o position, int32_t eye, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Camera__WorldToScreenPoint (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Camera__WorldToViewportPoint (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Camera__ViewportToWorldPoint (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Camera__ScreenToViewportPoint (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method_info);
UnityEngine_Ray_o UnityEngine_Camera__ScreenPointToRay (UnityEngine_Camera_o* __this, UnityEngine_Vector2_o pos, int32_t eye, const MethodInfo* method_info);
UnityEngine_Ray_o UnityEngine_Camera__ScreenPointToRay (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o pos, int32_t eye, const MethodInfo* method_info);
UnityEngine_Ray_o UnityEngine_Camera__ScreenPointToRay (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method_info);
float UnityEngine_Camera__FieldOfViewToFocalLength (float fieldOfView, float sensorSize, const MethodInfo* method_info);
UnityEngine_Camera_o* UnityEngine_Camera__get_main (const MethodInfo* method_info);
UnityEngine_Camera_o* UnityEngine_Camera__get_current (const MethodInfo* method_info);
int32_t UnityEngine_Camera__GetAllCamerasCount (const MethodInfo* method_info);
int32_t UnityEngine_Camera__GetAllCamerasImpl (UnityEngine_Camera_array* cam, const MethodInfo* method_info);
int32_t UnityEngine_Camera__get_allCamerasCount (const MethodInfo* method_info);
int32_t UnityEngine_Camera__GetAllCameras (UnityEngine_Camera_array* cameras, const MethodInfo* method_info);
void UnityEngine_Camera__Render (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__RemoveAllCommandBuffers (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__AddCommandBufferImpl (UnityEngine_Camera_o* __this, int32_t evt, UnityEngine_Rendering_CommandBuffer_o* buffer, const MethodInfo* method_info);
void UnityEngine_Camera__RemoveCommandBufferImpl (UnityEngine_Camera_o* __this, int32_t evt, UnityEngine_Rendering_CommandBuffer_o* buffer, const MethodInfo* method_info);
void UnityEngine_Camera__AddCommandBuffer (UnityEngine_Camera_o* __this, int32_t evt, UnityEngine_Rendering_CommandBuffer_o* buffer, const MethodInfo* method_info);
void UnityEngine_Camera__RemoveCommandBuffer (UnityEngine_Camera_o* __this, int32_t evt, UnityEngine_Rendering_CommandBuffer_o* buffer, const MethodInfo* method_info);
void UnityEngine_Camera__FireOnPreCull (UnityEngine_Camera_o* cam, const MethodInfo* method_info);
void UnityEngine_Camera__FireOnPreRender (UnityEngine_Camera_o* cam, const MethodInfo* method_info);
void UnityEngine_Camera__FireOnPostRender (UnityEngine_Camera_o* cam, const MethodInfo* method_info);
void UnityEngine_Camera___ctor (UnityEngine_Camera_o* __this, const MethodInfo* method_info);
void UnityEngine_Camera__set_cullingMatrix_Injected (UnityEngine_Camera_o* __this, UnityEngine_Matrix4x4_o* value, const MethodInfo* method_info);
void UnityEngine_Camera__get_backgroundColor_Injected (UnityEngine_Camera_o* __this, UnityEngine_Color_o* ret, const MethodInfo* method_info);
void UnityEngine_Camera__set_backgroundColor_Injected (UnityEngine_Camera_o* __this, UnityEngine_Color_o* value, const MethodInfo* method_info);
void UnityEngine_Camera__get_sensorSize_Injected (UnityEngine_Camera_o* __this, UnityEngine_Vector2_o* ret, const MethodInfo* method_info);
void UnityEngine_Camera__get_rect_Injected (UnityEngine_Camera_o* __this, UnityEngine_Rect_o* ret, const MethodInfo* method_info);
void UnityEngine_Camera__set_rect_Injected (UnityEngine_Camera_o* __this, UnityEngine_Rect_o* value, const MethodInfo* method_info);
void UnityEngine_Camera__get_pixelRect_Injected (UnityEngine_Camera_o* __this, UnityEngine_Rect_o* ret, const MethodInfo* method_info);
void UnityEngine_Camera__set_pixelRect_Injected (UnityEngine_Camera_o* __this, UnityEngine_Rect_o* value, const MethodInfo* method_info);
void UnityEngine_Camera__SetTargetBuffersImpl_Injected (UnityEngine_Camera_o* __this, UnityEngine_RenderBuffer_o* color, UnityEngine_RenderBuffer_o* depth, const MethodInfo* method_info);
void UnityEngine_Camera__get_worldToCameraMatrix_Injected (UnityEngine_Camera_o* __this, UnityEngine_Matrix4x4_o* ret, const MethodInfo* method_info);
void UnityEngine_Camera__set_worldToCameraMatrix_Injected (UnityEngine_Camera_o* __this, UnityEngine_Matrix4x4_o* value, const MethodInfo* method_info);
void UnityEngine_Camera__get_projectionMatrix_Injected (UnityEngine_Camera_o* __this, UnityEngine_Matrix4x4_o* ret, const MethodInfo* method_info);
void UnityEngine_Camera__set_projectionMatrix_Injected (UnityEngine_Camera_o* __this, UnityEngine_Matrix4x4_o* value, const MethodInfo* method_info);
void UnityEngine_Camera__CalculateObliqueMatrix_Injected (UnityEngine_Camera_o* __this, UnityEngine_Vector4_o* clipPlane, UnityEngine_Matrix4x4_o* ret, const MethodInfo* method_info);
void UnityEngine_Camera__WorldToScreenPoint_Injected (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o* position, int32_t eye, UnityEngine_Vector3_o* ret, const MethodInfo* method_info);
void UnityEngine_Camera__WorldToViewportPoint_Injected (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o* position, int32_t eye, UnityEngine_Vector3_o* ret, const MethodInfo* method_info);
void UnityEngine_Camera__ViewportToWorldPoint_Injected (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o* position, int32_t eye, UnityEngine_Vector3_o* ret, const MethodInfo* method_info);
void UnityEngine_Camera__ScreenToViewportPoint_Injected (UnityEngine_Camera_o* __this, UnityEngine_Vector3_o* position, UnityEngine_Vector3_o* ret, const MethodInfo* method_info);
void UnityEngine_Camera__ScreenPointToRay_Injected (UnityEngine_Camera_o* __this, UnityEngine_Vector2_o* pos, int32_t eye, UnityEngine_Ray_o* ret, const MethodInfo* method_info);