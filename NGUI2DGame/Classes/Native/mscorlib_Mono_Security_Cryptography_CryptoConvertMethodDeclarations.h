#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.CryptoConvert
struct CryptoConvert_t2371;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Security.Cryptography.RSA
struct RSA_t1243;
// System.String
struct String_t;

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C" int32_t CryptoConvert_ToInt32LE_m14153 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C" uint32_t CryptoConvert_ToUInt32LE_m14154 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C" ByteU5BU5D_t159* CryptoConvert_GetBytesLE_m14155 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
extern "C" ByteU5BU5D_t159* CryptoConvert_Trim_m14156 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t1243 * CryptoConvert_FromCapiPrivateKeyBlob_m14157 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t159* CryptoConvert_ToCapiPrivateKeyBlob_m14158 (Object_t * __this /* static, unused */, RSA_t1243 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C" RSA_t1243 * CryptoConvert_FromCapiPublicKeyBlob_m14159 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t1243 * CryptoConvert_FromCapiPublicKeyBlob_m14160 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t159* CryptoConvert_ToCapiPublicKeyBlob_m14161 (Object_t * __this /* static, unused */, RSA_t1243 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[])
extern "C" RSA_t1243 * CryptoConvert_FromCapiKeyBlob_m14162 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t1243 * CryptoConvert_FromCapiKeyBlob_m14163 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C" ByteU5BU5D_t159* CryptoConvert_ToCapiKeyBlob_m14164 (Object_t * __this /* static, unused */, RSA_t1243 * ___rsa, bool ___includePrivateKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
extern "C" String_t* CryptoConvert_ToHex_m14165 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Cryptography.CryptoConvert::FromHexChar(System.Char)
extern "C" uint8_t CryptoConvert_FromHexChar_m14166 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::FromHex(System.String)
extern "C" ByteU5BU5D_t159* CryptoConvert_FromHex_m14167 (Object_t * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
