#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1250;
// Mono.Security.X509.X509Extension
struct X509Extension_t1257;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1222;
// System.Collections.IEnumerator
struct IEnumerator_t288;

// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C" void X509ExtensionCollection__ctor_m5765 (X509ExtensionCollection_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C" void X509ExtensionCollection__ctor_m5766 (X509ExtensionCollection_t1250 * __this, ASN1_t1222 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m5767 (X509ExtensionCollection_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern "C" int32_t X509ExtensionCollection_IndexOf_m5768 (X509ExtensionCollection_t1250 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern "C" X509Extension_t1257 * X509ExtensionCollection_get_Item_m5769 (X509ExtensionCollection_t1250 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
