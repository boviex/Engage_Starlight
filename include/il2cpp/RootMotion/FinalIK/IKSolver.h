#pragma once

#include "il2cpp.h"

bool RootMotion_FinalIK_IKSolver__IsValid (RootMotion_FinalIK_IKSolver_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolver__Initiate (RootMotion_FinalIK_IKSolver_o* __this, UnityEngine_Transform_o* root, const MethodInfo* method);
void RootMotion_FinalIK_IKSolver__Update (RootMotion_FinalIK_IKSolver_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolver__GetIKPosition (RootMotion_FinalIK_IKSolver_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolver__SetIKPosition (RootMotion_FinalIK_IKSolver_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
float RootMotion_FinalIK_IKSolver__GetIKPositionWeight (RootMotion_FinalIK_IKSolver_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolver__SetIKPositionWeight (RootMotion_FinalIK_IKSolver_o* __this, float weight, const MethodInfo* method);
UnityEngine_Transform_o* RootMotion_FinalIK_IKSolver__GetRoot (RootMotion_FinalIK_IKSolver_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolver__get_initiated (RootMotion_FinalIK_IKSolver_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolver__set_initiated (RootMotion_FinalIK_IKSolver_o* __this, bool value, const MethodInfo* method);
void RootMotion_FinalIK_IKSolver__LogWarning (RootMotion_FinalIK_IKSolver_o* __this, System_String_o* message, const MethodInfo* method);
UnityEngine_Transform_o* RootMotion_FinalIK_IKSolver__ContainsDuplicateBone (RootMotion_FinalIK_IKSolver_Bone_array* bones, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolver__HierarchyIsValid (RootMotion_FinalIK_IKSolver_Bone_array* bones, const MethodInfo* method);
float RootMotion_FinalIK_IKSolver__PreSolveBones (RootMotion_FinalIK_IKSolver_Bone_array** bones, const MethodInfo* method);
void RootMotion_FinalIK_IKSolver___ctor (RootMotion_FinalIK_IKSolver_o* __this, const MethodInfo* method);
