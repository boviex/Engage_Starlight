#pragma once

#include "il2cpp.h"

void nn_prepo_PlayReport__Begin (System_String_o* eventId, const MethodInfo* method);
nn_Result_o nn_prepo_PlayReport__End (const MethodInfo* method);
nn_Result_o nn_prepo_PlayReport__End (nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_prepo_PlayReport__Add (System_String_o* key, int64_t val, const MethodInfo* method);
nn_Result_o nn_prepo_PlayReport__Add (System_String_o* key, uint64_t val, const MethodInfo* method);
nn_Result_o nn_prepo_PlayReport__Add (System_String_o* key, float val, const MethodInfo* method);
nn_Result_o nn_prepo_PlayReport__Add (System_String_o* key, double val, const MethodInfo* method);
nn_Result_o nn_prepo_PlayReport__Add (System_String_o* key, System_String_o* val, const MethodInfo* method);
nn_Result_o nn_prepo_PlayReport__Add (System_String_o* key, bool val, const MethodInfo* method);
nn_Result_o nn_prepo_PlayReport__Add (System_String_o* key, System_Byte_array* val, int64_t length, const MethodInfo* method);
nn_Result_o nn_prepo_PlayReport__AddStruct (System_String_o* key, const MethodInfo* method);
int32_t nn_prepo_PlayReport__GetCount (const MethodInfo* method);
int64_t nn_prepo_PlayReport__GetSize (const MethodInfo* method);
