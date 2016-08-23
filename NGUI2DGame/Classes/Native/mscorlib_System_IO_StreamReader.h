#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Char[]
struct CharU5BU5D_t260;
// System.Text.Encoding
struct Encoding_t321;
// System.Text.Decoder
struct Decoder_t1645;
// System.IO.Stream
struct Stream_t844;
// System.Text.StringBuilder
struct StringBuilder_t294;
// System.IO.StreamReader
struct StreamReader_t2033;
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.IO.StreamReader
struct  StreamReader_t2033  : public TextReader_t1101
{
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t159* ___input_buffer_2;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t260* ___decoded_buffer_3;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_4;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_5;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_6;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_7;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t321 * ___encoding_8;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t1645 * ___decoder_9;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t844 * ___base_stream_10;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_11;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t294 * ___line_builder_12;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_14;
};
struct StreamReader_t2033_StaticFields{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t2033 * ___Null_13;
};
