#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1226;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1225;
// System.Byte[]
struct ByteU5BU5D_t159;
// Mono.Security.ASN1
struct ASN1_t1222;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m5548 (EncryptedData_t1226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m5549 (EncryptedData_t1226 * __this, ASN1_t1222 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1225 * EncryptedData_get_EncryptionAlgorithm_m5550 (EncryptedData_t1226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t159* EncryptedData_get_EncryptedContent_m5551 (EncryptedData_t1226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
