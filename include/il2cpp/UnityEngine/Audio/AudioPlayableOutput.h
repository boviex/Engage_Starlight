#pragma once

#include "il2cpp.h"

UnityEngine_Audio_AudioPlayableOutput_o UnityEngine_Audio_AudioPlayableOutput__Create (UnityEngine_Playables_PlayableGraph_o graph, System_String_o* name, UnityEngine_AudioSource_o* target, const MethodInfo* method_info);
void UnityEngine_Audio_AudioPlayableOutput___ctor (UnityEngine_Audio_AudioPlayableOutput_o __this, UnityEngine_Playables_PlayableOutputHandle_o handle, const MethodInfo* method_info);
UnityEngine_Audio_AudioPlayableOutput_o UnityEngine_Audio_AudioPlayableOutput__get_Null (const MethodInfo* method_info);
UnityEngine_Playables_PlayableOutputHandle_o UnityEngine_Audio_AudioPlayableOutput__GetHandle (UnityEngine_Audio_AudioPlayableOutput_o __this, const MethodInfo* method_info);
UnityEngine_Playables_PlayableOutput_o UnityEngine_Audio_AudioPlayableOutput__op_Implicit (UnityEngine_Audio_AudioPlayableOutput_o output, const MethodInfo* method_info);
UnityEngine_Audio_AudioPlayableOutput_o UnityEngine_Audio_AudioPlayableOutput__op_Explicit (UnityEngine_Playables_PlayableOutput_o output, const MethodInfo* method_info);
void UnityEngine_Audio_AudioPlayableOutput__SetTarget (UnityEngine_Audio_AudioPlayableOutput_o __this, UnityEngine_AudioSource_o* value, const MethodInfo* method_info);
void UnityEngine_Audio_AudioPlayableOutput__SetEvaluateOnSeek (UnityEngine_Audio_AudioPlayableOutput_o __this, bool value, const MethodInfo* method_info);
void UnityEngine_Audio_AudioPlayableOutput__InternalSetTarget (UnityEngine_Playables_PlayableOutputHandle_o* output, UnityEngine_AudioSource_o* target, const MethodInfo* method_info);
void UnityEngine_Audio_AudioPlayableOutput__InternalSetEvaluateOnSeek (UnityEngine_Playables_PlayableOutputHandle_o* output, bool value, const MethodInfo* method_info);