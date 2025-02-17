#pragma once

#include "il2cpp.h"

void UnityEngine_Events_InvokableCallList__AddPersistentInvokableCall (UnityEngine_Events_InvokableCallList_o* __this, UnityEngine_Events_BaseInvokableCall_o* call, const MethodInfo* method);
void UnityEngine_Events_InvokableCallList__AddListener (UnityEngine_Events_InvokableCallList_o* __this, UnityEngine_Events_BaseInvokableCall_o* call, const MethodInfo* method);
void UnityEngine_Events_InvokableCallList__RemoveListener (UnityEngine_Events_InvokableCallList_o* __this, Il2CppObject* targetObj, System_Reflection_MethodInfo_o* method, const MethodInfo* method);
void UnityEngine_Events_InvokableCallList__ClearPersistent (UnityEngine_Events_InvokableCallList_o* __this, const MethodInfo* method);
System_Collections_Generic_List_BaseInvokableCall__o* UnityEngine_Events_InvokableCallList__PrepareInvoke (UnityEngine_Events_InvokableCallList_o* __this, const MethodInfo* method);
void UnityEngine_Events_InvokableCallList___ctor (UnityEngine_Events_InvokableCallList_o* __this, const MethodInfo* method);
