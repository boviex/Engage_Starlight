#pragma once

#include "il2cpp.h"

bool UnityEngine_CubemapArray__get_isReadable (UnityEngine_CubemapArray_o* __this, const MethodInfo* method);
bool UnityEngine_CubemapArray__Internal_CreateImpl (UnityEngine_CubemapArray_o* mono, int32_t ext, int32_t count, int32_t mipCount, int32_t format, int32_t flags, const MethodInfo* method);
void UnityEngine_CubemapArray__Internal_Create (UnityEngine_CubemapArray_o* mono, int32_t ext, int32_t count, int32_t mipCount, int32_t format, int32_t flags, const MethodInfo* method);
void UnityEngine_CubemapArray__ApplyImpl (UnityEngine_CubemapArray_o* __this, bool updateMipmaps, bool makeNoLongerReadable, const MethodInfo* method);
void UnityEngine_CubemapArray__SetPixels (UnityEngine_CubemapArray_o* __this, UnityEngine_Color_array* colors, int32_t face, int32_t arrayElement, int32_t miplevel, const MethodInfo* method);
void UnityEngine_CubemapArray__SetPixels (UnityEngine_CubemapArray_o* __this, UnityEngine_Color_array* colors, int32_t face, int32_t arrayElement, const MethodInfo* method);
void UnityEngine_CubemapArray___ctor (UnityEngine_CubemapArray_o* __this, int32_t width, int32_t cubemapCount, int32_t format, int32_t flags, const MethodInfo* method);
void UnityEngine_CubemapArray___ctor (UnityEngine_CubemapArray_o* __this, int32_t width, int32_t cubemapCount, int32_t format, int32_t flags, const MethodInfo* method);
void UnityEngine_CubemapArray___ctor (UnityEngine_CubemapArray_o* __this, int32_t width, int32_t cubemapCount, int32_t format, int32_t flags, int32_t mipCount, const MethodInfo* method);
void UnityEngine_CubemapArray___ctor (UnityEngine_CubemapArray_o* __this, int32_t width, int32_t cubemapCount, int32_t textureFormat, int32_t mipCount, bool linear, const MethodInfo* method);
void UnityEngine_CubemapArray___ctor (UnityEngine_CubemapArray_o* __this, int32_t width, int32_t cubemapCount, int32_t textureFormat, bool mipChain, bool linear, const MethodInfo* method);
void UnityEngine_CubemapArray___ctor (UnityEngine_CubemapArray_o* __this, int32_t width, int32_t cubemapCount, int32_t textureFormat, bool mipChain, const MethodInfo* method);
void UnityEngine_CubemapArray__Apply (UnityEngine_CubemapArray_o* __this, bool updateMipmaps, bool makeNoLongerReadable, const MethodInfo* method);
void UnityEngine_CubemapArray__Apply (UnityEngine_CubemapArray_o* __this, const MethodInfo* method);
void UnityEngine_CubemapArray__ValidateIsNotCrunched (int32_t flags, const MethodInfo* method);
