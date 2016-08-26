#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxXf>
struct List_1_t3824391063;
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxNumFmt>
struct List_1_t589459722;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Excel.Core.OpenXmlFormat.XlsxStyles
struct  XlsxStyles_t1776783765  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxXf> Excel.Core.OpenXmlFormat.XlsxStyles::_cellXfs
	List_1_t3824391063 * ____cellXfs_0;
	// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxNumFmt> Excel.Core.OpenXmlFormat.XlsxStyles::_NumFmts
	List_1_t589459722 * ____NumFmts_1;

public:
	inline static int32_t get_offset_of__cellXfs_0() { return static_cast<int32_t>(offsetof(XlsxStyles_t1776783765, ____cellXfs_0)); }
	inline List_1_t3824391063 * get__cellXfs_0() const { return ____cellXfs_0; }
	inline List_1_t3824391063 ** get_address_of__cellXfs_0() { return &____cellXfs_0; }
	inline void set__cellXfs_0(List_1_t3824391063 * value)
	{
		____cellXfs_0 = value;
		Il2CppCodeGenWriteBarrier(&____cellXfs_0, value);
	}

	inline static int32_t get_offset_of__NumFmts_1() { return static_cast<int32_t>(offsetof(XlsxStyles_t1776783765, ____NumFmts_1)); }
	inline List_1_t589459722 * get__NumFmts_1() const { return ____NumFmts_1; }
	inline List_1_t589459722 ** get_address_of__NumFmts_1() { return &____NumFmts_1; }
	inline void set__NumFmts_1(List_1_t589459722 * value)
	{
		____NumFmts_1 = value;
		Il2CppCodeGenWriteBarrier(&____NumFmts_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
