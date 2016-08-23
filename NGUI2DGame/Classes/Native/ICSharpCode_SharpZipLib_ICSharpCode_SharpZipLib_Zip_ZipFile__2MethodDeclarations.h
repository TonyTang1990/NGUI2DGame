#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream
struct PartialInputStream_t1847;
// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t855;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::.ctor(ICSharpCode.SharpZipLib.Zip.ZipFile,System.Int64,System.Int64)
extern "C" void PartialInputStream__ctor_m10225 (PartialInputStream_t1847 * __this, ZipFile_t855 * ___zipFile, int64_t ___start, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::ReadByte()
extern "C" int32_t PartialInputStream_ReadByte_m10226 (PartialInputStream_t1847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Close()
extern "C" void PartialInputStream_Close_m10227 (PartialInputStream_t1847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t PartialInputStream_Read_m10228 (PartialInputStream_t1847 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void PartialInputStream_Write_m10229 (PartialInputStream_t1847 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::SetLength(System.Int64)
extern "C" void PartialInputStream_SetLength_m10230 (PartialInputStream_t1847 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t PartialInputStream_Seek_m10231 (PartialInputStream_t1847 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Flush()
extern "C" void PartialInputStream_Flush_m10232 (PartialInputStream_t1847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_Position()
extern "C" int64_t PartialInputStream_get_Position_m10233 (PartialInputStream_t1847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::set_Position(System.Int64)
extern "C" void PartialInputStream_set_Position_m10234 (PartialInputStream_t1847 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_Length()
extern "C" int64_t PartialInputStream_get_Length_m10235 (PartialInputStream_t1847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanWrite()
extern "C" bool PartialInputStream_get_CanWrite_m10236 (PartialInputStream_t1847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanSeek()
extern "C" bool PartialInputStream_get_CanSeek_m10237 (PartialInputStream_t1847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanRead()
extern "C" bool PartialInputStream_get_CanRead_m10238 (PartialInputStream_t1847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
