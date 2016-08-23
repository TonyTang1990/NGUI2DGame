#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform
struct PkzipClassicDecryptCryptoTransform_t1824;
// System.Byte[]
struct ByteU5BU5D_t159;

// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::.ctor(System.Byte[])
extern "C" void PkzipClassicDecryptCryptoTransform__ctor_m10083 (PkzipClassicDecryptCryptoTransform_t1824 * __this, ByteU5BU5D_t159* ___keyBlock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t159* PkzipClassicDecryptCryptoTransform_TransformFinalBlock_m10084 (PkzipClassicDecryptCryptoTransform_t1824 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t PkzipClassicDecryptCryptoTransform_TransformBlock_m10085 (PkzipClassicDecryptCryptoTransform_t1824 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t159* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_CanReuseTransform()
extern "C" bool PkzipClassicDecryptCryptoTransform_get_CanReuseTransform_m10086 (PkzipClassicDecryptCryptoTransform_t1824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_InputBlockSize()
extern "C" int32_t PkzipClassicDecryptCryptoTransform_get_InputBlockSize_m10087 (PkzipClassicDecryptCryptoTransform_t1824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_OutputBlockSize()
extern "C" int32_t PkzipClassicDecryptCryptoTransform_get_OutputBlockSize_m10088 (PkzipClassicDecryptCryptoTransform_t1824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_CanTransformMultipleBlocks()
extern "C" bool PkzipClassicDecryptCryptoTransform_get_CanTransformMultipleBlocks_m10089 (PkzipClassicDecryptCryptoTransform_t1824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::Dispose()
extern "C" void PkzipClassicDecryptCryptoTransform_Dispose_m10090 (PkzipClassicDecryptCryptoTransform_t1824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
