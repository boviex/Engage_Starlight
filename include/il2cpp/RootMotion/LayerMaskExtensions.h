#pragma once

#include "il2cpp.h"

bool RootMotion_LayerMaskExtensions__Contains (UnityEngine_LayerMask_o mask, int32_t layer, const MethodInfo* method);
UnityEngine_LayerMask_o RootMotion_LayerMaskExtensions__Create (System_String_array* layerNames, const MethodInfo* method);
UnityEngine_LayerMask_o RootMotion_LayerMaskExtensions__Create (System_Int32_array* layerNumbers, const MethodInfo* method);
UnityEngine_LayerMask_o RootMotion_LayerMaskExtensions__NamesToMask (System_String_array* layerNames, const MethodInfo* method);
UnityEngine_LayerMask_o RootMotion_LayerMaskExtensions__LayerNumbersToMask (System_Int32_array* layerNumbers, const MethodInfo* method);
UnityEngine_LayerMask_o RootMotion_LayerMaskExtensions__Inverse (UnityEngine_LayerMask_o original, const MethodInfo* method);
UnityEngine_LayerMask_o RootMotion_LayerMaskExtensions__AddToMask (UnityEngine_LayerMask_o original, System_String_array* layerNames, const MethodInfo* method);
UnityEngine_LayerMask_o RootMotion_LayerMaskExtensions__RemoveFromMask (UnityEngine_LayerMask_o original, System_String_array* layerNames, const MethodInfo* method);
System_String_array* RootMotion_LayerMaskExtensions__MaskToNames (UnityEngine_LayerMask_o original, const MethodInfo* method);
System_Int32_array* RootMotion_LayerMaskExtensions__MaskToNumbers (UnityEngine_LayerMask_o original, const MethodInfo* method);
System_String_o* RootMotion_LayerMaskExtensions__MaskToString (UnityEngine_LayerMask_o original, const MethodInfo* method);
System_String_o* RootMotion_LayerMaskExtensions__MaskToString (UnityEngine_LayerMask_o original, System_String_o* delimiter, const MethodInfo* method);
