﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t924210539;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriter
struct  XmlWriter_t1048088568  : public Il2CppObject
{
public:
	// System.Xml.XmlWriterSettings System.Xml.XmlWriter::settings
	XmlWriterSettings_t924210539 * ___settings_0;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(XmlWriter_t1048088568, ___settings_0)); }
	inline XmlWriterSettings_t924210539 * get_settings_0() const { return ___settings_0; }
	inline XmlWriterSettings_t924210539 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(XmlWriterSettings_t924210539 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier(&___settings_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
