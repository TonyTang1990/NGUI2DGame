#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform
struct PkzipClassicEncryptCryptoTransform_t1823;
// System.Byte[]
struct ByteU5BU5D_t159;

// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::.ctor(System.Byte[])
extern "C" void PkzipClassicEncryptCryptoTransform__ctor_m10075 (PkzipClassicEncryptCryptoTransform_t1823 * __this, ByteU5BU5D_t159* ___keyBlock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t159* PkzipClassicEncryptCryptoTransform_TransformFinalBlock_m10076 (PkzipClassicEncryptCryptoTransform_t1823 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t PkzipClassicEncryptCryptoTransform_TransformBlock_m10077 (PkzipClassicEncryptCryptoTransform_t1823 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t159* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_CanReuseTransform()
extern "C" bool PkzipClassicEncryptCryptoTransform_get_CanReuseTransform_m10078 (PkzipClassicEncryptCryptoTransform_t1823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_InputBlockSize()
extern "C" int32_t PkzipClassicEncryptCryptoTransform_get_InputBlockSize_m10079 (PkzipClassicEncryptCryptoTransform_t1823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_OutputBlockSize()
extern "C" int32_t PkzipClassicEncryptCryptoTransform_get_OutputBlockSize_m10080 (PkzipClassicEncryptCryptoTransform_t1823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_CanTransformMultipleBlocks()
extern "C" bool PkzipClassicEncryptCryptoTransform_get_CanTransformMultipleBlocks_m10081 (PkzipClassicEncryptCryptoTransform_t1823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::Dispose()
extern "C" void PkzipClassicEncryptCryptoTransform_Dispose_m10082 (PkzipClassicEncryptCryptoTransform_t1823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
