#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t321;
// System.IO.Stream
struct Stream_t844;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Char[]
struct CharU5BU5D_t260;
// System.IO.StreamWriter
struct StreamWriter_t1792;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StreamWriter
struct  StreamWriter_t1792  : public TextWriter_t884
{
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t321 * ___internalEncoding_4;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t844 * ___internalStream_5;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_6;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t159* ___byte_buf_7;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_8;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t260* ___decode_buf_9;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_10;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_11;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_12;
};
struct StreamWriter_t1792_StaticFields{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1792 * ___Null_13;
};
