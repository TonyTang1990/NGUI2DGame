#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Excel.Core.OpenXmlFormat.XlsxNumFmt
struct  XlsxNumFmt_t1220338590  : public Il2CppObject
{
public:
	// System.Int32 Excel.Core.OpenXmlFormat.XlsxNumFmt::_Id
	int32_t ____Id_0;
	// System.String Excel.Core.OpenXmlFormat.XlsxNumFmt::_FormatCode
	String_t* ____FormatCode_1;

public:
	inline static int32_t get_offset_of__Id_0() { return static_cast<int32_t>(offsetof(XlsxNumFmt_t1220338590, ____Id_0)); }
	inline int32_t get__Id_0() const { return ____Id_0; }
	inline int32_t* get_address_of__Id_0() { return &____Id_0; }
	inline void set__Id_0(int32_t value)
	{
		____Id_0 = value;
	}

	inline static int32_t get_offset_of__FormatCode_1() { return static_cast<int32_t>(offsetof(XlsxNumFmt_t1220338590, ____FormatCode_1)); }
	inline String_t* get__FormatCode_1() const { return ____FormatCode_1; }
	inline String_t** get_address_of__FormatCode_1() { return &____FormatCode_1; }
	inline void set__FormatCode_1(String_t* value)
	{
		____FormatCode_1 = value;
		Il2CppCodeGenWriteBarrier(&____FormatCode_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
