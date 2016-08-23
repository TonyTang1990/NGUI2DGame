#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t1264;
// System.String[]
struct StringU5BU5D_t258;
// Mono.Security.ASN1
struct ASN1_t1222;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m5799 (GeneralNames_t1264 * __this, ASN1_t1222 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t258* GeneralNames_get_DNSNames_m5800 (GeneralNames_t1264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t258* GeneralNames_get_IPAddresses_m5801 (GeneralNames_t1264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m5802 (GeneralNames_t1264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
