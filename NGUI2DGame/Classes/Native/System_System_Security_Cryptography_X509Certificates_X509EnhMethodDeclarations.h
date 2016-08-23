#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t2120;
// System.Security.Cryptography.OidCollection
struct OidCollection_t2097;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2096;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.String
struct String_t;
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509EnhancedKeyUsageExtension__ctor_m12092 (X509EnhancedKeyUsageExtension_t2120 * __this, AsnEncodedData_t2096 * ___encodedEnhancedKeyUsages, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::get_EnhancedKeyUsages()
extern "C" OidCollection_t2097 * X509EnhancedKeyUsageExtension_get_EnhancedKeyUsages_m12093 (X509EnhancedKeyUsageExtension_t2120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509EnhancedKeyUsageExtension_CopyFrom_m12094 (X509EnhancedKeyUsageExtension_t2120 * __this, AsnEncodedData_t2096 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
extern "C" int32_t X509EnhancedKeyUsageExtension_Decode_m12095 (X509EnhancedKeyUsageExtension_t2120 * __this, ByteU5BU5D_t159* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
extern "C" String_t* X509EnhancedKeyUsageExtension_ToString_m12096 (X509EnhancedKeyUsageExtension_t2120 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
