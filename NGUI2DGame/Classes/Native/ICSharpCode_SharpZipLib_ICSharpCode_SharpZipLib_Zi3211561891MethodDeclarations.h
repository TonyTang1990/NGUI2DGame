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

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_t3211561891;
// System.IO.Stream
struct Stream_t3255436806;
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t3958302971;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi3958302971.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::.ctor(System.IO.Stream,System.Int32)
extern "C"  void InflaterInputBuffer__ctor_m1983366716 (InflaterInputBuffer_t3211561891 * __this, Stream_t3255436806 * ___stream0, int32_t ___bufferSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::get_RawLength()
extern "C"  int32_t InflaterInputBuffer_get_RawLength_m1091203859 (InflaterInputBuffer_t3211561891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::SetInflaterInput(ICSharpCode.SharpZipLib.Zip.Compression.Inflater)
extern "C"  void InflaterInputBuffer_SetInflaterInput_m1611710434 (InflaterInputBuffer_t3211561891 * __this, Inflater_t3958302971 * ___inflater0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::Fill()
extern "C"  void InflaterInputBuffer_Fill_m1947457127 (InflaterInputBuffer_t3211561891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
