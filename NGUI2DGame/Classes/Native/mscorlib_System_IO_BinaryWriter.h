#pragma once
#include <stdint.h>
// System.IO.BinaryWriter
struct BinaryWriter_t2548;
// System.IO.Stream
struct Stream_t844;
// System.Text.Encoding
struct Encoding_t321;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.BinaryWriter
struct  BinaryWriter_t2548  : public Object_t
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t844 * ___OutStream_1;
	// System.Text.Encoding System.IO.BinaryWriter::m_encoding
	Encoding_t321 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryWriter::buffer
	ByteU5BU5D_t159* ___buffer_3;
	// System.Boolean System.IO.BinaryWriter::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.BinaryWriter::stringBuffer
	ByteU5BU5D_t159* ___stringBuffer_5;
	// System.Int32 System.IO.BinaryWriter::maxCharsPerRound
	int32_t ___maxCharsPerRound_6;
};
struct BinaryWriter_t2548_StaticFields{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t2548 * ___Null_0;
};
