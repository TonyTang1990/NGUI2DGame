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

// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t1110175137;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t1764014695;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t3531341937;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1764014695.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi4114042119.h"
#include "mscorlib_System_Security_Cryptography_CryptoStream3531341937.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::OnKeysRequired(System.String)
extern "C"  void ZipFile_OnKeysRequired_m1772411083 (ZipFile_t1110175137 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_HaveKeys()
extern "C"  bool ZipFile_get_HaveKeys_m109147906 (ZipFile_t1110175137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::.ctor(System.IO.Stream)
extern "C"  void ZipFile__ctor_m2979885086 (ZipFile_t1110175137 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Finalize()
extern "C"  void ZipFile_Finalize_m517470779 (ZipFile_t1110175137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Close()
extern "C"  void ZipFile_Close_m3129624767 (ZipFile_t1110175137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_IsStreamOwner()
extern "C"  bool ZipFile_get_IsStreamOwner_m3802111051 (ZipFile_t1110175137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ICSharpCode.SharpZipLib.Zip.ZipFile::GetEnumerator()
extern "C"  Il2CppObject * ZipFile_GetEnumerator_m3615191729 (ZipFile_t1110175137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::FindEntry(System.String,System.Boolean)
extern "C"  int32_t ZipFile_FindEntry_m1754921127 (ZipFile_t1110175137 * __this, String_t* ___name0, bool ___ignoreCase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetInputStream(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C"  Stream_t3255436806 * ZipFile_GetInputStream_m1781807622 (ZipFile_t1110175137 * __this, ZipEntry_t1764014695 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetInputStream(System.Int64)
extern "C"  Stream_t3255436806 * ZipFile_GetInputStream_m1202448107 (ZipFile_t1110175137 * __this, int64_t ___entryIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::TestLocalHeader(ICSharpCode.SharpZipLib.Zip.ZipEntry,ICSharpCode.SharpZipLib.Zip.ZipFile/HeaderTest)
extern "C"  int64_t ZipFile_TestLocalHeader_m1468002544 (ZipFile_t1110175137 * __this, ZipEntry_t1764014695 * ___entry0, int32_t ___tests1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::PostUpdateCleanup()
extern "C"  void ZipFile_PostUpdateCleanup_m2491866564 (ZipFile_t1110175137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::System.IDisposable.Dispose()
extern "C"  void ZipFile_System_IDisposable_Dispose_m2544498532 (ZipFile_t1110175137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::DisposeInternal(System.Boolean)
extern "C"  void ZipFile_DisposeInternal_m2432789312 (ZipFile_t1110175137 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Dispose(System.Boolean)
extern "C"  void ZipFile_Dispose_m3163465169 (ZipFile_t1110175137 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUshort()
extern "C"  uint16_t ZipFile_ReadLEUshort_m3166752384 (ZipFile_t1110175137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUint()
extern "C"  uint32_t ZipFile_ReadLEUint_m2561149099 (ZipFile_t1110175137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUlong()
extern "C"  uint64_t ZipFile_ReadLEUlong_m759240445 (ZipFile_t1110175137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::LocateBlockWithSignature(System.Int32,System.Int64,System.Int32,System.Int32)
extern "C"  int64_t ZipFile_LocateBlockWithSignature_m2724987100 (ZipFile_t1110175137 * __this, int32_t ___signature0, int64_t ___endLocation1, int32_t ___minimumBlockSize2, int32_t ___maximumVariableData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::ReadEntries()
extern "C"  void ZipFile_ReadEntries_m2392786121 (ZipFile_t1110175137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::LocateEntry(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C"  int64_t ZipFile_LocateEntry_m246682085 (ZipFile_t1110175137 * __this, ZipEntry_t1764014695 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::CreateAndInitDecryptionStream(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C"  Stream_t3255436806 * ZipFile_CreateAndInitDecryptionStream_m3860111983 (ZipFile_t1110175137 * __this, Stream_t3255436806 * ___baseStream0, ZipEntry_t1764014695 * ___entry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CheckClassicPassword(System.Security.Cryptography.CryptoStream,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C"  void ZipFile_CheckClassicPassword_m3364579369 (Il2CppObject * __this /* static, unused */, CryptoStream_t3531341937 * ___classicCryptoStream0, ZipEntry_t1764014695 * ___entry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
