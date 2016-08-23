#pragma once
#include <stdint.h>
// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler
struct KeysRequiredEventHandler_t1843;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t844;
// ICSharpCode.SharpZipLib.Zip.ZipEntry[]
struct ZipEntryU5BU5D_t1845;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Collections.Hashtable
struct Hashtable_t915;
// ICSharpCode.SharpZipLib.Zip.IArchiveStorage
struct IArchiveStorage_t1848;
// ICSharpCode.SharpZipLib.Zip.IDynamicDataSource
struct IDynamicDataSource_t1849;
// ICSharpCode.SharpZipLib.Zip.IEntryFactory
struct IEntryFactory_t1850;
// System.Object
#include "mscorlib_System_Object.h"
// ICSharpCode.SharpZipLib.Zip.UseZip64
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_UseZip64.h"
// ICSharpCode.SharpZipLib.Zip.ZipFile
struct  ZipFile_t855  : public Object_t
{
	// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler ICSharpCode.SharpZipLib.Zip.ZipFile::KeysRequired
	KeysRequiredEventHandler_t1843 * ___KeysRequired_0;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::isDisposed_
	bool ___isDisposed__1;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::comment_
	String_t* ___comment__2;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::baseStream_
	Stream_t844 * ___baseStream__3;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::isStreamOwner
	bool ___isStreamOwner_4;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::offsetOfFirstEntry
	int64_t ___offsetOfFirstEntry_5;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry[] ICSharpCode.SharpZipLib.Zip.ZipFile::entries_
	ZipEntryU5BU5D_t1845* ___entries__6;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipFile::key
	ByteU5BU5D_t159* ___key_7;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::isNewArchive_
	bool ___isNewArchive__8;
	// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipFile::useZip64_
	int32_t ___useZip64__9;
	// System.Collections.ArrayList ICSharpCode.SharpZipLib.Zip.ZipFile::updates_
	ArrayList_t913 * ___updates__10;
	// System.Collections.Hashtable ICSharpCode.SharpZipLib.Zip.ZipFile::updateIndex_
	Hashtable_t915 * ___updateIndex__11;
	// ICSharpCode.SharpZipLib.Zip.IArchiveStorage ICSharpCode.SharpZipLib.Zip.ZipFile::archiveStorage_
	Object_t * ___archiveStorage__12;
	// ICSharpCode.SharpZipLib.Zip.IDynamicDataSource ICSharpCode.SharpZipLib.Zip.ZipFile::updateDataSource_
	Object_t * ___updateDataSource__13;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::bufferSize_
	int32_t ___bufferSize__14;
	// ICSharpCode.SharpZipLib.Zip.IEntryFactory ICSharpCode.SharpZipLib.Zip.ZipFile::updateEntryFactory_
	Object_t * ___updateEntryFactory__15;
};
