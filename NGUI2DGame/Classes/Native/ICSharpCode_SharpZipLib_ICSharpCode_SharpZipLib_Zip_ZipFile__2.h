#pragma once
#include <stdint.h>
// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t855;
// System.IO.Stream
struct Stream_t844;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream
struct  PartialInputStream_t1847  : public Stream_t844
{
	// ICSharpCode.SharpZipLib.Zip.ZipFile ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::zipFile_
	ZipFile_t855 * ___zipFile__2;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::baseStream_
	Stream_t844 * ___baseStream__3;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::start_
	int64_t ___start__4;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::length_
	int64_t ___length__5;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::readPos_
	int64_t ___readPos__6;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::end_
	int64_t ___end__7;
};
