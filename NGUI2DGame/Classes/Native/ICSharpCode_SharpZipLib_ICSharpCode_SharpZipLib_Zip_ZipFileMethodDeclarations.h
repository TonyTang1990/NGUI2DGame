#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t855;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t844;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t856;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t1860;
// ICSharpCode.SharpZipLib.Zip.ZipFile/HeaderTest
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__0.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::OnKeysRequired(System.String)
extern "C" void ZipFile_OnKeysRequired_m10239 (ZipFile_t855 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_HaveKeys()
extern "C" bool ZipFile_get_HaveKeys_m10240 (ZipFile_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::.ctor(System.IO.Stream)
extern "C" void ZipFile__ctor_m3556 (ZipFile_t855 * __this, Stream_t844 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Finalize()
extern "C" void ZipFile_Finalize_m10241 (ZipFile_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Close()
extern "C" void ZipFile_Close_m3557 (ZipFile_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_IsStreamOwner()
extern "C" bool ZipFile_get_IsStreamOwner_m10242 (ZipFile_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ICSharpCode.SharpZipLib.Zip.ZipFile::GetEnumerator()
extern "C" Object_t * ZipFile_GetEnumerator_m10243 (ZipFile_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::FindEntry(System.String,System.Boolean)
extern "C" int32_t ZipFile_FindEntry_m10244 (ZipFile_t855 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetInputStream(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" Stream_t844 * ZipFile_GetInputStream_m3568 (ZipFile_t855 * __this, ZipEntry_t856 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetInputStream(System.Int64)
extern "C" Stream_t844 * ZipFile_GetInputStream_m10245 (ZipFile_t855 * __this, int64_t ___entryIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::TestLocalHeader(ICSharpCode.SharpZipLib.Zip.ZipEntry,ICSharpCode.SharpZipLib.Zip.ZipFile/HeaderTest)
extern "C" int64_t ZipFile_TestLocalHeader_m10246 (ZipFile_t855 * __this, ZipEntry_t856 * ___entry, int32_t ___tests, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::PostUpdateCleanup()
extern "C" void ZipFile_PostUpdateCleanup_m10247 (ZipFile_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::System.IDisposable.Dispose()
extern "C" void ZipFile_System_IDisposable_Dispose_m10248 (ZipFile_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::DisposeInternal(System.Boolean)
extern "C" void ZipFile_DisposeInternal_m10249 (ZipFile_t855 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Dispose(System.Boolean)
extern "C" void ZipFile_Dispose_m10250 (ZipFile_t855 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUshort()
extern "C" uint16_t ZipFile_ReadLEUshort_m10251 (ZipFile_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUint()
extern "C" uint32_t ZipFile_ReadLEUint_m10252 (ZipFile_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUlong()
extern "C" uint64_t ZipFile_ReadLEUlong_m10253 (ZipFile_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::LocateBlockWithSignature(System.Int32,System.Int64,System.Int32,System.Int32)
extern "C" int64_t ZipFile_LocateBlockWithSignature_m10254 (ZipFile_t855 * __this, int32_t ___signature, int64_t ___endLocation, int32_t ___minimumBlockSize, int32_t ___maximumVariableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::ReadEntries()
extern "C" void ZipFile_ReadEntries_m10255 (ZipFile_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::LocateEntry(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" int64_t ZipFile_LocateEntry_m10256 (ZipFile_t855 * __this, ZipEntry_t856 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::CreateAndInitDecryptionStream(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" Stream_t844 * ZipFile_CreateAndInitDecryptionStream_m10257 (ZipFile_t855 * __this, Stream_t844 * ___baseStream, ZipEntry_t856 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CheckClassicPassword(System.Security.Cryptography.CryptoStream,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void ZipFile_CheckClassicPassword_m10258 (Object_t * __this /* static, unused */, CryptoStream_t1860 * ___classicCryptoStream, ZipEntry_t856 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
