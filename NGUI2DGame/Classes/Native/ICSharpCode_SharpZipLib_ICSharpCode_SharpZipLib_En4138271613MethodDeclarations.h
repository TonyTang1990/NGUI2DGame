#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged
struct PkzipClassicManaged_t4138271613;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1153004758;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;

#include "codegen/il2cpp-codegen.h"

// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_BlockSize()
extern "C"  int32_t PkzipClassicManaged_get_BlockSize_m3066179900 (PkzipClassicManaged_t4138271613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::set_BlockSize(System.Int32)
extern "C"  void PkzipClassicManaged_set_BlockSize_m2936058981 (PkzipClassicManaged_t4138271613 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_LegalKeySizes()
extern "C"  KeySizesU5BU5D_t1153004758* PkzipClassicManaged_get_LegalKeySizes_m2212659125 (PkzipClassicManaged_t4138271613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::GenerateIV()
extern "C"  void PkzipClassicManaged_GenerateIV_m3620088017 (PkzipClassicManaged_t4138271613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_Key()
extern "C"  ByteU5BU5D_t3397334013* PkzipClassicManaged_get_Key_m3250387039 (PkzipClassicManaged_t4138271613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::set_Key(System.Byte[])
extern "C"  void PkzipClassicManaged_set_Key_m1328383866 (PkzipClassicManaged_t4138271613 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::GenerateKey()
extern "C"  void PkzipClassicManaged_GenerateKey_m1891111149 (PkzipClassicManaged_t4138271613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * PkzipClassicManaged_CreateEncryptor_m3706001281 (PkzipClassicManaged_t4138271613 * __this, ByteU5BU5D_t3397334013* ___rgbKey0, ByteU5BU5D_t3397334013* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * PkzipClassicManaged_CreateDecryptor_m2218038735 (PkzipClassicManaged_t4138271613 * __this, ByteU5BU5D_t3397334013* ___rgbKey0, ByteU5BU5D_t3397334013* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::.ctor()
extern "C"  void PkzipClassicManaged__ctor_m1234613529 (PkzipClassicManaged_t4138271613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
