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

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
struct OutputWindow_t824811027;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t1922289728;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1922289728.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::Write(System.Int32)
extern "C"  void OutputWindow_Write_m1680840174 (OutputWindow_t824811027 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::SlowRepeat(System.Int32,System.Int32,System.Int32)
extern "C"  void OutputWindow_SlowRepeat_m1028604019 (OutputWindow_t824811027 * __this, int32_t ___repStart0, int32_t ___length1, int32_t ___distance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::Repeat(System.Int32,System.Int32)
extern "C"  void OutputWindow_Repeat_m4052354553 (OutputWindow_t824811027 * __this, int32_t ___length0, int32_t ___distance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::CopyStored(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator,System.Int32)
extern "C"  int32_t OutputWindow_CopyStored_m1154690660 (OutputWindow_t824811027 * __this, StreamManipulator_t1922289728 * ___input0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::GetFreeSpace()
extern "C"  int32_t OutputWindow_GetFreeSpace_m841544794 (OutputWindow_t824811027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::GetAvailable()
extern "C"  int32_t OutputWindow_GetAvailable_m2569373299 (OutputWindow_t824811027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::CopyOutput(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t OutputWindow_CopyOutput_m200326477 (OutputWindow_t824811027 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___offset1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::.ctor()
extern "C"  void OutputWindow__ctor_m2270688772 (OutputWindow_t824811027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
