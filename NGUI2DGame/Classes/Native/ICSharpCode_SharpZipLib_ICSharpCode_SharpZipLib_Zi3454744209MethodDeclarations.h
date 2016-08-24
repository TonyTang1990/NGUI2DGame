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

// ICSharpCode.SharpZipLib.Zip.ZipHelperStream
struct ZipHelperStream_t3454744209;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::.ctor(System.IO.Stream)
extern "C"  void ZipHelperStream__ctor_m1126958192 (ZipHelperStream_t3454744209 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanRead()
extern "C"  bool ZipHelperStream_get_CanRead_m3775489630 (ZipHelperStream_t3454744209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanSeek()
extern "C"  bool ZipHelperStream_get_CanSeek_m2925672702 (ZipHelperStream_t3454744209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_Length()
extern "C"  int64_t ZipHelperStream_get_Length_m1497013625 (ZipHelperStream_t3454744209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_Position()
extern "C"  int64_t ZipHelperStream_get_Position_m2640572118 (ZipHelperStream_t3454744209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::set_Position(System.Int64)
extern "C"  void ZipHelperStream_set_Position_m333091383 (ZipHelperStream_t3454744209 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanWrite()
extern "C"  bool ZipHelperStream_get_CanWrite_m1811081673 (ZipHelperStream_t3454744209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Flush()
extern "C"  void ZipHelperStream_Flush_m2227625153 (ZipHelperStream_t3454744209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZipHelperStream_Seek_m3647472801 (ZipHelperStream_t3454744209 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::SetLength(System.Int64)
extern "C"  void ZipHelperStream_SetLength_m234583605 (ZipHelperStream_t3454744209 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZipHelperStream_Read_m2003101728 (ZipHelperStream_t3454744209 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZipHelperStream_Write_m1129079083 (ZipHelperStream_t3454744209 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Close()
extern "C"  void ZipHelperStream_Close_m3492237447 (ZipHelperStream_t3454744209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::LocateBlockWithSignature(System.Int32,System.Int64,System.Int32,System.Int32)
extern "C"  int64_t ZipHelperStream_LocateBlockWithSignature_m2981193978 (ZipHelperStream_t3454744209 * __this, int32_t ___signature0, int64_t ___endLocation1, int32_t ___minimumBlockSize2, int32_t ___maximumVariableData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadLEShort()
extern "C"  int32_t ZipHelperStream_ReadLEShort_m1696479828 (ZipHelperStream_t3454744209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadLEInt()
extern "C"  int32_t ZipHelperStream_ReadLEInt_m2263293059 (ZipHelperStream_t3454744209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
