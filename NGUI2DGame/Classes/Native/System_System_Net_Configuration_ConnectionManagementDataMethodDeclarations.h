#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.ConnectionManagementData
struct ConnectionManagementData_t1981;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.Net.Configuration.ConnectionManagementData::.ctor(System.Object)
extern "C" void ConnectionManagementData__ctor_m10979 (ConnectionManagementData_t1981 * __this, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementData::Add(System.String,System.Int32)
extern "C" void ConnectionManagementData_Add_m10980 (ConnectionManagementData_t1981 * __this, String_t* ___address, int32_t ___nconns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Net.Configuration.ConnectionManagementData::GetMaxConnections(System.String)
extern "C" uint32_t ConnectionManagementData_GetMaxConnections_m10981 (ConnectionManagementData_t1981 * __this, String_t* ___hostOrIP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
