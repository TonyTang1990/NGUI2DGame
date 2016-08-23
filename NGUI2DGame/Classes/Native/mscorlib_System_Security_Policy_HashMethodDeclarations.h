#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Hash
struct Hash_t2904;
// System.Reflection.Assembly
struct Assembly_t1120;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Policy.Hash::.ctor(System.Reflection.Assembly)
extern "C" void Hash__ctor_m18381 (Hash_t2904 * __this, Assembly_t1120 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::.ctor()
extern "C" void Hash__ctor_m18382 (Hash_t2904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hash__ctor_m18383 (Hash_t2904 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hash_GetObjectData_m18384 (Hash_t2904 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Hash::ToString()
extern "C" String_t* Hash_ToString_m18385 (Hash_t2904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Policy.Hash::GetData()
extern "C" ByteU5BU5D_t159* Hash_GetData_m18386 (Hash_t2904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
