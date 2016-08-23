#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs
struct  KeysRequiredEventArgs_t1842  : public EventArgs_t912
{
	// System.String ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::fileName
	String_t* ___fileName_1;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::key
	ByteU5BU5D_t159* ___key_2;
};
