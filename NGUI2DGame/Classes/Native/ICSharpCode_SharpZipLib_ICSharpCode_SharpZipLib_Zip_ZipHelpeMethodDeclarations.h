#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.ZipHelperStream
struct ZipHelperStream_t1851;
// System.IO.Stream
struct Stream_t844;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::.ctor(System.IO.Stream)
extern "C" void ZipHelperStream__ctor_m10259 (ZipHelperStream_t1851 * __this, Stream_t844 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanRead()
extern "C" bool ZipHelperStream_get_CanRead_m10260 (ZipHelperStream_t1851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanSeek()
extern "C" bool ZipHelperStream_get_CanSeek_m10261 (ZipHelperStream_t1851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_Length()
extern "C" int64_t ZipHelperStream_get_Length_m10262 (ZipHelperStream_t1851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_Position()
extern "C" int64_t ZipHelperStream_get_Position_m10263 (ZipHelperStream_t1851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::set_Position(System.Int64)
extern "C" void ZipHelperStream_set_Position_m10264 (ZipHelperStream_t1851 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanWrite()
extern "C" bool ZipHelperStream_get_CanWrite_m10265 (ZipHelperStream_t1851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Flush()
extern "C" void ZipHelperStream_Flush_m10266 (ZipHelperStream_t1851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t ZipHelperStream_Seek_m10267 (ZipHelperStream_t1851 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::SetLength(System.Int64)
extern "C" void ZipHelperStream_SetLength_m10268 (ZipHelperStream_t1851 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipHelperStream_Read_m10269 (ZipHelperStream_t1851 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ZipHelperStream_Write_m10270 (ZipHelperStream_t1851 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Close()
extern "C" void ZipHelperStream_Close_m10271 (ZipHelperStream_t1851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::LocateBlockWithSignature(System.Int32,System.Int64,System.Int32,System.Int32)
extern "C" int64_t ZipHelperStream_LocateBlockWithSignature_m10272 (ZipHelperStream_t1851 * __this, int32_t ___signature, int64_t ___endLocation, int32_t ___minimumBlockSize, int32_t ___maximumVariableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadLEShort()
extern "C" int32_t ZipHelperStream_ReadLEShort_m10273 (ZipHelperStream_t1851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadLEInt()
extern "C" int32_t ZipHelperStream_ReadLEInt_m10274 (ZipHelperStream_t1851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
