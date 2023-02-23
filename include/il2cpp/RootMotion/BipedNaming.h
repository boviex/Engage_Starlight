#pragma once

#include "il2cpp.h"

UnityEngine_Transform_array* RootMotion_BipedNaming__GetBonesOfType (int32_t boneType, UnityEngine_Transform_array* bones, const MethodInfo* method);
UnityEngine_Transform_array* RootMotion_BipedNaming__GetBonesOfSide (int32_t boneSide, UnityEngine_Transform_array* bones, const MethodInfo* method);
UnityEngine_Transform_array* RootMotion_BipedNaming__GetBonesOfTypeAndSide (int32_t boneType, int32_t boneSide, UnityEngine_Transform_array* bones, const MethodInfo* method);
UnityEngine_Transform_o* RootMotion_BipedNaming__GetFirstBoneOfTypeAndSide (int32_t boneType, int32_t boneSide, UnityEngine_Transform_array* bones, const MethodInfo* method);
UnityEngine_Transform_o* RootMotion_BipedNaming__GetNamingMatch (UnityEngine_Transform_array* transforms, System_String_array_array* namings, const MethodInfo* method);
int32_t RootMotion_BipedNaming__GetBoneType (System_String_o* boneName, const MethodInfo* method);
int32_t RootMotion_BipedNaming__GetBoneSide (System_String_o* boneName, const MethodInfo* method);
UnityEngine_Transform_o* RootMotion_BipedNaming__GetBone (UnityEngine_Transform_array* transforms, int32_t boneType, int32_t boneSide, System_String_array_array* namings, const MethodInfo* method);
bool RootMotion_BipedNaming__isLeft (System_String_o* boneName, const MethodInfo* method);
bool RootMotion_BipedNaming__isRight (System_String_o* boneName, const MethodInfo* method);
bool RootMotion_BipedNaming__isSpine (System_String_o* boneName, const MethodInfo* method);
bool RootMotion_BipedNaming__isHead (System_String_o* boneName, const MethodInfo* method);
bool RootMotion_BipedNaming__isArm (System_String_o* boneName, const MethodInfo* method);
bool RootMotion_BipedNaming__isLeg (System_String_o* boneName, const MethodInfo* method);
bool RootMotion_BipedNaming__isTail (System_String_o* boneName, const MethodInfo* method);
bool RootMotion_BipedNaming__isEye (System_String_o* boneName, const MethodInfo* method);
bool RootMotion_BipedNaming__isTypeExclude (System_String_o* boneName, const MethodInfo* method);
bool RootMotion_BipedNaming__matchesNaming (System_String_o* boneName, System_String_array* namingConvention, const MethodInfo* method);
bool RootMotion_BipedNaming__excludesNaming (System_String_o* boneName, System_String_array* namingConvention, const MethodInfo* method);
bool RootMotion_BipedNaming__matchesLastLetter (System_String_o* boneName, System_String_array* namingConvention, const MethodInfo* method);
bool RootMotion_BipedNaming__LastLetterIs (System_String_o* boneName, System_String_o* letter, const MethodInfo* method);
System_String_o* RootMotion_BipedNaming__firstLetter (System_String_o* boneName, const MethodInfo* method);
System_String_o* RootMotion_BipedNaming__lastLetter (System_String_o* boneName, const MethodInfo* method);
void RootMotion_BipedNaming___cctor (const MethodInfo* method);
