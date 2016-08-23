#pragma once
#include <stdint.h>
// System.Net.FtpWebRequest
struct FtpWebRequest_t2028;
// System.IO.Stream
struct Stream_t844;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Net.FtpDataStream
struct  FtpDataStream_t2029  : public Stream_t844
{
	// System.Net.FtpWebRequest System.Net.FtpDataStream::request
	FtpWebRequest_t2028 * ___request_2;
	// System.IO.Stream System.Net.FtpDataStream::networkStream
	Stream_t844 * ___networkStream_3;
	// System.Boolean System.Net.FtpDataStream::disposed
	bool ___disposed_4;
	// System.Boolean System.Net.FtpDataStream::isRead
	bool ___isRead_5;
	// System.Int32 System.Net.FtpDataStream::totalRead
	int32_t ___totalRead_6;
};
