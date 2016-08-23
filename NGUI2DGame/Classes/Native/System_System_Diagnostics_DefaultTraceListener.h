#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Diagnostics.TraceListener
#include "System_System_Diagnostics_TraceListener.h"
// System.Diagnostics.DefaultTraceListener
struct  DefaultTraceListener_t1945  : public TraceListener_t1946
{
	// System.String System.Diagnostics.DefaultTraceListener::logFileName
	String_t* ___logFileName_10;
	// System.Boolean System.Diagnostics.DefaultTraceListener::assertUiEnabled
	bool ___assertUiEnabled_11;
};
struct DefaultTraceListener_t1945_StaticFields{
	// System.Boolean System.Diagnostics.DefaultTraceListener::OnWin32
	bool ___OnWin32_7;
	// System.String System.Diagnostics.DefaultTraceListener::MonoTracePrefix
	String_t* ___MonoTracePrefix_8;
	// System.String System.Diagnostics.DefaultTraceListener::MonoTraceFile
	String_t* ___MonoTraceFile_9;
};
