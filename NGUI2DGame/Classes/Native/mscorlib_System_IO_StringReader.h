#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.IO.StringReader
struct  StringReader_t685  : public TextReader_t1101
{
	// System.String System.IO.StringReader::source
	String_t* ___source_2;
	// System.Int32 System.IO.StringReader::nextChar
	int32_t ___nextChar_3;
	// System.Int32 System.IO.StringReader::sourceLength
	int32_t ___sourceLength_4;
};
