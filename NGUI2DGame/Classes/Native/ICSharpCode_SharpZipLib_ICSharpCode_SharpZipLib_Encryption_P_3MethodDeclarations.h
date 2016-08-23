#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged
struct PkzipClassicManaged_t1825;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1239;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1278;

// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_BlockSize()
extern "C" int32_t PkzipClassicManaged_get_BlockSize_m10091 (PkzipClassicManaged_t1825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::set_BlockSize(System.Int32)
extern "C" void PkzipClassicManaged_set_BlockSize_m10092 (PkzipClassicManaged_t1825 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_LegalKeySizes()
extern "C" KeySizesU5BU5D_t1239* PkzipClassicManaged_get_LegalKeySizes_m10093 (PkzipClassicManaged_t1825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::GenerateIV()
extern "C" void PkzipClassicManaged_GenerateIV_m10094 (PkzipClassicManaged_t1825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_Key()
extern "C" ByteU5BU5D_t159* PkzipClassicManaged_get_Key_m10095 (PkzipClassicManaged_t1825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::set_Key(System.Byte[])
extern "C" void PkzipClassicManaged_set_Key_m10096 (PkzipClassicManaged_t1825 * __this, ByteU5BU5D_t159* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::GenerateKey()
extern "C" void PkzipClassicManaged_GenerateKey_m10097 (PkzipClassicManaged_t1825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * PkzipClassicManaged_CreateEncryptor_m10098 (PkzipClassicManaged_t1825 * __this, ByteU5BU5D_t159* ___rgbKey, ByteU5BU5D_t159* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * PkzipClassicManaged_CreateDecryptor_m10099 (PkzipClassicManaged_t1825 * __this, ByteU5BU5D_t159* ___rgbKey, ByteU5BU5D_t159* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::.ctor()
extern "C" void PkzipClassicManaged__ctor_m10100 (PkzipClassicManaged_t1825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
