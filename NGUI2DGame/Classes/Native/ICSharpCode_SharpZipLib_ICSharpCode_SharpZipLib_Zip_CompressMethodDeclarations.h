#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct InflaterInputStream_t1828;
// System.IO.Stream
struct Stream_t844;
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t1826;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.Object
struct Object_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Inflater)
extern "C" void InflaterInputStream__ctor_m10101 (InflaterInputStream_t1828 * __this, Stream_t844 * ___baseInputStream, Inflater_t1826 * ___inf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Inflater,System.Int32)
extern "C" void InflaterInputStream__ctor_m10102 (InflaterInputStream_t1828 * __this, Stream_t844 * ___baseInputStream, Inflater_t1826 * ___inflater, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Fill()
extern "C" void InflaterInputStream_Fill_m10103 (InflaterInputStream_t1828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanRead()
extern "C" bool InflaterInputStream_get_CanRead_m10104 (InflaterInputStream_t1828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanSeek()
extern "C" bool InflaterInputStream_get_CanSeek_m10105 (InflaterInputStream_t1828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanWrite()
extern "C" bool InflaterInputStream_get_CanWrite_m10106 (InflaterInputStream_t1828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_Length()
extern "C" int64_t InflaterInputStream_get_Length_m10107 (InflaterInputStream_t1828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_Position()
extern "C" int64_t InflaterInputStream_get_Position_m10108 (InflaterInputStream_t1828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::set_Position(System.Int64)
extern "C" void InflaterInputStream_set_Position_m10109 (InflaterInputStream_t1828 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Flush()
extern "C" void InflaterInputStream_Flush_m10110 (InflaterInputStream_t1828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t InflaterInputStream_Seek_m10111 (InflaterInputStream_t1828 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::SetLength(System.Int64)
extern "C" void InflaterInputStream_SetLength_m10112 (InflaterInputStream_t1828 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void InflaterInputStream_Write_m10113 (InflaterInputStream_t1828 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::WriteByte(System.Byte)
extern "C" void InflaterInputStream_WriteByte_m10114 (InflaterInputStream_t1828 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * InflaterInputStream_BeginWrite_m10115 (InflaterInputStream_t1828 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t72 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Close()
extern "C" void InflaterInputStream_Close_m10116 (InflaterInputStream_t1828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t InflaterInputStream_Read_m10117 (InflaterInputStream_t1828 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
