#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t844;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t2053  : public Stream_t844
{
	// System.IO.Stream System.Net.Security.AuthenticatedStream::innerStream
	Stream_t844 * ___innerStream_2;
	// System.Boolean System.Net.Security.AuthenticatedStream::leaveStreamOpen
	bool ___leaveStreamOpen_3;
};
