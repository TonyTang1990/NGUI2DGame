#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Chain
struct X509Chain_t2369;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2358;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2368;

// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C" void X509Chain__ctor_m14388 (X509Chain_t2369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C" X509CertificateCollection_t2358 * X509Chain_get_TrustAnchors_m14389 (X509Chain_t2369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::LoadCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509Chain_LoadCertificates_m14390 (X509Chain_t2369 * __this, X509CertificateCollection_t2358 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C" bool X509Chain_Build_m14391 (X509Chain_t2369 * __this, X509Certificate_t2368 * ___leaf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::Reset()
extern "C" void X509Chain_Reset_m14392 (X509Chain_t2369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C" bool X509Chain_IsValid_m14393 (X509Chain_t2369 * __this, X509Certificate_t2368 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C" X509Certificate_t2368 * X509Chain_FindCertificateParent_m14394 (X509Chain_t2369 * __this, X509Certificate_t2368 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C" X509Certificate_t2368 * X509Chain_FindCertificateRoot_m14395 (X509Chain_t2369 * __this, X509Certificate_t2368 * ___potentialRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C" bool X509Chain_IsTrusted_m14396 (X509Chain_t2369 * __this, X509Certificate_t2368 * ___potentialTrusted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C" bool X509Chain_IsParent_m14397 (X509Chain_t2369 * __this, X509Certificate_t2368 * ___child, X509Certificate_t2368 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
