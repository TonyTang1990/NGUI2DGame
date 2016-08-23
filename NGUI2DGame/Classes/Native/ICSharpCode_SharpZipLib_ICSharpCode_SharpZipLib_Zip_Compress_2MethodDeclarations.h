#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t1830;
// System.Byte[]
struct ByteU5BU5D_t159;

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::.ctor()
extern "C" void StreamManipulator__ctor_m10130 (StreamManipulator_t1830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::PeekBits(System.Int32)
extern "C" int32_t StreamManipulator_PeekBits_m10131 (StreamManipulator_t1830 * __this, int32_t ___bitCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::DropBits(System.Int32)
extern "C" void StreamManipulator_DropBits_m10132 (StreamManipulator_t1830 * __this, int32_t ___bitCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_AvailableBits()
extern "C" int32_t StreamManipulator_get_AvailableBits_m10133 (StreamManipulator_t1830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_AvailableBytes()
extern "C" int32_t StreamManipulator_get_AvailableBytes_m10134 (StreamManipulator_t1830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::SkipToByteBoundary()
extern "C" void StreamManipulator_SkipToByteBoundary_m10135 (StreamManipulator_t1830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_IsNeedingInput()
extern "C" bool StreamManipulator_get_IsNeedingInput_m10136 (StreamManipulator_t1830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::CopyBytes(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t StreamManipulator_CopyBytes_m10137 (StreamManipulator_t1830 * __this, ByteU5BU5D_t159* ___output, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C" void StreamManipulator_SetInput_m10138 (StreamManipulator_t1830 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
