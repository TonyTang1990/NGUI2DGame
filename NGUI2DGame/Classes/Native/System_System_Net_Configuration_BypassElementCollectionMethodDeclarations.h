#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t1977;
// System.Net.Configuration.BypassElement
struct BypassElement_t1978;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.Object
struct Object_t;

// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
extern "C" void BypassElementCollection__ctor_m10943 (BypassElementCollection_t1977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElement System.Net.Configuration.BypassElementCollection::get_Item(System.Int32)
extern "C" BypassElement_t1978 * BypassElementCollection_get_Item_m10944 (BypassElementCollection_t1977 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::set_Item(System.Int32,System.Net.Configuration.BypassElement)
extern "C" void BypassElementCollection_set_Item_m10945 (BypassElementCollection_t1977 * __this, int32_t ___index, BypassElement_t1978 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElement System.Net.Configuration.BypassElementCollection::get_Item(System.String)
extern "C" BypassElement_t1978 * BypassElementCollection_get_Item_m10946 (BypassElementCollection_t1977 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::set_Item(System.String,System.Net.Configuration.BypassElement)
extern "C" void BypassElementCollection_set_Item_m10947 (BypassElementCollection_t1977 * __this, String_t* ___name, BypassElement_t1978 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.BypassElementCollection::get_ThrowOnDuplicate()
extern "C" bool BypassElementCollection_get_ThrowOnDuplicate_m10948 (BypassElementCollection_t1977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Add(System.Net.Configuration.BypassElement)
extern "C" void BypassElementCollection_Add_m10949 (BypassElementCollection_t1977 * __this, BypassElement_t1978 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Clear()
extern "C" void BypassElementCollection_Clear_m10950 (BypassElementCollection_t1977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.BypassElementCollection::CreateNewElement()
extern "C" ConfigurationElement_t1416 * BypassElementCollection_CreateNewElement_m10951 (BypassElementCollection_t1977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.BypassElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C" Object_t * BypassElementCollection_GetElementKey_m10952 (BypassElementCollection_t1977 * __this, ConfigurationElement_t1416 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.BypassElementCollection::IndexOf(System.Net.Configuration.BypassElement)
extern "C" int32_t BypassElementCollection_IndexOf_m10953 (BypassElementCollection_t1977 * __this, BypassElement_t1978 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Remove(System.Net.Configuration.BypassElement)
extern "C" void BypassElementCollection_Remove_m10954 (BypassElementCollection_t1977 * __this, BypassElement_t1978 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Remove(System.String)
extern "C" void BypassElementCollection_Remove_m10955 (BypassElementCollection_t1977 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::RemoveAt(System.Int32)
extern "C" void BypassElementCollection_RemoveAt_m10956 (BypassElementCollection_t1977 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
