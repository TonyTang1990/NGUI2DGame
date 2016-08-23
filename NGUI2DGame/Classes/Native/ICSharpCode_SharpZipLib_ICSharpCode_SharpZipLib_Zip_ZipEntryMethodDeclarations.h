#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t856;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// ICSharpCode.SharpZipLib.Zip.CompressionMethod
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_7.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::.ctor(System.String,System.Int32,System.Int32,ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern "C" void ZipEntry__ctor_m10168 (ZipEntry_t856 * __this, String_t* ___name, int32_t ___versionRequiredToExtract, int32_t ___madeByInfo, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsCrypted()
extern "C" bool ZipEntry_get_IsCrypted_m10169 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CryptoCheckValue()
extern "C" uint8_t ZipEntry_get_CryptoCheckValue_m10170 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_CryptoCheckValue(System.Byte)
extern "C" void ZipEntry_set_CryptoCheckValue_m10171 (ZipEntry_t856 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Flags()
extern "C" int32_t ZipEntry_get_Flags_m10172 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Flags(System.Int32)
extern "C" void ZipEntry_set_Flags_m10173 (ZipEntry_t856 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_ZipFileIndex()
extern "C" int64_t ZipEntry_get_ZipFileIndex_m10174 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_ZipFileIndex(System.Int64)
extern "C" void ZipEntry_set_ZipFileIndex_m10175 (ZipEntry_t856 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Offset()
extern "C" int64_t ZipEntry_get_Offset_m10176 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Offset(System.Int64)
extern "C" void ZipEntry_set_Offset_m10177 (ZipEntry_t856 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_ExternalFileAttributes()
extern "C" int32_t ZipEntry_get_ExternalFileAttributes_m10178 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_ExternalFileAttributes(System.Int32)
extern "C" void ZipEntry_set_ExternalFileAttributes_m10179 (ZipEntry_t856 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::HasDosAttributes(System.Int32)
extern "C" bool ZipEntry_HasDosAttributes_m10180 (ZipEntry_t856 * __this, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_HostSystem()
extern "C" int32_t ZipEntry_get_HostSystem_m10181 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Version()
extern "C" int32_t ZipEntry_get_Version_m10182 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_LocalHeaderRequiresZip64()
extern "C" bool ZipEntry_get_LocalHeaderRequiresZip64_m10183 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CentralHeaderRequiresZip64()
extern "C" bool ZipEntry_get_CentralHeaderRequiresZip64_m10184 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_DosTime(System.Int64)
extern "C" void ZipEntry_set_DosTime_m10185 (ZipEntry_t856 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_DateTime(System.DateTime)
extern "C" void ZipEntry_set_DateTime_m10186 (ZipEntry_t856 * __this, DateTime_t445  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Name()
extern "C" String_t* ZipEntry_get_Name_m3562 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Size()
extern "C" int64_t ZipEntry_get_Size_m10187 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Size(System.Int64)
extern "C" void ZipEntry_set_Size_m10188 (ZipEntry_t856 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CompressedSize()
extern "C" int64_t ZipEntry_get_CompressedSize_m10189 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_CompressedSize(System.Int64)
extern "C" void ZipEntry_set_CompressedSize_m10190 (ZipEntry_t856 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Crc()
extern "C" int64_t ZipEntry_get_Crc_m10191 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Crc(System.Int64)
extern "C" void ZipEntry_set_Crc_m10192 (ZipEntry_t856 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CompressionMethod()
extern "C" int32_t ZipEntry_get_CompressionMethod_m10193 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_ExtraData(System.Byte[])
extern "C" void ZipEntry_set_ExtraData_m10194 (ZipEntry_t856 * __this, ByteU5BU5D_t159* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::ProcessExtraData(System.Boolean)
extern "C" void ZipEntry_ProcessExtraData_m10195 (ZipEntry_t856 * __this, bool ___localHeader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Comment(System.String)
extern "C" void ZipEntry_set_Comment_m10196 (ZipEntry_t856 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsDirectory()
extern "C" bool ZipEntry_get_IsDirectory_m3563 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsFile()
extern "C" bool ZipEntry_get_IsFile_m3567 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::IsCompressionMethodSupported()
extern "C" bool ZipEntry_IsCompressionMethodSupported_m3561 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ICSharpCode.SharpZipLib.Zip.ZipEntry::Clone()
extern "C" Object_t * ZipEntry_Clone_m10197 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::ToString()
extern "C" String_t* ZipEntry_ToString_m10198 (ZipEntry_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::IsCompressionMethodSupported(ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern "C" bool ZipEntry_IsCompressionMethodSupported_m10199 (Object_t * __this /* static, unused */, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
