#pragma once

#include "il2cpp.h"

void System_Text_RegularExpressions_RegexRunner___ctor (System_Text_RegularExpressions_RegexRunner_o* __this, const MethodInfo* method);
System_Text_RegularExpressions_Match_o* System_Text_RegularExpressions_RegexRunner__Scan (System_Text_RegularExpressions_RegexRunner_o* __this, System_Text_RegularExpressions_Regex_o* regex, System_String_o* text, int32_t textbeg, int32_t textend, int32_t textstart, int32_t prevlen, bool quick, System_TimeSpan_o timeout, const MethodInfo* method);
void System_Text_RegularExpressions_RegexRunner__StartTimeoutWatch (System_Text_RegularExpressions_RegexRunner_o* __this, const MethodInfo* method);
void System_Text_RegularExpressions_RegexRunner__CheckTimeout (System_Text_RegularExpressions_RegexRunner_o* __this, const MethodInfo* method);
void System_Text_RegularExpressions_RegexRunner__DoCheckTimeout (System_Text_RegularExpressions_RegexRunner_o* __this, const MethodInfo* method);
void System_Text_RegularExpressions_RegexRunner__InitMatch (System_Text_RegularExpressions_RegexRunner_o* __this, const MethodInfo* method);
System_Text_RegularExpressions_Match_o* System_Text_RegularExpressions_RegexRunner__TidyMatch (System_Text_RegularExpressions_RegexRunner_o* __this, bool quick, const MethodInfo* method);
void System_Text_RegularExpressions_RegexRunner__EnsureStorage (System_Text_RegularExpressions_RegexRunner_o* __this, const MethodInfo* method);
bool System_Text_RegularExpressions_RegexRunner__IsBoundary (System_Text_RegularExpressions_RegexRunner_o* __this, int32_t index, int32_t startpos, int32_t endpos, const MethodInfo* method);
bool System_Text_RegularExpressions_RegexRunner__IsECMABoundary (System_Text_RegularExpressions_RegexRunner_o* __this, int32_t index, int32_t startpos, int32_t endpos, const MethodInfo* method);
void System_Text_RegularExpressions_RegexRunner__DoubleTrack (System_Text_RegularExpressions_RegexRunner_o* __this, const MethodInfo* method);
void System_Text_RegularExpressions_RegexRunner__DoubleStack (System_Text_RegularExpressions_RegexRunner_o* __this, const MethodInfo* method);
void System_Text_RegularExpressions_RegexRunner__DoubleCrawl (System_Text_RegularExpressions_RegexRunner_o* __this, const MethodInfo* method);
void System_Text_RegularExpressions_RegexRunner__Crawl (System_Text_RegularExpressions_RegexRunner_o* __this, int32_t i, const MethodInfo* method);
int32_t System_Text_RegularExpressions_RegexRunner__Popcrawl (System_Text_RegularExpressions_RegexRunner_o* __this, const MethodInfo* method);
int32_t System_Text_RegularExpressions_RegexRunner__Crawlpos (System_Text_RegularExpressions_RegexRunner_o* __this, const MethodInfo* method);
void System_Text_RegularExpressions_RegexRunner__Capture (System_Text_RegularExpressions_RegexRunner_o* __this, int32_t capnum, int32_t start, int32_t end, const MethodInfo* method);
void System_Text_RegularExpressions_RegexRunner__TransferCapture (System_Text_RegularExpressions_RegexRunner_o* __this, int32_t capnum, int32_t uncapnum, int32_t start, int32_t end, const MethodInfo* method);
void System_Text_RegularExpressions_RegexRunner__Uncapture (System_Text_RegularExpressions_RegexRunner_o* __this, const MethodInfo* method);
bool System_Text_RegularExpressions_RegexRunner__IsMatched (System_Text_RegularExpressions_RegexRunner_o* __this, int32_t cap, const MethodInfo* method);
int32_t System_Text_RegularExpressions_RegexRunner__MatchIndex (System_Text_RegularExpressions_RegexRunner_o* __this, int32_t cap, const MethodInfo* method);
int32_t System_Text_RegularExpressions_RegexRunner__MatchLength (System_Text_RegularExpressions_RegexRunner_o* __this, int32_t cap, const MethodInfo* method);
