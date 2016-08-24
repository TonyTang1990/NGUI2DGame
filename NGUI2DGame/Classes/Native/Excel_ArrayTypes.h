#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Excel.Core.OpenXmlFormat.XlsxXf
struct XlsxXf_t160302635;
// Excel.Core.OpenXmlFormat.XlsxNumFmt
struct XlsxNumFmt_t1220338590;
// Excel.Core.OpenXmlFormat.XlsxWorksheet
struct XlsxWorksheet_t2598215163;
// Excel.Log.ILog
struct ILog_t2210308265;

#include "mscorlib_System_Array3829468939.h"
#include "Excel_Excel_Core_OpenXmlFormat_XlsxXf160302635.h"
#include "Excel_Excel_Core_OpenXmlFormat_XlsxNumFmt1220338590.h"
#include "Excel_Excel_Core_OpenXmlFormat_XlsxWorksheet2598215163.h"

#pragma once
// Excel.Core.OpenXmlFormat.XlsxXf[]
struct XlsxXfU5BU5D_t3328474314  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) XlsxXf_t160302635 * m_Items[1];

public:
	inline XlsxXf_t160302635 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline XlsxXf_t160302635 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, XlsxXf_t160302635 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Excel.Core.OpenXmlFormat.XlsxNumFmt[]
struct XlsxNumFmtU5BU5D_t1374467115  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) XlsxNumFmt_t1220338590 * m_Items[1];

public:
	inline XlsxNumFmt_t1220338590 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline XlsxNumFmt_t1220338590 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, XlsxNumFmt_t1220338590 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Excel.Core.OpenXmlFormat.XlsxWorksheet[]
struct XlsxWorksheetU5BU5D_t1957493690  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) XlsxWorksheet_t2598215163 * m_Items[1];

public:
	inline XlsxWorksheet_t2598215163 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline XlsxWorksheet_t2598215163 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, XlsxWorksheet_t2598215163 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Excel.Log.ILog[]
struct ILogU5BU5D_t3066585748  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
