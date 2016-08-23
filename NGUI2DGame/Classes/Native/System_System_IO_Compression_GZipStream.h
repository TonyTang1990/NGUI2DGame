#pragma once
#include <stdint.h>
// System.IO.Compression.DeflateStream
struct DeflateStream_t1961;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.Compression.GZipStream
struct  GZipStream_t1963  : public Stream_t844
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t1961 * ___deflateStream_2;
};
