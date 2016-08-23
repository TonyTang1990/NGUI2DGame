#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2102;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2096;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1338;
// System.Security.Cryptography.Oid
struct Oid_t2095;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1251;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Security.Cryptography.DSA
struct DSA_t1249;
// System.Security.Cryptography.RSA
struct RSA_t1243;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m11961 (PublicKey_t2102 * __this, X509Certificate_t1251 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t2096 * PublicKey_get_EncodedKeyValue_m11962 (PublicKey_t2102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t2096 * PublicKey_get_EncodedParameters_m11963 (PublicKey_t2102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1338 * PublicKey_get_Key_m11964 (PublicKey_t2102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t2095 * PublicKey_get_Oid_m11965 (PublicKey_t2102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t159* PublicKey_GetUnsignedBigInteger_m11966 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1249 * PublicKey_DecodeDSA_m11967 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___rawPublicKey, ByteU5BU5D_t159* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1243 * PublicKey_DecodeRSA_m11968 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
