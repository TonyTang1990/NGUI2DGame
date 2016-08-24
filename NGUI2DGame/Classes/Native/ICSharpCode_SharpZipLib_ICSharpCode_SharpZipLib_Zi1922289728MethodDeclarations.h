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

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t1922289728;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::.ctor()
extern "C"  void StreamManipulator__ctor_m1888846459 (StreamManipulator_t1922289728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::PeekBits(System.Int32)
extern "C"  int32_t StreamManipulator_PeekBits_m1052229955 (StreamManipulator_t1922289728 * __this, int32_t ___bitCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::DropBits(System.Int32)
extern "C"  void StreamManipulator_DropBits_m4077687679 (StreamManipulator_t1922289728 * __this, int32_t ___bitCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_AvailableBits()
extern "C"  int32_t StreamManipulator_get_AvailableBits_m4055873297 (StreamManipulator_t1922289728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_AvailableBytes()
extern "C"  int32_t StreamManipulator_get_AvailableBytes_m4021342904 (StreamManipulator_t1922289728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::SkipToByteBoundary()
extern "C"  void StreamManipulator_SkipToByteBoundary_m2487502935 (StreamManipulator_t1922289728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_IsNeedingInput()
extern "C"  bool StreamManipulator_get_IsNeedingInput_m2895772626 (StreamManipulator_t1922289728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::CopyBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t StreamManipulator_CopyBytes_m860716032 (StreamManipulator_t1922289728 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void StreamManipulator_SetInput_m3559023036 (StreamManipulator_t1922289728 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
