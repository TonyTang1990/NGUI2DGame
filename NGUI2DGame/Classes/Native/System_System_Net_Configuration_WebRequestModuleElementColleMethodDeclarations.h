#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t2003;
// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t2004;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.Object
struct Object_t;

// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
extern "C" void WebRequestModuleElementCollection__ctor_m11102 (WebRequestModuleElementCollection_t2003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.WebRequestModuleElement System.Net.Configuration.WebRequestModuleElementCollection::get_Item(System.Int32)
extern "C" WebRequestModuleElement_t2004 * WebRequestModuleElementCollection_get_Item_m11103 (WebRequestModuleElementCollection_t2003 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::set_Item(System.Int32,System.Net.Configuration.WebRequestModuleElement)
extern "C" void WebRequestModuleElementCollection_set_Item_m11104 (WebRequestModuleElementCollection_t2003 * __this, int32_t ___index, WebRequestModuleElement_t2004 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.WebRequestModuleElement System.Net.Configuration.WebRequestModuleElementCollection::get_Item(System.String)
extern "C" WebRequestModuleElement_t2004 * WebRequestModuleElementCollection_get_Item_m11105 (WebRequestModuleElementCollection_t2003 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::set_Item(System.String,System.Net.Configuration.WebRequestModuleElement)
extern "C" void WebRequestModuleElementCollection_set_Item_m11106 (WebRequestModuleElementCollection_t2003 * __this, String_t* ___name, WebRequestModuleElement_t2004 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Add(System.Net.Configuration.WebRequestModuleElement)
extern "C" void WebRequestModuleElementCollection_Add_m11107 (WebRequestModuleElementCollection_t2003 * __this, WebRequestModuleElement_t2004 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Clear()
extern "C" void WebRequestModuleElementCollection_Clear_m11108 (WebRequestModuleElementCollection_t2003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.WebRequestModuleElementCollection::CreateNewElement()
extern "C" ConfigurationElement_t1416 * WebRequestModuleElementCollection_CreateNewElement_m11109 (WebRequestModuleElementCollection_t2003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.WebRequestModuleElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C" Object_t * WebRequestModuleElementCollection_GetElementKey_m11110 (WebRequestModuleElementCollection_t2003 * __this, ConfigurationElement_t1416 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.WebRequestModuleElementCollection::IndexOf(System.Net.Configuration.WebRequestModuleElement)
extern "C" int32_t WebRequestModuleElementCollection_IndexOf_m11111 (WebRequestModuleElementCollection_t2003 * __this, WebRequestModuleElement_t2004 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Remove(System.Net.Configuration.WebRequestModuleElement)
extern "C" void WebRequestModuleElementCollection_Remove_m11112 (WebRequestModuleElementCollection_t2003 * __this, WebRequestModuleElement_t2004 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Remove(System.String)
extern "C" void WebRequestModuleElementCollection_Remove_m11113 (WebRequestModuleElementCollection_t2003 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::RemoveAt(System.Int32)
extern "C" void WebRequestModuleElementCollection_RemoveAt_m11114 (WebRequestModuleElementCollection_t2003 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
