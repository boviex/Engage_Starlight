#pragma once

#include "il2cpp.h"

void UnityEngine_LightProbes___ctor (UnityEngine_LightProbes_o* __this, const MethodInfo* method);
void UnityEngine_LightProbes__add_tetrahedralizationCompleted (System_Action_o* value, const MethodInfo* method);
void UnityEngine_LightProbes__remove_tetrahedralizationCompleted (System_Action_o* value, const MethodInfo* method);
void UnityEngine_LightProbes__Internal_CallTetrahedralizationCompletedFunction (const MethodInfo* method);
void UnityEngine_LightProbes__add_needsRetetrahedralization (System_Action_o* value, const MethodInfo* method);
void UnityEngine_LightProbes__remove_needsRetetrahedralization (System_Action_o* value, const MethodInfo* method);
void UnityEngine_LightProbes__Internal_CallNeedsRetetrahedralizationFunction (const MethodInfo* method);
void UnityEngine_LightProbes__Tetrahedralize (const MethodInfo* method);
void UnityEngine_LightProbes__TetrahedralizeAsync (const MethodInfo* method);
void UnityEngine_LightProbes__GetInterpolatedProbe (UnityEngine_Vector3_o position, UnityEngine_Renderer_o* renderer, UnityEngine_Rendering_SphericalHarmonicsL2_o* probe, const MethodInfo* method);
bool UnityEngine_LightProbes__AreLightProbesAllowed (UnityEngine_Renderer_o* renderer, const MethodInfo* method);
void UnityEngine_LightProbes__CalculateInterpolatedLightAndOcclusionProbes (UnityEngine_Vector3_array* positions, UnityEngine_Rendering_SphericalHarmonicsL2_array* lightProbes, UnityEngine_Vector4_array* occlusionProbes, const MethodInfo* method);
void UnityEngine_LightProbes__CalculateInterpolatedLightAndOcclusionProbes (System_Collections_Generic_List_Vector3__o* positions, System_Collections_Generic_List_SphericalHarmonicsL2__o* lightProbes, System_Collections_Generic_List_Vector4__o* occlusionProbes, const MethodInfo* method);
void UnityEngine_LightProbes__CalculateInterpolatedLightAndOcclusionProbes_Internal (UnityEngine_Vector3_array* positions, int32_t positionsCount, UnityEngine_Rendering_SphericalHarmonicsL2_array* lightProbes, UnityEngine_Vector4_array* occlusionProbes, const MethodInfo* method);
UnityEngine_Vector3_array* UnityEngine_LightProbes__get_positions (UnityEngine_LightProbes_o* __this, const MethodInfo* method);
UnityEngine_Rendering_SphericalHarmonicsL2_array* UnityEngine_LightProbes__get_bakedProbes (UnityEngine_LightProbes_o* __this, const MethodInfo* method);
void UnityEngine_LightProbes__set_bakedProbes (UnityEngine_LightProbes_o* __this, UnityEngine_Rendering_SphericalHarmonicsL2_array* value, const MethodInfo* method);
int32_t UnityEngine_LightProbes__get_count (UnityEngine_LightProbes_o* __this, const MethodInfo* method);
int32_t UnityEngine_LightProbes__get_cellCount (UnityEngine_LightProbes_o* __this, const MethodInfo* method);
int32_t UnityEngine_LightProbes__GetCount (const MethodInfo* method);
void UnityEngine_LightProbes__GetInterpolatedLightProbe (UnityEngine_LightProbes_o* __this, UnityEngine_Vector3_o position, UnityEngine_Renderer_o* renderer, System_Single_array* coefficients, const MethodInfo* method);
System_Single_array* UnityEngine_LightProbes__get_coefficients (UnityEngine_LightProbes_o* __this, const MethodInfo* method);
void UnityEngine_LightProbes__set_coefficients (UnityEngine_LightProbes_o* __this, System_Single_array* value, const MethodInfo* method);
void UnityEngine_LightProbes__GetInterpolatedProbe_Injected (UnityEngine_Vector3_o* position, UnityEngine_Renderer_o* renderer, UnityEngine_Rendering_SphericalHarmonicsL2_o* probe, const MethodInfo* method);
