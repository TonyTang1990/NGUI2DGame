#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_t1979;
// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t1980;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.Object
struct Object_t;

// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
extern "C" void ConnectionManagementElementCollection__ctor_m10961 (ConnectionManagementElementCollection_t1979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.Int32)
extern "C" ConnectionManagementElement_t1980 * ConnectionManagementElementCollection_get_Item_m10962 (ConnectionManagementElementCollection_t1979 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.Int32,System.Net.Configuration.ConnectionManagementElement)
extern "C" void ConnectionManagementElementCollection_set_Item_m10963 (ConnectionManagementElementCollection_t1979 * __this, int32_t ___index, ConnectionManagementElement_t1980 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.String)
extern "C" ConnectionManagementElement_t1980 * ConnectionManagementElementCollection_get_Item_m10964 (ConnectionManagementElementCollection_t1979 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.String,System.Net.Configuration.ConnectionManagementElement)
extern "C" void ConnectionManagementElementCollection_set_Item_m10965 (ConnectionManagementElementCollection_t1979 * __this, String_t* ___name, ConnectionManagementElement_t1980 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Add(System.Net.Configuration.ConnectionManagementElement)
extern "C" void ConnectionManagementElementCollection_Add_m10966 (ConnectionManagementElementCollection_t1979 * __this, ConnectionManagementElement_t1980 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Clear()
extern "C" void ConnectionManagementElementCollection_Clear_m10967 (ConnectionManagementElementCollection_t1979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.ConnectionManagementElementCollection::CreateNewElement()
extern "C" ConfigurationElement_t1416 * ConnectionManagementElementCollection_CreateNewElement_m10968 (ConnectionManagementElementCollection_t1979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.ConnectionManagementElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C" Object_t * ConnectionManagementElementCollection_GetElementKey_m10969 (ConnectionManagementElementCollection_t1979 * __this, ConfigurationElement_t1416 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.ConnectionManagementElementCollection::IndexOf(System.Net.Configuration.ConnectionManagementElement)
extern "C" int32_t ConnectionManagementElementCollection_IndexOf_m10970 (ConnectionManagementElementCollection_t1979 * __this, ConnectionManagementElement_t1980 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.Net.Configuration.ConnectionManagementElement)
extern "C" void ConnectionManagementElementCollection_Remove_m10971 (ConnectionManagementElementCollection_t1979 * __this, ConnectionManagementElement_t1980 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.String)
extern "C" void ConnectionManagementElementCollection_Remove_m10972 (ConnectionManagementElementCollection_t1979 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::RemoveAt(System.Int32)
extern "C" void ConnectionManagementElementCollection_RemoveAt_m10973 (ConnectionManagementElementCollection_t1979 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
