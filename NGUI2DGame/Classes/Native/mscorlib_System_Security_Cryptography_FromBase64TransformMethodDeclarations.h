#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.FromBase64Transform
struct FromBase64Transform_t1793;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Security.Cryptography.FromBase64TransformMode
#include "mscorlib_System_Security_Cryptography_FromBase64TransformMod.h"

// System.Void System.Security.Cryptography.FromBase64Transform::.ctor()
extern "C" void FromBase64Transform__ctor_m9910 (FromBase64Transform_t1793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::.ctor(System.Security.Cryptography.FromBase64TransformMode)
extern "C" void FromBase64Transform__ctor_m17784 (FromBase64Transform_t1793 * __this, int32_t ___whitespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::System.IDisposable.Dispose()
extern "C" void FromBase64Transform_System_IDisposable_Dispose_m17785 (FromBase64Transform_t1793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Finalize()
extern "C" void FromBase64Transform_Finalize_m17786 (FromBase64Transform_t1793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.FromBase64Transform::get_CanTransformMultipleBlocks()
extern "C" bool FromBase64Transform_get_CanTransformMultipleBlocks_m17787 (FromBase64Transform_t1793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.FromBase64Transform::get_CanReuseTransform()
extern "C" bool FromBase64Transform_get_CanReuseTransform_m17788 (FromBase64Transform_t1793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::get_InputBlockSize()
extern "C" int32_t FromBase64Transform_get_InputBlockSize_m17789 (FromBase64Transform_t1793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::get_OutputBlockSize()
extern "C" int32_t FromBase64Transform_get_OutputBlockSize_m17790 (FromBase64Transform_t1793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Dispose(System.Boolean)
extern "C" void FromBase64Transform_Dispose_m17791 (FromBase64Transform_t1793 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.FromBase64Transform::lookup(System.Byte)
extern "C" uint8_t FromBase64Transform_lookup_m17792 (FromBase64Transform_t1793 * __this, uint8_t ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::ProcessBlock(System.Byte[],System.Int32)
extern "C" int32_t FromBase64Transform_ProcessBlock_m17793 (FromBase64Transform_t1793 * __this, ByteU5BU5D_t159* ___output, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::CheckInputParameters(System.Byte[],System.Int32,System.Int32)
extern "C" void FromBase64Transform_CheckInputParameters_m17794 (FromBase64Transform_t1793 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t FromBase64Transform_TransformBlock_m17795 (FromBase64Transform_t1793 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t159* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.FromBase64Transform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t159* FromBase64Transform_TransformFinalBlock_m17796 (FromBase64Transform_t1793 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
