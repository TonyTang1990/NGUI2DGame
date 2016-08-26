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

// ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream
struct PartialInputStream_t2358850295;
// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t1110175137;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1110175137.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::.ctor(ICSharpCode.SharpZipLib.Zip.ZipFile,System.Int64,System.Int64)
extern "C"  void PartialInputStream__ctor_m484094218 (PartialInputStream_t2358850295 * __this, ZipFile_t1110175137 * ___zipFile0, int64_t ___start1, int64_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::ReadByte()
extern "C"  int32_t PartialInputStream_ReadByte_m1845671945 (PartialInputStream_t2358850295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Close()
extern "C"  void PartialInputStream_Close_m3033862713 (PartialInputStream_t2358850295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t PartialInputStream_Read_m1834487540 (PartialInputStream_t2358850295 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void PartialInputStream_Write_m3544527789 (PartialInputStream_t2358850295 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::SetLength(System.Int64)
extern "C"  void PartialInputStream_SetLength_m1264841115 (PartialInputStream_t2358850295 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t PartialInputStream_Seek_m3915432243 (PartialInputStream_t2358850295 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Flush()
extern "C"  void PartialInputStream_Flush_m3033698439 (PartialInputStream_t2358850295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_Position()
extern "C"  int64_t PartialInputStream_get_Position_m1446355428 (PartialInputStream_t2358850295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::set_Position(System.Int64)
extern "C"  void PartialInputStream_set_Position_m1280666373 (PartialInputStream_t2358850295 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_Length()
extern "C"  int64_t PartialInputStream_get_Length_m2158634551 (PartialInputStream_t2358850295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanWrite()
extern "C"  bool PartialInputStream_get_CanWrite_m857292679 (PartialInputStream_t2358850295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanSeek()
extern "C"  bool PartialInputStream_get_CanSeek_m4178640278 (PartialInputStream_t2358850295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanRead()
extern "C"  bool PartialInputStream_get_CanRead_m3325009566 (PartialInputStream_t2358850295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
