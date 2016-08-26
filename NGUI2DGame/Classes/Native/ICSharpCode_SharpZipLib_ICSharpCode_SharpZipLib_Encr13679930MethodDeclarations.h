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

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform
struct PkzipClassicEncryptCryptoTransform_t13679930;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::.ctor(System.Byte[])
extern "C"  void PkzipClassicEncryptCryptoTransform__ctor_m2801825635 (PkzipClassicEncryptCryptoTransform_t13679930 * __this, ByteU5BU5D_t3397334013* ___keyBlock0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* PkzipClassicEncryptCryptoTransform_TransformFinalBlock_m3795471660 (PkzipClassicEncryptCryptoTransform_t13679930 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t PkzipClassicEncryptCryptoTransform_TransformBlock_m2405506378 (PkzipClassicEncryptCryptoTransform_t13679930 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t3397334013* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_CanReuseTransform()
extern "C"  bool PkzipClassicEncryptCryptoTransform_get_CanReuseTransform_m3437999725 (PkzipClassicEncryptCryptoTransform_t13679930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_InputBlockSize()
extern "C"  int32_t PkzipClassicEncryptCryptoTransform_get_InputBlockSize_m1649601585 (PkzipClassicEncryptCryptoTransform_t13679930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_OutputBlockSize()
extern "C"  int32_t PkzipClassicEncryptCryptoTransform_get_OutputBlockSize_m2910404178 (PkzipClassicEncryptCryptoTransform_t13679930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_CanTransformMultipleBlocks()
extern "C"  bool PkzipClassicEncryptCryptoTransform_get_CanTransformMultipleBlocks_m1860241759 (PkzipClassicEncryptCryptoTransform_t13679930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::Dispose()
extern "C"  void PkzipClassicEncryptCryptoTransform_Dispose_m1229966255 (PkzipClassicEncryptCryptoTransform_t13679930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
