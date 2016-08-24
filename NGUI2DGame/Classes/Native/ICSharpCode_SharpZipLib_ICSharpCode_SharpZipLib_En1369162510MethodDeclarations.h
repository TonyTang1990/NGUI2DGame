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

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform
struct PkzipClassicDecryptCryptoTransform_t1369162510;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::.ctor(System.Byte[])
extern "C"  void PkzipClassicDecryptCryptoTransform__ctor_m3583175229 (PkzipClassicDecryptCryptoTransform_t1369162510 * __this, ByteU5BU5D_t3397334013* ___keyBlock0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* PkzipClassicDecryptCryptoTransform_TransformFinalBlock_m3041379004 (PkzipClassicDecryptCryptoTransform_t1369162510 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t PkzipClassicDecryptCryptoTransform_TransformBlock_m2868400146 (PkzipClassicDecryptCryptoTransform_t1369162510 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t3397334013* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_CanReuseTransform()
extern "C"  bool PkzipClassicDecryptCryptoTransform_get_CanReuseTransform_m2983456339 (PkzipClassicDecryptCryptoTransform_t1369162510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_InputBlockSize()
extern "C"  int32_t PkzipClassicDecryptCryptoTransform_get_InputBlockSize_m2568311075 (PkzipClassicDecryptCryptoTransform_t1369162510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_OutputBlockSize()
extern "C"  int32_t PkzipClassicDecryptCryptoTransform_get_OutputBlockSize_m3681876718 (PkzipClassicDecryptCryptoTransform_t1369162510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_CanTransformMultipleBlocks()
extern "C"  bool PkzipClassicDecryptCryptoTransform_get_CanTransformMultipleBlocks_m2215393225 (PkzipClassicDecryptCryptoTransform_t1369162510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::Dispose()
extern "C"  void PkzipClassicDecryptCryptoTransform_Dispose_m1326022445 (PkzipClassicDecryptCryptoTransform_t1369162510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
