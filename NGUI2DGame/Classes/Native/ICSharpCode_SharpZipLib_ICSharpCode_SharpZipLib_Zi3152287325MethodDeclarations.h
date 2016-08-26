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

// ICSharpCode.SharpZipLib.Zip.ZipExtraData
struct ZipExtraData_t3152287325;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::.ctor(System.Byte[])
extern "C"  void ZipExtraData__ctor_m221466928 (ZipExtraData_t3152287325 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::get_ValueLength()
extern "C"  int32_t ZipExtraData_get_ValueLength_m1914910453 (ZipExtraData_t3152287325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::get_UnreadCount()
extern "C"  int32_t ZipExtraData_get_UnreadCount_m2092915220 (ZipExtraData_t3152287325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipExtraData::Find(System.Int32)
extern "C"  bool ZipExtraData_Find_m2992530013 (ZipExtraData_t3152287325 * __this, int32_t ___headerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadLong()
extern "C"  int64_t ZipExtraData_ReadLong_m583809138 (ZipExtraData_t3152287325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadInt()
extern "C"  int32_t ZipExtraData_ReadInt_m1089191532 (ZipExtraData_t3152287325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadShort()
extern "C"  int32_t ZipExtraData_ReadShort_m4078015031 (ZipExtraData_t3152287325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadByte()
extern "C"  int32_t ZipExtraData_ReadByte_m1507753819 (ZipExtraData_t3152287325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::Skip(System.Int32)
extern "C"  void ZipExtraData_Skip_m1738302941 (ZipExtraData_t3152287325 * __this, int32_t ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadCheck(System.Int32)
extern "C"  void ZipExtraData_ReadCheck_m97637932 (ZipExtraData_t3152287325 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadShortInternal()
extern "C"  int32_t ZipExtraData_ReadShortInternal_m2206901638 (ZipExtraData_t3152287325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::Dispose()
extern "C"  void ZipExtraData_Dispose_m3244432292 (ZipExtraData_t3152287325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
