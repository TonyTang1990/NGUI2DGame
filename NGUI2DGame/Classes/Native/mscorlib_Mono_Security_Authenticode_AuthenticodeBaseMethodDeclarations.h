#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Authenticode.AuthenticodeBase
struct AuthenticodeBase_t2367;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1233;

// System.Void Mono.Security.Authenticode.AuthenticodeBase::.ctor()
extern "C" void AuthenticodeBase__ctor_m14137 (AuthenticodeBase_t2367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::get_PEOffset()
extern "C" int32_t AuthenticodeBase_get_PEOffset_m14138 (AuthenticodeBase_t2367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Open(System.String)
extern "C" void AuthenticodeBase_Open_m14139 (AuthenticodeBase_t2367 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Close()
extern "C" void AuthenticodeBase_Close_m14140 (AuthenticodeBase_t2367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeBase::ReadFirstBlock()
extern "C" bool AuthenticodeBase_ReadFirstBlock_m14141 (AuthenticodeBase_t2367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetSecurityEntry()
extern "C" ByteU5BU5D_t159* AuthenticodeBase_GetSecurityEntry_m14142 (AuthenticodeBase_t2367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetHash(System.Security.Cryptography.HashAlgorithm)
extern "C" ByteU5BU5D_t159* AuthenticodeBase_GetHash_m14143 (AuthenticodeBase_t2367 * __this, HashAlgorithm_t1233 * ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
