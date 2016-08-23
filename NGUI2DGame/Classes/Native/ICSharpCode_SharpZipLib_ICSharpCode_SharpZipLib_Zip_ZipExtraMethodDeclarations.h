#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.ZipExtraData
struct ZipExtraData_t1841;
// System.Byte[]
struct ByteU5BU5D_t159;

// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::.ctor(System.Byte[])
extern "C" void ZipExtraData__ctor_m10204 (ZipExtraData_t1841 * __this, ByteU5BU5D_t159* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::get_ValueLength()
extern "C" int32_t ZipExtraData_get_ValueLength_m10205 (ZipExtraData_t1841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::get_UnreadCount()
extern "C" int32_t ZipExtraData_get_UnreadCount_m10206 (ZipExtraData_t1841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipExtraData::Find(System.Int32)
extern "C" bool ZipExtraData_Find_m10207 (ZipExtraData_t1841 * __this, int32_t ___headerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadLong()
extern "C" int64_t ZipExtraData_ReadLong_m10208 (ZipExtraData_t1841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadInt()
extern "C" int32_t ZipExtraData_ReadInt_m10209 (ZipExtraData_t1841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadShort()
extern "C" int32_t ZipExtraData_ReadShort_m10210 (ZipExtraData_t1841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadByte()
extern "C" int32_t ZipExtraData_ReadByte_m10211 (ZipExtraData_t1841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::Skip(System.Int32)
extern "C" void ZipExtraData_Skip_m10212 (ZipExtraData_t1841 * __this, int32_t ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadCheck(System.Int32)
extern "C" void ZipExtraData_ReadCheck_m10213 (ZipExtraData_t1841 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadShortInternal()
extern "C" int32_t ZipExtraData_ReadShortInternal_m10214 (ZipExtraData_t1841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::Dispose()
extern "C" void ZipExtraData_Dispose_m10215 (ZipExtraData_t1841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
