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

// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t1764014695;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1510270153.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::.ctor(System.String,System.Int32,System.Int32,ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern "C"  void ZipEntry__ctor_m509450494 (ZipEntry_t1764014695 * __this, String_t* ___name0, int32_t ___versionRequiredToExtract1, int32_t ___madeByInfo2, int32_t ___method3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsCrypted()
extern "C"  bool ZipEntry_get_IsCrypted_m2288425721 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CryptoCheckValue()
extern "C"  uint8_t ZipEntry_get_CryptoCheckValue_m2906695838 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_CryptoCheckValue(System.Byte)
extern "C"  void ZipEntry_set_CryptoCheckValue_m3042546353 (ZipEntry_t1764014695 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Flags()
extern "C"  int32_t ZipEntry_get_Flags_m1454638551 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Flags(System.Int32)
extern "C"  void ZipEntry_set_Flags_m3605637110 (ZipEntry_t1764014695 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_ZipFileIndex()
extern "C"  int64_t ZipEntry_get_ZipFileIndex_m1800604384 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_ZipFileIndex(System.Int64)
extern "C"  void ZipEntry_set_ZipFileIndex_m4266064271 (ZipEntry_t1764014695 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Offset()
extern "C"  int64_t ZipEntry_get_Offset_m1777266548 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Offset(System.Int64)
extern "C"  void ZipEntry_set_Offset_m1977872389 (ZipEntry_t1764014695 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_ExternalFileAttributes()
extern "C"  int32_t ZipEntry_get_ExternalFileAttributes_m527699766 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_ExternalFileAttributes(System.Int32)
extern "C"  void ZipEntry_set_ExternalFileAttributes_m2744399311 (ZipEntry_t1764014695 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::HasDosAttributes(System.Int32)
extern "C"  bool ZipEntry_HasDosAttributes_m3034016483 (ZipEntry_t1764014695 * __this, int32_t ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_HostSystem()
extern "C"  int32_t ZipEntry_get_HostSystem_m821441961 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Version()
extern "C"  int32_t ZipEntry_get_Version_m3445061640 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_LocalHeaderRequiresZip64()
extern "C"  bool ZipEntry_get_LocalHeaderRequiresZip64_m3409813355 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CentralHeaderRequiresZip64()
extern "C"  bool ZipEntry_get_CentralHeaderRequiresZip64_m819889797 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_DosTime(System.Int64)
extern "C"  void ZipEntry_set_DosTime_m3930736101 (ZipEntry_t1764014695 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_DateTime(System.DateTime)
extern "C"  void ZipEntry_set_DateTime_m97102529 (ZipEntry_t1764014695 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Name()
extern "C"  String_t* ZipEntry_get_Name_m3476240732 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Size()
extern "C"  int64_t ZipEntry_get_Size_m4101971814 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Size(System.Int64)
extern "C"  void ZipEntry_set_Size_m1592469057 (ZipEntry_t1764014695 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CompressedSize()
extern "C"  int64_t ZipEntry_get_CompressedSize_m1350691421 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_CompressedSize(System.Int64)
extern "C"  void ZipEntry_set_CompressedSize_m3769989458 (ZipEntry_t1764014695 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Crc()
extern "C"  int64_t ZipEntry_get_Crc_m3987268705 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Crc(System.Int64)
extern "C"  void ZipEntry_set_Crc_m2947942594 (ZipEntry_t1764014695 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CompressionMethod()
extern "C"  int32_t ZipEntry_get_CompressionMethod_m2735584663 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_ExtraData(System.Byte[])
extern "C"  void ZipEntry_set_ExtraData_m2783375251 (ZipEntry_t1764014695 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::ProcessExtraData(System.Boolean)
extern "C"  void ZipEntry_ProcessExtraData_m320672633 (ZipEntry_t1764014695 * __this, bool ___localHeader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Comment(System.String)
extern "C"  void ZipEntry_set_Comment_m184649891 (ZipEntry_t1764014695 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsDirectory()
extern "C"  bool ZipEntry_get_IsDirectory_m4084667369 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsFile()
extern "C"  bool ZipEntry_get_IsFile_m222504024 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::IsCompressionMethodSupported()
extern "C"  bool ZipEntry_IsCompressionMethodSupported_m535555216 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ICSharpCode.SharpZipLib.Zip.ZipEntry::Clone()
extern "C"  Il2CppObject * ZipEntry_Clone_m3547274961 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::ToString()
extern "C"  String_t* ZipEntry_ToString_m331788614 (ZipEntry_t1764014695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::IsCompressionMethodSupported(ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern "C"  bool ZipEntry_IsCompressionMethodSupported_m1749756129 (Il2CppObject * __this /* static, unused */, int32_t ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
