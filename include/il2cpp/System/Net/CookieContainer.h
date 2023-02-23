#pragma once

#include "il2cpp.h"

void System_Net_CookieContainer___ctor (System_Net_CookieContainer_o* __this, const MethodInfo* method);
void System_Net_CookieContainer__AddRemoveDomain (System_Net_CookieContainer_o* __this, System_String_o* key, System_Net_PathList_o* value, const MethodInfo* method);
void System_Net_CookieContainer__Add (System_Net_CookieContainer_o* __this, System_Net_Cookie_o* cookie, bool throwOnError, const MethodInfo* method);
bool System_Net_CookieContainer__AgeCookies (System_Net_CookieContainer_o* __this, System_String_o* domain, const MethodInfo* method);
int32_t System_Net_CookieContainer__ExpireCollection (System_Net_CookieContainer_o* __this, System_Net_CookieCollection_o* cc, const MethodInfo* method);
bool System_Net_CookieContainer__IsLocalDomain (System_Net_CookieContainer_o* __this, System_String_o* host, const MethodInfo* method);
System_Net_CookieCollection_o* System_Net_CookieContainer__CookieCutter (System_Net_CookieContainer_o* __this, System_Uri_o* uri, System_String_o* headerName, System_String_o* setCookieHeader, bool isThrow, const MethodInfo* method);
System_Net_CookieCollection_o* System_Net_CookieContainer__InternalGetCookies (System_Net_CookieContainer_o* __this, System_Uri_o* uri, const MethodInfo* method);
void System_Net_CookieContainer__BuildCookieCollectionFromDomainMatches (System_Net_CookieContainer_o* __this, System_Uri_o* uri, bool isSecure, int32_t port, System_Net_CookieCollection_o* cookies, System_Collections_Generic_List_string__o* domainAttribute, bool matchOnlyPlainCookie, const MethodInfo* method);
void System_Net_CookieContainer__MergeUpdateCollections (System_Net_CookieContainer_o* __this, System_Net_CookieCollection_o* destination, System_Net_CookieCollection_o* source, int32_t port, bool isSecure, bool isPlainOnly, const MethodInfo* method);
System_String_o* System_Net_CookieContainer__GetCookieHeader (System_Net_CookieContainer_o* __this, System_Uri_o* uri, const MethodInfo* method);
System_String_o* System_Net_CookieContainer__GetCookieHeader (System_Net_CookieContainer_o* __this, System_Uri_o* uri, System_String_o** optCookie2, const MethodInfo* method);
void System_Net_CookieContainer___cctor (const MethodInfo* method);
