#pragma once

#include "il2cpp.h"

int32_t UnityEngine_ShaderVariantCollection__get_shaderCount (UnityEngine_ShaderVariantCollection_o* __this, const MethodInfo* method);
int32_t UnityEngine_ShaderVariantCollection__get_variantCount (UnityEngine_ShaderVariantCollection_o* __this, const MethodInfo* method);
bool UnityEngine_ShaderVariantCollection__get_isWarmedUp (UnityEngine_ShaderVariantCollection_o* __this, const MethodInfo* method);
bool UnityEngine_ShaderVariantCollection__AddVariant (UnityEngine_ShaderVariantCollection_o* __this, UnityEngine_Shader_o* shader, int32_t passType, System_String_array* keywords, const MethodInfo* method);
bool UnityEngine_ShaderVariantCollection__RemoveVariant (UnityEngine_ShaderVariantCollection_o* __this, UnityEngine_Shader_o* shader, int32_t passType, System_String_array* keywords, const MethodInfo* method);
bool UnityEngine_ShaderVariantCollection__ContainsVariant (UnityEngine_ShaderVariantCollection_o* __this, UnityEngine_Shader_o* shader, int32_t passType, System_String_array* keywords, const MethodInfo* method);
void UnityEngine_ShaderVariantCollection__Clear (UnityEngine_ShaderVariantCollection_o* __this, const MethodInfo* method);
void UnityEngine_ShaderVariantCollection__WarmUp (UnityEngine_ShaderVariantCollection_o* __this, const MethodInfo* method);
void UnityEngine_ShaderVariantCollection__Internal_Create (UnityEngine_ShaderVariantCollection_o* svc, const MethodInfo* method);
void UnityEngine_ShaderVariantCollection___ctor (UnityEngine_ShaderVariantCollection_o* __this, const MethodInfo* method);
bool UnityEngine_ShaderVariantCollection__Add (UnityEngine_ShaderVariantCollection_o* __this, UnityEngine_ShaderVariantCollection_ShaderVariant_o variant, const MethodInfo* method);
bool UnityEngine_ShaderVariantCollection__Remove (UnityEngine_ShaderVariantCollection_o* __this, UnityEngine_ShaderVariantCollection_ShaderVariant_o variant, const MethodInfo* method);
bool UnityEngine_ShaderVariantCollection__Contains (UnityEngine_ShaderVariantCollection_o* __this, UnityEngine_ShaderVariantCollection_ShaderVariant_o variant, const MethodInfo* method);
