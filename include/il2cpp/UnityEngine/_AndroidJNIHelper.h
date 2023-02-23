#pragma once

#include "il2cpp.h"

intptr_t UnityEngine__AndroidJNIHelper__CreateJavaProxy (intptr_t delegateHandle, UnityEngine_AndroidJavaProxy_o* proxy, const MethodInfo* method);
intptr_t UnityEngine__AndroidJNIHelper__CreateJavaRunnable (UnityEngine_AndroidJavaRunnable_o* jrunnable, const MethodInfo* method);
intptr_t UnityEngine__AndroidJNIHelper__InvokeJavaProxyMethod (UnityEngine_AndroidJavaProxy_o* proxy, intptr_t jmethodName, intptr_t jargs, const MethodInfo* method);
UnityEngine_jvalue_array* UnityEngine__AndroidJNIHelper__CreateJNIArgArray (System_Object_array* args, const MethodInfo* method);
Il2CppObject* UnityEngine__AndroidJNIHelper__UnboxArray (UnityEngine_AndroidJavaObject_o* obj, const MethodInfo* method);
Il2CppObject* UnityEngine__AndroidJNIHelper__Unbox (UnityEngine_AndroidJavaObject_o* obj, const MethodInfo* method);
UnityEngine_AndroidJavaObject_o* UnityEngine__AndroidJNIHelper__Box (Il2CppObject* obj, const MethodInfo* method);
void UnityEngine__AndroidJNIHelper__DeleteJNIArgArray (System_Object_array* args, UnityEngine_jvalue_array* jniArgs, const MethodInfo* method);
intptr_t UnityEngine__AndroidJNIHelper__ConvertToJNIArray (System_Array_o* array, const MethodInfo* method);
bool UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_bool_ (intptr_t array, const MethodInfo_38734E0* method);
uint16_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_char_ (intptr_t array, const MethodInfo_3873C80* method);
double UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_double_ (intptr_t array, const MethodInfo_3874420* method);
int16_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_short_ (intptr_t array, const MethodInfo_3874BB0* method);
int32_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_int_ (intptr_t array, const MethodInfo_3875350* method);
int64_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_long_ (intptr_t array, const MethodInfo_3875AE0* method);
Il2CppObject* UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_object_ (intptr_t array, const MethodInfo_3876270* method);
int8_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_sbyte_ (intptr_t array, const MethodInfo_3876A00* method);
float UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_float_ (intptr_t array, const MethodInfo_38771A0* method);
intptr_t UnityEngine__AndroidJNIHelper__GetConstructorID (intptr_t jclass, System_Object_array* args, const MethodInfo* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_bool_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_3877930* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_char_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_3877990* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_double_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_38779F0* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_short_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_3877A50* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_int_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_3877AB0* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_long_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_3877B10* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_object_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_3877B70* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_sbyte_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_3877BD0* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_float_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_3877C30* method);
intptr_t UnityEngine__AndroidJNIHelper__GetConstructorID (intptr_t jclass, System_String_o* signature, const MethodInfo* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID (intptr_t jclass, System_String_o* methodName, System_String_o* signature, bool isStatic, const MethodInfo* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodIDFallback (intptr_t jclass, System_String_o* methodName, System_String_o* signature, bool isStatic, const MethodInfo* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature (Il2CppObject* obj, const MethodInfo* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature (System_Object_array* args, const MethodInfo* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_bool_ (System_Object_array* args, const MethodInfo_3877C90* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_char_ (System_Object_array* args, const MethodInfo_3877DE0* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_double_ (System_Object_array* args, const MethodInfo_3877F30* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_short_ (System_Object_array* args, const MethodInfo_3878080* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_int_ (System_Object_array* args, const MethodInfo_38781D0* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_long_ (System_Object_array* args, const MethodInfo_3878320* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_object_ (System_Object_array* args, const MethodInfo_3878470* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_sbyte_ (System_Object_array* args, const MethodInfo_38785C0* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_float_ (System_Object_array* args, const MethodInfo_3878710* method);
