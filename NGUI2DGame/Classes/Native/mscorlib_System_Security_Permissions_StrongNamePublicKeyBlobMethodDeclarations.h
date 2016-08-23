#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2884;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Security.Permissions.StrongNamePublicKeyBlob::.ctor(System.Byte[])
extern "C" void StrongNamePublicKeyBlob__ctor_m18249 (StrongNamePublicKeyBlob_t2884 * __this, ByteU5BU5D_t159* ___publicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNamePublicKeyBlob::FromString(System.String)
extern "C" StrongNamePublicKeyBlob_t2884 * StrongNamePublicKeyBlob_FromString_m18250 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Permissions.StrongNamePublicKeyBlob::CharToByte(System.Char)
extern "C" uint8_t StrongNamePublicKeyBlob_CharToByte_m18251 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNamePublicKeyBlob::Equals(System.Object)
extern "C" bool StrongNamePublicKeyBlob_Equals_m18252 (StrongNamePublicKeyBlob_t2884 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Permissions.StrongNamePublicKeyBlob::GetHashCode()
extern "C" int32_t StrongNamePublicKeyBlob_GetHashCode_m18253 (StrongNamePublicKeyBlob_t2884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.StrongNamePublicKeyBlob::ToString()
extern "C" String_t* StrongNamePublicKeyBlob_ToString_m18254 (StrongNamePublicKeyBlob_t2884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
