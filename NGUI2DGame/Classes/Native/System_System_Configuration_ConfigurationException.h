#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.Configuration.ConfigurationException
struct  ConfigurationException_t1420  : public SystemException_t916
{
	// System.String System.Configuration.ConfigurationException::filename
	String_t* ___filename_11;
	// System.Int32 System.Configuration.ConfigurationException::line
	int32_t ___line_12;
};
