#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1236;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Security.Cryptography.RSA
struct RSA_t1243;
// System.Security.Cryptography.DSA
struct DSA_t1249;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m5593 (PrivateKeyInfo_t1236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m5594 (PrivateKeyInfo_t1236 * __this, ByteU5BU5D_t159* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t159* PrivateKeyInfo_get_PrivateKey_m5595 (PrivateKeyInfo_t1236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m5596 (PrivateKeyInfo_t1236 * __this, ByteU5BU5D_t159* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t159* PrivateKeyInfo_RemoveLeadingZero_m5597 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t159* PrivateKeyInfo_Normalize_m5598 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t1243 * PrivateKeyInfo_DecodeRSA_m5599 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t1249 * PrivateKeyInfo_DecodeDSA_m5600 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___privateKey, DSAParameters_t1350  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
