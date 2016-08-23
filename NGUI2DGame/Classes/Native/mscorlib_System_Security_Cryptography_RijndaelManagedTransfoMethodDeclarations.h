#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManagedTransform
struct RijndaelManagedTransform_t2840;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1375;
// System.Byte[]
struct ByteU5BU5D_t159;

// System.Void System.Security.Cryptography.RijndaelManagedTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelManagedTransform__ctor_m17887 (RijndaelManagedTransform_t2840 * __this, Rijndael_t1375 * ___algo, bool ___encryption, ByteU5BU5D_t159* ___key, ByteU5BU5D_t159* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManagedTransform::System.IDisposable.Dispose()
extern "C" void RijndaelManagedTransform_System_IDisposable_Dispose_m17888 (RijndaelManagedTransform_t2840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanTransformMultipleBlocks()
extern "C" bool RijndaelManagedTransform_get_CanTransformMultipleBlocks_m17889 (RijndaelManagedTransform_t2840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanReuseTransform()
extern "C" bool RijndaelManagedTransform_get_CanReuseTransform_m17890 (RijndaelManagedTransform_t2840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::get_InputBlockSize()
extern "C" int32_t RijndaelManagedTransform_get_InputBlockSize_m17891 (RijndaelManagedTransform_t2840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::get_OutputBlockSize()
extern "C" int32_t RijndaelManagedTransform_get_OutputBlockSize_m17892 (RijndaelManagedTransform_t2840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t RijndaelManagedTransform_TransformBlock_m17893 (RijndaelManagedTransform_t2840 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t159* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t159* RijndaelManagedTransform_TransformFinalBlock_m17894 (RijndaelManagedTransform_t2840 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
