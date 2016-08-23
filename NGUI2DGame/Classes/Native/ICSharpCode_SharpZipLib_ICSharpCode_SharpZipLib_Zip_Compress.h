#pragma once
#include <stdint.h>
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t1826;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_t1827;
// System.IO.Stream
struct Stream_t844;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct  InflaterInputStream_t1828  : public Stream_t844
{
	// ICSharpCode.SharpZipLib.Zip.Compression.Inflater ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inf
	Inflater_t1826 * ___inf_2;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inputBuffer
	InflaterInputBuffer_t1827 * ___inputBuffer_3;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::baseInputStream
	Stream_t844 * ___baseInputStream_4;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::isClosed
	bool ___isClosed_5;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::isStreamOwner
	bool ___isStreamOwner_6;
};
