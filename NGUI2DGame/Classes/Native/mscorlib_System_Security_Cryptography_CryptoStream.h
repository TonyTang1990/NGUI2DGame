#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t844;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1278;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Security.Cryptography.CryptoStreamMode
#include "mscorlib_System_Security_Cryptography_CryptoStreamMode.h"
// System.Security.Cryptography.CryptoStream
struct  CryptoStream_t1860  : public Stream_t844
{
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_t844 * ____stream_2;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	Object_t * ____transform_3;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_mode
	int32_t ____mode_4;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_currentBlock
	ByteU5BU5D_t159* ____currentBlock_5;
	// System.Boolean System.Security.Cryptography.CryptoStream::_disposed
	bool ____disposed_6;
	// System.Boolean System.Security.Cryptography.CryptoStream::_flushedFinalBlock
	bool ____flushedFinalBlock_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_partialCount
	int32_t ____partialCount_8;
	// System.Boolean System.Security.Cryptography.CryptoStream::_endOfStream
	bool ____endOfStream_9;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_waitingBlock
	ByteU5BU5D_t159* ____waitingBlock_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_waitingCount
	int32_t ____waitingCount_11;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_transformedBlock
	ByteU5BU5D_t159* ____transformedBlock_12;
	// System.Int32 System.Security.Cryptography.CryptoStream::_transformedPos
	int32_t ____transformedPos_13;
	// System.Int32 System.Security.Cryptography.CryptoStream::_transformedCount
	int32_t ____transformedCount_14;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_workingBlock
	ByteU5BU5D_t159* ____workingBlock_15;
	// System.Int32 System.Security.Cryptography.CryptoStream::_workingCount
	int32_t ____workingCount_16;
};
