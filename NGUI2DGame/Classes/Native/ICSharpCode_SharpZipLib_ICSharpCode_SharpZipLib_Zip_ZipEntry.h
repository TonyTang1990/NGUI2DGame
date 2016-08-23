#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Object
#include "mscorlib_System_Object.h"
// ICSharpCode.SharpZipLib.Zip.ZipEntry/Known
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry_0.h"
// ICSharpCode.SharpZipLib.Zip.CompressionMethod
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_7.h"
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct  ZipEntry_t856  : public Object_t
{
	// ICSharpCode.SharpZipLib.Zip.ZipEntry/Known ICSharpCode.SharpZipLib.Zip.ZipEntry::known
	uint8_t ___known_0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::externalFileAttributes
	int32_t ___externalFileAttributes_1;
	// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipEntry::versionMadeBy
	uint16_t ___versionMadeBy_2;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::name
	String_t* ___name_3;
	// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipEntry::size
	uint64_t ___size_4;
	// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipEntry::compressedSize
	uint64_t ___compressedSize_5;
	// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipEntry::versionToExtract
	uint16_t ___versionToExtract_6;
	// System.UInt32 ICSharpCode.SharpZipLib.Zip.ZipEntry::crc
	uint32_t ___crc_7;
	// System.UInt32 ICSharpCode.SharpZipLib.Zip.ZipEntry::dosTime
	uint32_t ___dosTime_8;
	// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipEntry::method
	int32_t ___method_9;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipEntry::extra
	ByteU5BU5D_t159* ___extra_10;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::comment
	String_t* ___comment_11;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::flags
	int32_t ___flags_12;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::zipFileIndex
	int64_t ___zipFileIndex_13;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::offset
	int64_t ___offset_14;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::forceZip64_
	bool ___forceZip64__15;
	// System.Byte ICSharpCode.SharpZipLib.Zip.ZipEntry::cryptoCheckValue_
	uint8_t ___cryptoCheckValue__16;
};
