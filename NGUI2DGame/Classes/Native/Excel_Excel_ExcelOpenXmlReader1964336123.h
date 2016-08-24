#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Excel.Core.OpenXmlFormat.XlsxWorkbook
struct XlsxWorkbook_t188684221;
// System.String
struct String_t;
// Excel.Core.ZipWorker
struct ZipWorker_t1305438663;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.IO.Stream
struct Stream_t3255436806;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Excel.ExcelOpenXmlReader
struct  ExcelOpenXmlReader_t1964336123  : public Il2CppObject
{
public:
	// Excel.Core.OpenXmlFormat.XlsxWorkbook Excel.ExcelOpenXmlReader::_workbook
	XlsxWorkbook_t188684221 * ____workbook_0;
	// System.Boolean Excel.ExcelOpenXmlReader::_isValid
	bool ____isValid_1;
	// System.Boolean Excel.ExcelOpenXmlReader::_isClosed
	bool ____isClosed_2;
	// System.Boolean Excel.ExcelOpenXmlReader::_isFirstRead
	bool ____isFirstRead_3;
	// System.String Excel.ExcelOpenXmlReader::_exceptionMessage
	String_t* ____exceptionMessage_4;
	// System.Int32 Excel.ExcelOpenXmlReader::_depth
	int32_t ____depth_5;
	// System.Int32 Excel.ExcelOpenXmlReader::_emptyRowCount
	int32_t ____emptyRowCount_6;
	// Excel.Core.ZipWorker Excel.ExcelOpenXmlReader::_zipWorker
	ZipWorker_t1305438663 * ____zipWorker_7;
	// System.Xml.XmlReader Excel.ExcelOpenXmlReader::_xmlReader
	XmlReader_t3675626668 * ____xmlReader_8;
	// System.IO.Stream Excel.ExcelOpenXmlReader::_sheetStream
	Stream_t3255436806 * ____sheetStream_9;
	// System.Object[] Excel.ExcelOpenXmlReader::_cellsValues
	ObjectU5BU5D_t3614634134* ____cellsValues_10;
	// System.Object[] Excel.ExcelOpenXmlReader::_savedCellsValues
	ObjectU5BU5D_t3614634134* ____savedCellsValues_11;
	// System.Boolean Excel.ExcelOpenXmlReader::disposed
	bool ___disposed_12;
	// System.Boolean Excel.ExcelOpenXmlReader::_isFirstRowAsColumnNames
	bool ____isFirstRowAsColumnNames_13;
	// System.String Excel.ExcelOpenXmlReader::instanceId
	String_t* ___instanceId_14;
	// System.Collections.Generic.List`1<System.Int32> Excel.ExcelOpenXmlReader::_defaultDateTimeStyles
	List_1_t1440998580 * ____defaultDateTimeStyles_15;
	// System.String Excel.ExcelOpenXmlReader::_namespaceUri
	String_t* ____namespaceUri_16;

public:
	inline static int32_t get_offset_of__workbook_0() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____workbook_0)); }
	inline XlsxWorkbook_t188684221 * get__workbook_0() const { return ____workbook_0; }
	inline XlsxWorkbook_t188684221 ** get_address_of__workbook_0() { return &____workbook_0; }
	inline void set__workbook_0(XlsxWorkbook_t188684221 * value)
	{
		____workbook_0 = value;
		Il2CppCodeGenWriteBarrier(&____workbook_0, value);
	}

	inline static int32_t get_offset_of__isValid_1() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____isValid_1)); }
	inline bool get__isValid_1() const { return ____isValid_1; }
	inline bool* get_address_of__isValid_1() { return &____isValid_1; }
	inline void set__isValid_1(bool value)
	{
		____isValid_1 = value;
	}

	inline static int32_t get_offset_of__isClosed_2() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____isClosed_2)); }
	inline bool get__isClosed_2() const { return ____isClosed_2; }
	inline bool* get_address_of__isClosed_2() { return &____isClosed_2; }
	inline void set__isClosed_2(bool value)
	{
		____isClosed_2 = value;
	}

	inline static int32_t get_offset_of__isFirstRead_3() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____isFirstRead_3)); }
	inline bool get__isFirstRead_3() const { return ____isFirstRead_3; }
	inline bool* get_address_of__isFirstRead_3() { return &____isFirstRead_3; }
	inline void set__isFirstRead_3(bool value)
	{
		____isFirstRead_3 = value;
	}

	inline static int32_t get_offset_of__exceptionMessage_4() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____exceptionMessage_4)); }
	inline String_t* get__exceptionMessage_4() const { return ____exceptionMessage_4; }
	inline String_t** get_address_of__exceptionMessage_4() { return &____exceptionMessage_4; }
	inline void set__exceptionMessage_4(String_t* value)
	{
		____exceptionMessage_4 = value;
		Il2CppCodeGenWriteBarrier(&____exceptionMessage_4, value);
	}

	inline static int32_t get_offset_of__depth_5() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____depth_5)); }
	inline int32_t get__depth_5() const { return ____depth_5; }
	inline int32_t* get_address_of__depth_5() { return &____depth_5; }
	inline void set__depth_5(int32_t value)
	{
		____depth_5 = value;
	}

	inline static int32_t get_offset_of__emptyRowCount_6() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____emptyRowCount_6)); }
	inline int32_t get__emptyRowCount_6() const { return ____emptyRowCount_6; }
	inline int32_t* get_address_of__emptyRowCount_6() { return &____emptyRowCount_6; }
	inline void set__emptyRowCount_6(int32_t value)
	{
		____emptyRowCount_6 = value;
	}

	inline static int32_t get_offset_of__zipWorker_7() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____zipWorker_7)); }
	inline ZipWorker_t1305438663 * get__zipWorker_7() const { return ____zipWorker_7; }
	inline ZipWorker_t1305438663 ** get_address_of__zipWorker_7() { return &____zipWorker_7; }
	inline void set__zipWorker_7(ZipWorker_t1305438663 * value)
	{
		____zipWorker_7 = value;
		Il2CppCodeGenWriteBarrier(&____zipWorker_7, value);
	}

	inline static int32_t get_offset_of__xmlReader_8() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____xmlReader_8)); }
	inline XmlReader_t3675626668 * get__xmlReader_8() const { return ____xmlReader_8; }
	inline XmlReader_t3675626668 ** get_address_of__xmlReader_8() { return &____xmlReader_8; }
	inline void set__xmlReader_8(XmlReader_t3675626668 * value)
	{
		____xmlReader_8 = value;
		Il2CppCodeGenWriteBarrier(&____xmlReader_8, value);
	}

	inline static int32_t get_offset_of__sheetStream_9() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____sheetStream_9)); }
	inline Stream_t3255436806 * get__sheetStream_9() const { return ____sheetStream_9; }
	inline Stream_t3255436806 ** get_address_of__sheetStream_9() { return &____sheetStream_9; }
	inline void set__sheetStream_9(Stream_t3255436806 * value)
	{
		____sheetStream_9 = value;
		Il2CppCodeGenWriteBarrier(&____sheetStream_9, value);
	}

	inline static int32_t get_offset_of__cellsValues_10() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____cellsValues_10)); }
	inline ObjectU5BU5D_t3614634134* get__cellsValues_10() const { return ____cellsValues_10; }
	inline ObjectU5BU5D_t3614634134** get_address_of__cellsValues_10() { return &____cellsValues_10; }
	inline void set__cellsValues_10(ObjectU5BU5D_t3614634134* value)
	{
		____cellsValues_10 = value;
		Il2CppCodeGenWriteBarrier(&____cellsValues_10, value);
	}

	inline static int32_t get_offset_of__savedCellsValues_11() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____savedCellsValues_11)); }
	inline ObjectU5BU5D_t3614634134* get__savedCellsValues_11() const { return ____savedCellsValues_11; }
	inline ObjectU5BU5D_t3614634134** get_address_of__savedCellsValues_11() { return &____savedCellsValues_11; }
	inline void set__savedCellsValues_11(ObjectU5BU5D_t3614634134* value)
	{
		____savedCellsValues_11 = value;
		Il2CppCodeGenWriteBarrier(&____savedCellsValues_11, value);
	}

	inline static int32_t get_offset_of_disposed_12() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ___disposed_12)); }
	inline bool get_disposed_12() const { return ___disposed_12; }
	inline bool* get_address_of_disposed_12() { return &___disposed_12; }
	inline void set_disposed_12(bool value)
	{
		___disposed_12 = value;
	}

	inline static int32_t get_offset_of__isFirstRowAsColumnNames_13() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____isFirstRowAsColumnNames_13)); }
	inline bool get__isFirstRowAsColumnNames_13() const { return ____isFirstRowAsColumnNames_13; }
	inline bool* get_address_of__isFirstRowAsColumnNames_13() { return &____isFirstRowAsColumnNames_13; }
	inline void set__isFirstRowAsColumnNames_13(bool value)
	{
		____isFirstRowAsColumnNames_13 = value;
	}

	inline static int32_t get_offset_of_instanceId_14() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ___instanceId_14)); }
	inline String_t* get_instanceId_14() const { return ___instanceId_14; }
	inline String_t** get_address_of_instanceId_14() { return &___instanceId_14; }
	inline void set_instanceId_14(String_t* value)
	{
		___instanceId_14 = value;
		Il2CppCodeGenWriteBarrier(&___instanceId_14, value);
	}

	inline static int32_t get_offset_of__defaultDateTimeStyles_15() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____defaultDateTimeStyles_15)); }
	inline List_1_t1440998580 * get__defaultDateTimeStyles_15() const { return ____defaultDateTimeStyles_15; }
	inline List_1_t1440998580 ** get_address_of__defaultDateTimeStyles_15() { return &____defaultDateTimeStyles_15; }
	inline void set__defaultDateTimeStyles_15(List_1_t1440998580 * value)
	{
		____defaultDateTimeStyles_15 = value;
		Il2CppCodeGenWriteBarrier(&____defaultDateTimeStyles_15, value);
	}

	inline static int32_t get_offset_of__namespaceUri_16() { return static_cast<int32_t>(offsetof(ExcelOpenXmlReader_t1964336123, ____namespaceUri_16)); }
	inline String_t* get__namespaceUri_16() const { return ____namespaceUri_16; }
	inline String_t** get_address_of__namespaceUri_16() { return &____namespaceUri_16; }
	inline void set__namespaceUri_16(String_t* value)
	{
		____namespaceUri_16 = value;
		Il2CppCodeGenWriteBarrier(&____namespaceUri_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
