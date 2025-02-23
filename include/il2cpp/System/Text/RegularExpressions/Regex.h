#pragma once

#include "il2cpp.h"

void System_Text_RegularExpressions_Regex___ctor (System_Text_RegularExpressions_Regex_o* __this, const MethodInfo* method);
void System_Text_RegularExpressions_Regex___ctor (System_Text_RegularExpressions_Regex_o* __this, System_String_o* pattern, const MethodInfo* method);
void System_Text_RegularExpressions_Regex___ctor (System_Text_RegularExpressions_Regex_o* __this, System_String_o* pattern, int32_t options, const MethodInfo* method);
void System_Text_RegularExpressions_Regex___ctor (System_Text_RegularExpressions_Regex_o* __this, System_String_o* pattern, int32_t options, System_TimeSpan_o matchTimeout, bool useCache, const MethodInfo* method);
void System_Text_RegularExpressions_Regex___ctor (System_Text_RegularExpressions_Regex_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
void System_Text_RegularExpressions_Regex__System_Runtime_Serialization_ISerializable_GetObjectData (System_Text_RegularExpressions_Regex_o* __this, System_Runtime_Serialization_SerializationInfo_o* si, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
void System_Text_RegularExpressions_Regex__ValidateMatchTimeout (System_TimeSpan_o matchTimeout, const MethodInfo* method);
System_TimeSpan_o System_Text_RegularExpressions_Regex__InitDefaultMatchTimeout (const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Regex__Escape (System_String_o* str, const MethodInfo* method);
int32_t System_Text_RegularExpressions_Regex__get_Options (System_Text_RegularExpressions_Regex_o* __this, const MethodInfo* method);
System_TimeSpan_o System_Text_RegularExpressions_Regex__get_MatchTimeout (System_Text_RegularExpressions_Regex_o* __this, const MethodInfo* method);
bool System_Text_RegularExpressions_Regex__get_RightToLeft (System_Text_RegularExpressions_Regex_o* __this, const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Regex__ToString (System_Text_RegularExpressions_Regex_o* __this, const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Regex__GroupNameFromNumber (System_Text_RegularExpressions_Regex_o* __this, int32_t i, const MethodInfo* method);
int32_t System_Text_RegularExpressions_Regex__GroupNumberFromName (System_Text_RegularExpressions_Regex_o* __this, System_String_o* name, const MethodInfo* method);
bool System_Text_RegularExpressions_Regex__IsMatch (System_String_o* input, System_String_o* pattern, const MethodInfo* method);
bool System_Text_RegularExpressions_Regex__IsMatch (System_String_o* input, System_String_o* pattern, int32_t options, System_TimeSpan_o matchTimeout, const MethodInfo* method);
bool System_Text_RegularExpressions_Regex__IsMatch (System_Text_RegularExpressions_Regex_o* __this, System_String_o* input, const MethodInfo* method);
bool System_Text_RegularExpressions_Regex__IsMatch (System_Text_RegularExpressions_Regex_o* __this, System_String_o* input, int32_t startat, const MethodInfo* method);
System_Text_RegularExpressions_Match_o* System_Text_RegularExpressions_Regex__Match (System_String_o* input, System_String_o* pattern, const MethodInfo* method);
System_Text_RegularExpressions_Match_o* System_Text_RegularExpressions_Regex__Match (System_String_o* input, System_String_o* pattern, int32_t options, System_TimeSpan_o matchTimeout, const MethodInfo* method);
System_Text_RegularExpressions_Match_o* System_Text_RegularExpressions_Regex__Match (System_Text_RegularExpressions_Regex_o* __this, System_String_o* input, const MethodInfo* method);
System_Text_RegularExpressions_Match_o* System_Text_RegularExpressions_Regex__Match (System_Text_RegularExpressions_Regex_o* __this, System_String_o* input, int32_t startat, const MethodInfo* method);
System_Text_RegularExpressions_MatchCollection_o* System_Text_RegularExpressions_Regex__Matches (System_String_o* input, System_String_o* pattern, const MethodInfo* method);
System_Text_RegularExpressions_MatchCollection_o* System_Text_RegularExpressions_Regex__Matches (System_String_o* input, System_String_o* pattern, int32_t options, System_TimeSpan_o matchTimeout, const MethodInfo* method);
System_Text_RegularExpressions_MatchCollection_o* System_Text_RegularExpressions_Regex__Matches (System_Text_RegularExpressions_Regex_o* __this, System_String_o* input, const MethodInfo* method);
System_Text_RegularExpressions_MatchCollection_o* System_Text_RegularExpressions_Regex__Matches (System_Text_RegularExpressions_Regex_o* __this, System_String_o* input, int32_t startat, const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Regex__Replace (System_String_o* input, System_String_o* pattern, System_String_o* replacement, const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Regex__Replace (System_String_o* input, System_String_o* pattern, System_String_o* replacement, int32_t options, System_TimeSpan_o matchTimeout, const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Regex__Replace (System_Text_RegularExpressions_Regex_o* __this, System_String_o* input, System_String_o* replacement, const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Regex__Replace (System_Text_RegularExpressions_Regex_o* __this, System_String_o* input, System_String_o* replacement, int32_t count, int32_t startat, const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Regex__Replace (System_String_o* input, System_String_o* pattern, System_Text_RegularExpressions_MatchEvaluator_o* evaluator, const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Regex__Replace (System_String_o* input, System_String_o* pattern, System_Text_RegularExpressions_MatchEvaluator_o* evaluator, int32_t options, System_TimeSpan_o matchTimeout, const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Regex__Replace (System_Text_RegularExpressions_Regex_o* __this, System_String_o* input, System_Text_RegularExpressions_MatchEvaluator_o* evaluator, const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Regex__Replace (System_Text_RegularExpressions_Regex_o* __this, System_String_o* input, System_Text_RegularExpressions_MatchEvaluator_o* evaluator, int32_t count, int32_t startat, const MethodInfo* method);
void System_Text_RegularExpressions_Regex__InitializeReferences (System_Text_RegularExpressions_Regex_o* __this, const MethodInfo* method);
System_Text_RegularExpressions_Match_o* System_Text_RegularExpressions_Regex__Run (System_Text_RegularExpressions_Regex_o* __this, bool quick, int32_t prevlen, System_String_o* input, int32_t beginning, int32_t length, int32_t startat, const MethodInfo* method);
System_Text_RegularExpressions_CachedCodeEntry_o* System_Text_RegularExpressions_Regex__LookupCachedAndUpdate (System_String_o* key, const MethodInfo* method);
System_Text_RegularExpressions_CachedCodeEntry_o* System_Text_RegularExpressions_Regex__CacheCode (System_Text_RegularExpressions_Regex_o* __this, System_String_o* key, const MethodInfo* method);
bool System_Text_RegularExpressions_Regex__UseOptionR (System_Text_RegularExpressions_Regex_o* __this, const MethodInfo* method);
bool System_Text_RegularExpressions_Regex__UseOptionInvariant (System_Text_RegularExpressions_Regex_o* __this, const MethodInfo* method);
void System_Text_RegularExpressions_Regex___cctor (const MethodInfo* method);
