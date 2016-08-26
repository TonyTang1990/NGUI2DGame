#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>
struct List_1_t1967336295;
// Excel.Core.OpenXmlFormat.XlsxSST
struct XlsxSST_t3732229269;
// Excel.Core.OpenXmlFormat.XlsxStyles
struct XlsxStyles_t1776783765;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Excel.Core.OpenXmlFormat.XlsxWorkbook
struct  XlsxWorkbook_t188684221  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet> Excel.Core.OpenXmlFormat.XlsxWorkbook::sheets
	List_1_t1967336295 * ___sheets_0;
	// Excel.Core.OpenXmlFormat.XlsxSST Excel.Core.OpenXmlFormat.XlsxWorkbook::_SST
	XlsxSST_t3732229269 * ____SST_1;
	// Excel.Core.OpenXmlFormat.XlsxStyles Excel.Core.OpenXmlFormat.XlsxWorkbook::_Styles
	XlsxStyles_t1776783765 * ____Styles_2;

public:
	inline static int32_t get_offset_of_sheets_0() { return static_cast<int32_t>(offsetof(XlsxWorkbook_t188684221, ___sheets_0)); }
	inline List_1_t1967336295 * get_sheets_0() const { return ___sheets_0; }
	inline List_1_t1967336295 ** get_address_of_sheets_0() { return &___sheets_0; }
	inline void set_sheets_0(List_1_t1967336295 * value)
	{
		___sheets_0 = value;
		Il2CppCodeGenWriteBarrier(&___sheets_0, value);
	}

	inline static int32_t get_offset_of__SST_1() { return static_cast<int32_t>(offsetof(XlsxWorkbook_t188684221, ____SST_1)); }
	inline XlsxSST_t3732229269 * get__SST_1() const { return ____SST_1; }
	inline XlsxSST_t3732229269 ** get_address_of__SST_1() { return &____SST_1; }
	inline void set__SST_1(XlsxSST_t3732229269 * value)
	{
		____SST_1 = value;
		Il2CppCodeGenWriteBarrier(&____SST_1, value);
	}

	inline static int32_t get_offset_of__Styles_2() { return static_cast<int32_t>(offsetof(XlsxWorkbook_t188684221, ____Styles_2)); }
	inline XlsxStyles_t1776783765 * get__Styles_2() const { return ____Styles_2; }
	inline XlsxStyles_t1776783765 ** get_address_of__Styles_2() { return &____Styles_2; }
	inline void set__Styles_2(XlsxStyles_t1776783765 * value)
	{
		____Styles_2 = value;
		Il2CppCodeGenWriteBarrier(&____Styles_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
