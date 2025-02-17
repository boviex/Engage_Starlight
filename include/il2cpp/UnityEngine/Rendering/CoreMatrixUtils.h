#pragma once

#include "il2cpp.h"

void UnityEngine_Rendering_CoreMatrixUtils__MatrixTimesTranslation (UnityEngine_Matrix4x4_o* inOutMatrix, UnityEngine_Vector3_o translation, const MethodInfo* method);
void UnityEngine_Rendering_CoreMatrixUtils__TranslationTimesMatrix (UnityEngine_Matrix4x4_o* inOutMatrix, UnityEngine_Vector3_o translation, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Rendering_CoreMatrixUtils__MultiplyPerspectiveMatrix (UnityEngine_Matrix4x4_o perspective, UnityEngine_Matrix4x4_o rhs, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Rendering_CoreMatrixUtils__MultiplyOrthoMatrixCentered (UnityEngine_Matrix4x4_o ortho, UnityEngine_Matrix4x4_o rhs, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Rendering_CoreMatrixUtils__MultiplyGenericOrthoMatrix (UnityEngine_Matrix4x4_o ortho, UnityEngine_Matrix4x4_o rhs, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Rendering_CoreMatrixUtils__MultiplyOrthoMatrix (UnityEngine_Matrix4x4_o ortho, UnityEngine_Matrix4x4_o rhs, bool centered, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Rendering_CoreMatrixUtils__MultiplyProjectionMatrix (UnityEngine_Matrix4x4_o projMatrix, UnityEngine_Matrix4x4_o rhs, bool orthoCentered, const MethodInfo* method);
