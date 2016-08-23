#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/SignedData
struct SignedData_t2360;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2358;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t2356;
// System.String
struct String_t;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t2359;
// Mono.Security.ASN1
struct ASN1_t2353;

// System.Void Mono.Security.PKCS7/SignedData::.ctor(Mono.Security.ASN1)
extern "C" void SignedData__ctor_m14078 (SignedData_t2360 * __this, ASN1_t2353 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::get_Certificates()
extern "C" X509CertificateCollection_t2358 * SignedData_get_Certificates_m14079 (SignedData_t2360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::get_ContentInfo()
extern "C" ContentInfo_t2356 * SignedData_get_ContentInfo_m14080 (SignedData_t2360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignedData::set_HashName(System.String)
extern "C" void SignedData_set_HashName_m14081 (SignedData_t2360 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::get_SignerInfo()
extern "C" SignerInfo_t2359 * SignedData_get_SignerInfo_m14082 (SignedData_t2360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignedData::OidToName(System.String)
extern "C" String_t* SignedData_OidToName_m14083 (SignedData_t2360 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
