#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_t1827;
// System.IO.Stream
struct Stream_t844;
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t1826;

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::.ctor(System.IO.Stream,System.Int32)
extern "C" void InflaterInputBuffer__ctor_m10118 (InflaterInputBuffer_t1827 * __this, Stream_t844 * ___stream, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::get_RawLength()
extern "C" int32_t InflaterInputBuffer_get_RawLength_m10119 (InflaterInputBuffer_t1827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::SetInflaterInput(ICSharpCode.SharpZipLib.Zip.Compression.Inflater)
extern "C" void InflaterInputBuffer_SetInflaterInput_m10120 (InflaterInputBuffer_t1827 * __this, Inflater_t1826 * ___inflater, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::Fill()
extern "C" void InflaterInputBuffer_Fill_m10121 (InflaterInputBuffer_t1827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
