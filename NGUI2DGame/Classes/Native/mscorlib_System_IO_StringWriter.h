#pragma once
#include <stdint.h>
// System.Text.StringBuilder
struct StringBuilder_t294;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StringWriter
struct  StringWriter_t1126  : public TextWriter_t884
{
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t294 * ___internalString_4;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_5;
};
