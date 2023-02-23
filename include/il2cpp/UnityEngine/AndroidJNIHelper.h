#pragma once

#include "il2cpp.h"

intptr_t UnityEngine_AndroidJNIHelper__GetConstructorID (intptr_t javaClass, System_String_o* signature, const MethodInfo* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID (intptr_t javaClass, System_String_o* methodName, System_String_o* signature, bool isStatic, const MethodInfo* method);
intptr_t UnityEngine_AndroidJNIHelper__CreateJavaRunnable (UnityEngine_AndroidJavaRunnable_o* jrunnable, const MethodInfo* method);
intptr_t UnityEngine_AndroidJNIHelper__CreateJavaProxy (UnityEngine_AndroidJavaProxy_o* proxy, const MethodInfo* method);
UnityEngine_jvalue_array* UnityEngine_AndroidJNIHelper__CreateJNIArgArray (System_Object_array* args, const MethodInfo* method);
void UnityEngine_AndroidJNIHelper__DeleteJNIArgArray (System_Object_array* args, UnityEngine_jvalue_array* jniArgs, const MethodInfo* method);
intptr_t UnityEngine_AndroidJNIHelper__GetConstructorID (intptr_t jclass, System_Object_array* args, const MethodInfo* method);
bool UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_bool_ (intptr_t array, const MethodInfo_252FA50* method);
uint16_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_char_ (intptr_t array, const MethodInfo_252FA60* method);
double UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_double_ (intptr_t array, const MethodInfo_252FA70* method);
int16_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_short_ (intptr_t array, const MethodInfo_252FA80* method);
int32_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_int_ (intptr_t array, const MethodInfo_252FA90* method);
int64_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_long_ (intptr_t array, const MethodInfo_252FAA0* method);
Il2CppObject* UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_object_ (intptr_t array, const MethodInfo_252FAB0* method);
int8_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_sbyte_ (intptr_t array, const MethodInfo_252FAC0* method);
float UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_float_ (intptr_t array, const MethodInfo_252FAD0* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_bool_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_252FAE0* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_char_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_252FB00* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_double_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_252FB20* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_short_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_252FB40* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_int_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_252FB60* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_long_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_252FB80* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_object_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_252FBA0* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_sbyte_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_252FBC0* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_float_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_252FBE0* method);
