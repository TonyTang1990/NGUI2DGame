#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t159;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Excel.Core.ZipWorker
struct  ZipWorker_t841  : public Object_t
{
	// System.Byte[] Excel.Core.ZipWorker::buffer
	ByteU5BU5D_t159* ___buffer_0;
	// System.Boolean Excel.Core.ZipWorker::disposed
	bool ___disposed_1;
	// System.Boolean Excel.Core.ZipWorker::_isCleaned
	bool ____isCleaned_2;
	// System.String Excel.Core.ZipWorker::_tempPath
	String_t* ____tempPath_3;
	// System.String Excel.Core.ZipWorker::_tempEnv
	String_t* ____tempEnv_4;
	// System.String Excel.Core.ZipWorker::_exceptionMessage
	String_t* ____exceptionMessage_5;
	// System.String Excel.Core.ZipWorker::_xlPath
	String_t* ____xlPath_6;
	// System.String Excel.Core.ZipWorker::_format
	String_t* ____format_7;
	// System.Boolean Excel.Core.ZipWorker::_isValid
	bool ____isValid_8;
};
