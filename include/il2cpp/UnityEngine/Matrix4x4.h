#pragma once

#include "il2cpp.h"

UnityEngine_Quaternion_o UnityEngine_Matrix4x4__GetRotation (UnityEngine_Matrix4x4_o __this, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_Matrix4x4__GetLossyScale (UnityEngine_Matrix4x4_o __this, const MethodInfo* method);
UnityEngine_FrustumPlanes_o UnityEngine_Matrix4x4__DecomposeProjection (UnityEngine_Matrix4x4_o __this, const MethodInfo* method);
UnityEngine_Quaternion_o UnityEngine_Matrix4x4__get_rotation (UnityEngine_Matrix4x4_o __this, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_Matrix4x4__get_lossyScale (UnityEngine_Matrix4x4_o __this, const MethodInfo* method);
UnityEngine_FrustumPlanes_o UnityEngine_Matrix4x4__get_decomposeProjection (UnityEngine_Matrix4x4_o __this, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__TRS (UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o q, UnityEngine_Vector3_o s, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__Inverse (UnityEngine_Matrix4x4_o m, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__get_inverse (UnityEngine_Matrix4x4_o __this, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__Perspective (float fov, float aspect, float zNear, float zFar, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__LookAt (UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, UnityEngine_Vector3_o up, const MethodInfo* method);
void UnityEngine_Matrix4x4___ctor (UnityEngine_Matrix4x4_o __this, UnityEngine_Vector4_o column0, UnityEngine_Vector4_o column1, UnityEngine_Vector4_o column2, UnityEngine_Vector4_o column3, const MethodInfo* method);
void UnityEngine_Matrix4x4__set_Item (UnityEngine_Matrix4x4_o __this, int32_t row, int32_t column, float value, const MethodInfo* method);
float UnityEngine_Matrix4x4__get_Item (UnityEngine_Matrix4x4_o __this, int32_t index, const MethodInfo* method);
void UnityEngine_Matrix4x4__set_Item (UnityEngine_Matrix4x4_o __this, int32_t index, float value, const MethodInfo* method);
int32_t UnityEngine_Matrix4x4__GetHashCode (UnityEngine_Matrix4x4_o __this, const MethodInfo* method);
bool UnityEngine_Matrix4x4__Equals (UnityEngine_Matrix4x4_o __this, Il2CppObject* other, const MethodInfo* method);
bool UnityEngine_Matrix4x4__Equals (UnityEngine_Matrix4x4_o __this, UnityEngine_Matrix4x4_o other, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__op_Multiply (UnityEngine_Matrix4x4_o lhs, UnityEngine_Matrix4x4_o rhs, const MethodInfo* method);
UnityEngine_Vector4_o UnityEngine_Matrix4x4__op_Multiply (UnityEngine_Matrix4x4_o lhs, UnityEngine_Vector4_o vector, const MethodInfo* method);
bool UnityEngine_Matrix4x4__op_Equality (UnityEngine_Matrix4x4_o lhs, UnityEngine_Matrix4x4_o rhs, const MethodInfo* method);
bool UnityEngine_Matrix4x4__op_Inequality (UnityEngine_Matrix4x4_o lhs, UnityEngine_Matrix4x4_o rhs, const MethodInfo* method);
UnityEngine_Vector4_o UnityEngine_Matrix4x4__GetColumn (UnityEngine_Matrix4x4_o __this, int32_t index, const MethodInfo* method);
UnityEngine_Vector4_o UnityEngine_Matrix4x4__GetRow (UnityEngine_Matrix4x4_o __this, int32_t index, const MethodInfo* method);
void UnityEngine_Matrix4x4__SetColumn (UnityEngine_Matrix4x4_o __this, int32_t index, UnityEngine_Vector4_o column, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_Matrix4x4__MultiplyPoint (UnityEngine_Matrix4x4_o __this, UnityEngine_Vector3_o point, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_Matrix4x4__MultiplyPoint3x4 (UnityEngine_Matrix4x4_o __this, UnityEngine_Vector3_o point, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_Matrix4x4__MultiplyVector (UnityEngine_Matrix4x4_o __this, UnityEngine_Vector3_o vector, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__Scale (UnityEngine_Vector3_o vector, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__Translate (UnityEngine_Vector3_o vector, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__Rotate (UnityEngine_Quaternion_o q, const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__get_zero (const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__get_identity (const MethodInfo* method);
System_String_o* UnityEngine_Matrix4x4__ToString (UnityEngine_Matrix4x4_o __this, const MethodInfo* method);
System_String_o* UnityEngine_Matrix4x4__ToString (UnityEngine_Matrix4x4_o __this, System_String_o* format, System_IFormatProvider_o* formatProvider, const MethodInfo* method);
void UnityEngine_Matrix4x4___cctor (const MethodInfo* method);
void UnityEngine_Matrix4x4__GetRotation_Injected (UnityEngine_Matrix4x4_o* _unity_self, UnityEngine_Quaternion_o* ret, const MethodInfo* method);
void UnityEngine_Matrix4x4__GetLossyScale_Injected (UnityEngine_Matrix4x4_o* _unity_self, UnityEngine_Vector3_o* ret, const MethodInfo* method);
void UnityEngine_Matrix4x4__DecomposeProjection_Injected (UnityEngine_Matrix4x4_o* _unity_self, UnityEngine_FrustumPlanes_o* ret, const MethodInfo* method);
void UnityEngine_Matrix4x4__TRS_Injected (UnityEngine_Vector3_o* pos, UnityEngine_Quaternion_o* q, UnityEngine_Vector3_o* s, UnityEngine_Matrix4x4_o* ret, const MethodInfo* method);
void UnityEngine_Matrix4x4__Inverse_Injected (UnityEngine_Matrix4x4_o* m, UnityEngine_Matrix4x4_o* ret, const MethodInfo* method);
void UnityEngine_Matrix4x4__Perspective_Injected (float fov, float aspect, float zNear, float zFar, UnityEngine_Matrix4x4_o* ret, const MethodInfo* method);
void UnityEngine_Matrix4x4__LookAt_Injected (UnityEngine_Vector3_o* from, UnityEngine_Vector3_o* to, UnityEngine_Vector3_o* up, UnityEngine_Matrix4x4_o* ret, const MethodInfo* method);
