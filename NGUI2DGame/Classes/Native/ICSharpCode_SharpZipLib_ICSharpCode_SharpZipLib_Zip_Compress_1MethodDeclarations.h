#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
struct OutputWindow_t1829;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t1830;
// System.Byte[]
struct ByteU5BU5D_t159;

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::Write(System.Int32)
extern "C" void OutputWindow_Write_m10122 (OutputWindow_t1829 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::SlowRepeat(System.Int32,System.Int32,System.Int32)
extern "C" void OutputWindow_SlowRepeat_m10123 (OutputWindow_t1829 * __this, int32_t ___repStart, int32_t ___length, int32_t ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::Repeat(System.Int32,System.Int32)
extern "C" void OutputWindow_Repeat_m10124 (OutputWindow_t1829 * __this, int32_t ___length, int32_t ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::CopyStored(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator,System.Int32)
extern "C" int32_t OutputWindow_CopyStored_m10125 (OutputWindow_t1829 * __this, StreamManipulator_t1830 * ___input, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::GetFreeSpace()
extern "C" int32_t OutputWindow_GetFreeSpace_m10126 (OutputWindow_t1829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::GetAvailable()
extern "C" int32_t OutputWindow_GetAvailable_m10127 (OutputWindow_t1829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::CopyOutput(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t OutputWindow_CopyOutput_m10128 (OutputWindow_t1829 * __this, ByteU5BU5D_t159* ___output, int32_t ___offset, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::.ctor()
extern "C" void OutputWindow__ctor_m10129 (OutputWindow_t1829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
