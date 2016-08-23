#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPHostEntry
struct IPHostEntry_t2035;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t2049;
// System.String[]
struct StringU5BU5D_t258;
// System.String
struct String_t;

// System.Void System.Net.IPHostEntry::.ctor()
extern "C" void IPHostEntry__ctor_m11469 (IPHostEntry_t2035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C" IPAddressU5BU5D_t2049* IPHostEntry_get_AddressList_m11470 (IPHostEntry_t2035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern "C" void IPHostEntry_set_AddressList_m11471 (IPHostEntry_t2035 * __this, IPAddressU5BU5D_t2049* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern "C" void IPHostEntry_set_Aliases_m11472 (IPHostEntry_t2035 * __this, StringU5BU5D_t258* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern "C" void IPHostEntry_set_HostName_m11473 (IPHostEntry_t2035 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
