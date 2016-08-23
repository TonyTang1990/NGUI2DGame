#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t2359;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Collections.ArrayList
struct ArrayList_t913;
// Mono.Security.ASN1
struct ASN1_t2353;

// System.Void Mono.Security.PKCS7/SignerInfo::.ctor()
extern "C" void SignerInfo__ctor_m14084 (SignerInfo_t2359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignerInfo::.ctor(Mono.Security.ASN1)
extern "C" void SignerInfo__ctor_m14085 (SignerInfo_t2359 * __this, ASN1_t2353 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignerInfo::get_IssuerName()
extern "C" String_t* SignerInfo_get_IssuerName_m14086 (SignerInfo_t2359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_SerialNumber()
extern "C" ByteU5BU5D_t159* SignerInfo_get_SerialNumber_m14087 (SignerInfo_t2359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_AuthenticatedAttributes()
extern "C" ArrayList_t913 * SignerInfo_get_AuthenticatedAttributes_m14088 (SignerInfo_t2359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignerInfo::get_HashName()
extern "C" String_t* SignerInfo_get_HashName_m14089 (SignerInfo_t2359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignerInfo::set_HashName(System.String)
extern "C" void SignerInfo_set_HashName_m14090 (SignerInfo_t2359 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_Signature()
extern "C" ByteU5BU5D_t159* SignerInfo_get_Signature_m14091 (SignerInfo_t2359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_UnauthenticatedAttributes()
extern "C" ArrayList_t913 * SignerInfo_get_UnauthenticatedAttributes_m14092 (SignerInfo_t2359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.PKCS7/SignerInfo::get_Version()
extern "C" uint8_t SignerInfo_get_Version_m14093 (SignerInfo_t2359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
