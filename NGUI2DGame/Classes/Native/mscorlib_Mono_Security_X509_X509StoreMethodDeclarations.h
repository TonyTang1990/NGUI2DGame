#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Store
struct X509Store_t2393;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2358;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t159;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2368;

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" void X509Store__ctor_m14414 (X509Store_t2393 * __this, String_t* ___path, bool ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" X509CertificateCollection_t2358 * X509Store_get_Certificates_m14415 (X509Store_t2393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" ByteU5BU5D_t159* X509Store_Load_m14416 (X509Store_t2393 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" X509Certificate_t2368 * X509Store_LoadCertificate_m14417 (X509Store_t2393 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" bool X509Store_CheckStore_m14418 (X509Store_t2393 * __this, String_t* ___path, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" X509CertificateCollection_t2358 * X509Store_BuildCertificatesCollection_m14419 (X509Store_t2393 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
