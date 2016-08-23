#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct AuthenticodeDeformatter_t2370;
// System.String
struct String_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2368;
// System.Byte[]
struct ByteU5BU5D_t159;
// Mono.Security.PKCS7/SignedData
struct SignedData_t2360;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1233;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t2359;

// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor()
extern "C" void AuthenticodeDeformatter__ctor_m14144 (AuthenticodeDeformatter_t2370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor(System.String)
extern "C" void AuthenticodeDeformatter__ctor_m14145 (AuthenticodeDeformatter_t2370 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::set_FileName(System.String)
extern "C" void AuthenticodeDeformatter_set_FileName_m14146 (AuthenticodeDeformatter_t2370 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::get_SigningCertificate()
extern "C" X509Certificate_t2368 * AuthenticodeDeformatter_get_SigningCertificate_m14147 (AuthenticodeDeformatter_t2370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CheckSignature(System.String)
extern "C" bool AuthenticodeDeformatter_CheckSignature_m14148 (AuthenticodeDeformatter_t2370 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CompareIssuerSerial(System.String,System.Byte[],Mono.Security.X509.X509Certificate)
extern "C" bool AuthenticodeDeformatter_CompareIssuerSerial_m14149 (AuthenticodeDeformatter_t2370 * __this, String_t* ___issuer, ByteU5BU5D_t159* ___serial, X509Certificate_t2368 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifySignature(Mono.Security.PKCS7/SignedData,System.Byte[],System.Security.Cryptography.HashAlgorithm)
extern "C" bool AuthenticodeDeformatter_VerifySignature_m14150 (AuthenticodeDeformatter_t2370 * __this, SignedData_t2360 * ___sd, ByteU5BU5D_t159* ___calculatedMessageDigest, HashAlgorithm_t1233 * ___ha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifyCounterSignature(Mono.Security.PKCS7/SignerInfo,System.Byte[])
extern "C" bool AuthenticodeDeformatter_VerifyCounterSignature_m14151 (AuthenticodeDeformatter_t2370 * __this, SignerInfo_t2359 * ___cs, ByteU5BU5D_t159* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::Reset()
extern "C" void AuthenticodeDeformatter_Reset_m14152 (AuthenticodeDeformatter_t2370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
