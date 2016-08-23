#pragma once
#include <stdint.h>
// System.Net.Sockets.Socket
struct Socket_t2067;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.Net.Sockets.NetworkStream
struct  NetworkStream_t2068  : public Stream_t844
{
	// System.IO.FileAccess System.Net.Sockets.NetworkStream::access
	int32_t ___access_2;
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::socket
	Socket_t2067 * ___socket_3;
	// System.Boolean System.Net.Sockets.NetworkStream::owns_socket
	bool ___owns_socket_4;
	// System.Boolean System.Net.Sockets.NetworkStream::readable
	bool ___readable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::writeable
	bool ___writeable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::disposed
	bool ___disposed_7;
};
