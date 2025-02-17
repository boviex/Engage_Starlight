#pragma once

#include "il2cpp.h"

int32_t UnityEngine_Shader__get_globalShaderHardwareTier (const MethodInfo* method);
void UnityEngine_Shader__set_globalShaderHardwareTier (int32_t value, const MethodInfo* method);
UnityEngine_Shader_o* UnityEngine_Shader__Find (System_String_o* name, const MethodInfo* method);
UnityEngine_Shader_o* UnityEngine_Shader__FindBuiltin (System_String_o* name, const MethodInfo* method);
int32_t UnityEngine_Shader__get_maximumLOD (UnityEngine_Shader_o* __this, const MethodInfo* method);
void UnityEngine_Shader__set_maximumLOD (UnityEngine_Shader_o* __this, int32_t value, const MethodInfo* method);
int32_t UnityEngine_Shader__get_globalMaximumLOD (const MethodInfo* method);
void UnityEngine_Shader__set_globalMaximumLOD (int32_t value, const MethodInfo* method);
bool UnityEngine_Shader__get_isSupported (UnityEngine_Shader_o* __this, const MethodInfo* method);
System_String_o* UnityEngine_Shader__get_globalRenderPipeline (const MethodInfo* method);
void UnityEngine_Shader__set_globalRenderPipeline (System_String_o* value, const MethodInfo* method);
void UnityEngine_Shader__EnableKeyword (System_String_o* keyword, const MethodInfo* method);
void UnityEngine_Shader__DisableKeyword (System_String_o* keyword, const MethodInfo* method);
bool UnityEngine_Shader__IsKeywordEnabled (System_String_o* keyword, const MethodInfo* method);
int32_t UnityEngine_Shader__get_renderQueue (UnityEngine_Shader_o* __this, const MethodInfo* method);
int32_t UnityEngine_Shader__get_disableBatching (UnityEngine_Shader_o* __this, const MethodInfo* method);
void UnityEngine_Shader__WarmupAllShaders (const MethodInfo* method);
int32_t UnityEngine_Shader__TagToID (System_String_o* name, const MethodInfo* method);
System_String_o* UnityEngine_Shader__IDToTag (int32_t name, const MethodInfo* method);
int32_t UnityEngine_Shader__PropertyToID (System_String_o* name, const MethodInfo* method);
UnityEngine_Shader_o* UnityEngine_Shader__GetDependency (UnityEngine_Shader_o* __this, System_String_o* name, const MethodInfo* method);
int32_t UnityEngine_Shader__get_passCount (UnityEngine_Shader_o* __this, const MethodInfo* method);
UnityEngine_Rendering_ShaderTagId_o UnityEngine_Shader__FindPassTagValue (UnityEngine_Shader_o* __this, int32_t passIndex, UnityEngine_Rendering_ShaderTagId_o tagName, const MethodInfo* method);
int32_t UnityEngine_Shader__Internal_FindPassTagValue (UnityEngine_Shader_o* __this, int32_t passIndex, int32_t tagName, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalFloatImpl (int32_t name, float value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVectorImpl (int32_t name, UnityEngine_Vector4_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrixImpl (int32_t name, UnityEngine_Matrix4x4_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalTextureImpl (int32_t name, UnityEngine_Texture_o* value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalRenderTextureImpl (int32_t name, UnityEngine_RenderTexture_o* value, int32_t element, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalBufferImpl (int32_t name, UnityEngine_ComputeBuffer_o* value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalGraphicsBufferImpl (int32_t name, UnityEngine_GraphicsBuffer_o* value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalConstantBufferImpl (int32_t name, UnityEngine_ComputeBuffer_o* value, int32_t offset, int32_t size, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalConstantGraphicsBufferImpl (int32_t name, UnityEngine_GraphicsBuffer_o* value, int32_t offset, int32_t size, const MethodInfo* method);
float UnityEngine_Shader__GetGlobalFloatImpl (int32_t name, const MethodInfo* method);
UnityEngine_Vector4_o UnityEngine_Shader__GetGlobalVectorImpl (int32_t name, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Shader__GetGlobalMatrixImpl (int32_t name, const MethodInfo* method);
UnityEngine_Texture_o* UnityEngine_Shader__GetGlobalTextureImpl (int32_t name, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalFloatArrayImpl (int32_t name, System_Single_array* values, int32_t count, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVectorArrayImpl (int32_t name, UnityEngine_Vector4_array* values, int32_t count, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrixArrayImpl (int32_t name, UnityEngine_Matrix4x4_array* values, int32_t count, const MethodInfo* method);
System_Single_array* UnityEngine_Shader__GetGlobalFloatArrayImpl (int32_t name, const MethodInfo* method);
UnityEngine_Vector4_array* UnityEngine_Shader__GetGlobalVectorArrayImpl (int32_t name, const MethodInfo* method);
UnityEngine_Matrix4x4_array* UnityEngine_Shader__GetGlobalMatrixArrayImpl (int32_t name, const MethodInfo* method);
int32_t UnityEngine_Shader__GetGlobalFloatArrayCountImpl (int32_t name, const MethodInfo* method);
int32_t UnityEngine_Shader__GetGlobalVectorArrayCountImpl (int32_t name, const MethodInfo* method);
int32_t UnityEngine_Shader__GetGlobalMatrixArrayCountImpl (int32_t name, const MethodInfo* method);
void UnityEngine_Shader__ExtractGlobalFloatArrayImpl (int32_t name, System_Single_array* val, const MethodInfo* method);
void UnityEngine_Shader__ExtractGlobalVectorArrayImpl (int32_t name, UnityEngine_Vector4_array* val, const MethodInfo* method);
void UnityEngine_Shader__ExtractGlobalMatrixArrayImpl (int32_t name, UnityEngine_Matrix4x4_array* val, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalFloatArray (int32_t name, System_Single_array* values, int32_t count, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVectorArray (int32_t name, UnityEngine_Vector4_array* values, int32_t count, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrixArray (int32_t name, UnityEngine_Matrix4x4_array* values, int32_t count, const MethodInfo* method);
void UnityEngine_Shader__ExtractGlobalFloatArray (int32_t name, System_Collections_Generic_List_float__o* values, const MethodInfo* method);
void UnityEngine_Shader__ExtractGlobalVectorArray (int32_t name, System_Collections_Generic_List_Vector4__o* values, const MethodInfo* method);
void UnityEngine_Shader__ExtractGlobalMatrixArray (int32_t name, System_Collections_Generic_List_Matrix4x4__o* values, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalFloat (System_String_o* name, float value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalFloat (int32_t nameID, float value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalInt (System_String_o* name, int32_t value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalInt (int32_t nameID, int32_t value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVector (System_String_o* name, UnityEngine_Vector4_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVector (int32_t nameID, UnityEngine_Vector4_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalColor (System_String_o* name, UnityEngine_Color_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalColor (int32_t nameID, UnityEngine_Color_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrix (System_String_o* name, UnityEngine_Matrix4x4_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrix (int32_t nameID, UnityEngine_Matrix4x4_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalTexture (System_String_o* name, UnityEngine_Texture_o* value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalTexture (int32_t nameID, UnityEngine_Texture_o* value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalTexture (System_String_o* name, UnityEngine_RenderTexture_o* value, int32_t element, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalTexture (int32_t nameID, UnityEngine_RenderTexture_o* value, int32_t element, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalBuffer (System_String_o* name, UnityEngine_ComputeBuffer_o* value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalBuffer (int32_t nameID, UnityEngine_ComputeBuffer_o* value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalBuffer (System_String_o* name, UnityEngine_GraphicsBuffer_o* value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalBuffer (int32_t nameID, UnityEngine_GraphicsBuffer_o* value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalConstantBuffer (System_String_o* name, UnityEngine_ComputeBuffer_o* value, int32_t offset, int32_t size, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalConstantBuffer (int32_t nameID, UnityEngine_ComputeBuffer_o* value, int32_t offset, int32_t size, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalConstantBuffer (System_String_o* name, UnityEngine_GraphicsBuffer_o* value, int32_t offset, int32_t size, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalConstantBuffer (int32_t nameID, UnityEngine_GraphicsBuffer_o* value, int32_t offset, int32_t size, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalFloatArray (System_String_o* name, System_Collections_Generic_List_float__o* values, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalFloatArray (int32_t nameID, System_Collections_Generic_List_float__o* values, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalFloatArray (System_String_o* name, System_Single_array* values, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalFloatArray (int32_t nameID, System_Single_array* values, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVectorArray (System_String_o* name, System_Collections_Generic_List_Vector4__o* values, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVectorArray (int32_t nameID, System_Collections_Generic_List_Vector4__o* values, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVectorArray (System_String_o* name, UnityEngine_Vector4_array* values, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVectorArray (int32_t nameID, UnityEngine_Vector4_array* values, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrixArray (System_String_o* name, System_Collections_Generic_List_Matrix4x4__o* values, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrixArray (int32_t nameID, System_Collections_Generic_List_Matrix4x4__o* values, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrixArray (System_String_o* name, UnityEngine_Matrix4x4_array* values, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrixArray (int32_t nameID, UnityEngine_Matrix4x4_array* values, const MethodInfo* method);
float UnityEngine_Shader__GetGlobalFloat (System_String_o* name, const MethodInfo* method);
float UnityEngine_Shader__GetGlobalFloat (int32_t nameID, const MethodInfo* method);
int32_t UnityEngine_Shader__GetGlobalInt (System_String_o* name, const MethodInfo* method);
int32_t UnityEngine_Shader__GetGlobalInt (int32_t nameID, const MethodInfo* method);
UnityEngine_Vector4_o UnityEngine_Shader__GetGlobalVector (System_String_o* name, const MethodInfo* method);
UnityEngine_Vector4_o UnityEngine_Shader__GetGlobalVector (int32_t nameID, const MethodInfo* method);
UnityEngine_Color_o UnityEngine_Shader__GetGlobalColor (System_String_o* name, const MethodInfo* method);
UnityEngine_Color_o UnityEngine_Shader__GetGlobalColor (int32_t nameID, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Shader__GetGlobalMatrix (System_String_o* name, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Shader__GetGlobalMatrix (int32_t nameID, const MethodInfo* method);
UnityEngine_Texture_o* UnityEngine_Shader__GetGlobalTexture (System_String_o* name, const MethodInfo* method);
UnityEngine_Texture_o* UnityEngine_Shader__GetGlobalTexture (int32_t nameID, const MethodInfo* method);
System_Single_array* UnityEngine_Shader__GetGlobalFloatArray (System_String_o* name, const MethodInfo* method);
System_Single_array* UnityEngine_Shader__GetGlobalFloatArray (int32_t nameID, const MethodInfo* method);
UnityEngine_Vector4_array* UnityEngine_Shader__GetGlobalVectorArray (System_String_o* name, const MethodInfo* method);
UnityEngine_Vector4_array* UnityEngine_Shader__GetGlobalVectorArray (int32_t nameID, const MethodInfo* method);
UnityEngine_Matrix4x4_array* UnityEngine_Shader__GetGlobalMatrixArray (System_String_o* name, const MethodInfo* method);
UnityEngine_Matrix4x4_array* UnityEngine_Shader__GetGlobalMatrixArray (int32_t nameID, const MethodInfo* method);
void UnityEngine_Shader__GetGlobalFloatArray (System_String_o* name, System_Collections_Generic_List_float__o* values, const MethodInfo* method);
void UnityEngine_Shader__GetGlobalFloatArray (int32_t nameID, System_Collections_Generic_List_float__o* values, const MethodInfo* method);
void UnityEngine_Shader__GetGlobalVectorArray (System_String_o* name, System_Collections_Generic_List_Vector4__o* values, const MethodInfo* method);
void UnityEngine_Shader__GetGlobalVectorArray (int32_t nameID, System_Collections_Generic_List_Vector4__o* values, const MethodInfo* method);
void UnityEngine_Shader__GetGlobalMatrixArray (System_String_o* name, System_Collections_Generic_List_Matrix4x4__o* values, const MethodInfo* method);
void UnityEngine_Shader__GetGlobalMatrixArray (int32_t nameID, System_Collections_Generic_List_Matrix4x4__o* values, const MethodInfo* method);
void UnityEngine_Shader___ctor (UnityEngine_Shader_o* __this, const MethodInfo* method);
System_String_o* UnityEngine_Shader__GetPropertyName (UnityEngine_Shader_o* shader, int32_t propertyIndex, const MethodInfo* method);
int32_t UnityEngine_Shader__GetPropertyNameId (UnityEngine_Shader_o* shader, int32_t propertyIndex, const MethodInfo* method);
int32_t UnityEngine_Shader__GetPropertyType (UnityEngine_Shader_o* shader, int32_t propertyIndex, const MethodInfo* method);
System_String_o* UnityEngine_Shader__GetPropertyDescription (UnityEngine_Shader_o* shader, int32_t propertyIndex, const MethodInfo* method);
int32_t UnityEngine_Shader__GetPropertyFlags (UnityEngine_Shader_o* shader, int32_t propertyIndex, const MethodInfo* method);
System_String_array* UnityEngine_Shader__GetPropertyAttributes (UnityEngine_Shader_o* shader, int32_t propertyIndex, const MethodInfo* method);
UnityEngine_Vector4_o UnityEngine_Shader__GetPropertyDefaultValue (UnityEngine_Shader_o* shader, int32_t propertyIndex, const MethodInfo* method);
int32_t UnityEngine_Shader__GetPropertyTextureDimension (UnityEngine_Shader_o* shader, int32_t propertyIndex, const MethodInfo* method);
System_String_o* UnityEngine_Shader__GetPropertyTextureDefaultName (UnityEngine_Shader_o* shader, int32_t propertyIndex, const MethodInfo* method);
bool UnityEngine_Shader__FindTextureStackImpl (UnityEngine_Shader_o* s, int32_t propertyIdx, System_String_o** stackName, int32_t* layerIndex, const MethodInfo* method);
void UnityEngine_Shader__CheckPropertyIndex (UnityEngine_Shader_o* s, int32_t propertyIndex, const MethodInfo* method);
int32_t UnityEngine_Shader__GetPropertyCount (UnityEngine_Shader_o* __this, const MethodInfo* method);
int32_t UnityEngine_Shader__FindPropertyIndex (UnityEngine_Shader_o* __this, System_String_o* propertyName, const MethodInfo* method);
System_String_o* UnityEngine_Shader__GetPropertyName (UnityEngine_Shader_o* __this, int32_t propertyIndex, const MethodInfo* method);
int32_t UnityEngine_Shader__GetPropertyNameId (UnityEngine_Shader_o* __this, int32_t propertyIndex, const MethodInfo* method);
int32_t UnityEngine_Shader__GetPropertyType (UnityEngine_Shader_o* __this, int32_t propertyIndex, const MethodInfo* method);
System_String_o* UnityEngine_Shader__GetPropertyDescription (UnityEngine_Shader_o* __this, int32_t propertyIndex, const MethodInfo* method);
int32_t UnityEngine_Shader__GetPropertyFlags (UnityEngine_Shader_o* __this, int32_t propertyIndex, const MethodInfo* method);
System_String_array* UnityEngine_Shader__GetPropertyAttributes (UnityEngine_Shader_o* __this, int32_t propertyIndex, const MethodInfo* method);
float UnityEngine_Shader__GetPropertyDefaultFloatValue (UnityEngine_Shader_o* __this, int32_t propertyIndex, const MethodInfo* method);
UnityEngine_Vector4_o UnityEngine_Shader__GetPropertyDefaultVectorValue (UnityEngine_Shader_o* __this, int32_t propertyIndex, const MethodInfo* method);
UnityEngine_Vector2_o UnityEngine_Shader__GetPropertyRangeLimits (UnityEngine_Shader_o* __this, int32_t propertyIndex, const MethodInfo* method);
int32_t UnityEngine_Shader__GetPropertyTextureDimension (UnityEngine_Shader_o* __this, int32_t propertyIndex, const MethodInfo* method);
System_String_o* UnityEngine_Shader__GetPropertyTextureDefaultName (UnityEngine_Shader_o* __this, int32_t propertyIndex, const MethodInfo* method);
bool UnityEngine_Shader__FindTextureStack (UnityEngine_Shader_o* __this, int32_t propertyIndex, System_String_o** stackName, int32_t* layerIndex, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVectorImpl_Injected (int32_t name, UnityEngine_Vector4_o* value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrixImpl_Injected (int32_t name, UnityEngine_Matrix4x4_o* value, const MethodInfo* method);
void UnityEngine_Shader__GetGlobalVectorImpl_Injected (int32_t name, UnityEngine_Vector4_o* ret, const MethodInfo* method);
void UnityEngine_Shader__GetGlobalMatrixImpl_Injected (int32_t name, UnityEngine_Matrix4x4_o* ret, const MethodInfo* method);
void UnityEngine_Shader__GetPropertyDefaultValue_Injected (UnityEngine_Shader_o* shader, int32_t propertyIndex, UnityEngine_Vector4_o* ret, const MethodInfo* method);
