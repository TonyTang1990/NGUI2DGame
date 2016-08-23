#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t321;
// System.IO.Stream
struct Stream_t844;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Xml.XmlException
struct XmlException_t1137;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Xml.XmlInputStream
struct  XmlInputStream_t1642  : public Stream_t844
{
	// System.Text.Encoding System.Xml.XmlInputStream::enc
	Encoding_t321 * ___enc_3;
	// System.IO.Stream System.Xml.XmlInputStream::stream
	Stream_t844 * ___stream_4;
	// System.Byte[] System.Xml.XmlInputStream::buffer
	ByteU5BU5D_t159* ___buffer_5;
	// System.Int32 System.Xml.XmlInputStream::bufLength
	int32_t ___bufLength_6;
	// System.Int32 System.Xml.XmlInputStream::bufPos
	int32_t ___bufPos_7;
};
struct XmlInputStream_t1642_StaticFields{
	// System.Text.Encoding System.Xml.XmlInputStream::StrictUTF8
	Encoding_t321 * ___StrictUTF8_2;
	// System.Xml.XmlException System.Xml.XmlInputStream::encodingException
	XmlException_t1137 * ___encodingException_8;
};
