#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t884;
// System.IO.TextReader
struct TextReader_t1101;
// System.Text.Encoding
struct Encoding_t321;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t2427;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t2426;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t1115  : public Object_t
{
};
struct Console_t1115_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t884 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t884 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1101 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t321 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t321 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t2427 * ___cancel_event_5;
	// System.Console/InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t2426 * ___cancel_handler_6;
};
