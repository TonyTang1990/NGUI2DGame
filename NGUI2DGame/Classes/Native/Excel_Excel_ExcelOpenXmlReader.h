#pragma once
#include <stdint.h>
// Excel.Core.OpenXmlFormat.XlsxWorkbook
struct XlsxWorkbook_t837;
// System.String
struct String_t;
// Excel.Core.ZipWorker
struct ZipWorker_t841;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.IO.Stream
struct Stream_t844;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t154;
// System.Object
#include "mscorlib_System_Object.h"
// Excel.ExcelOpenXmlReader
struct  ExcelOpenXmlReader_t845  : public Object_t
{
	// Excel.Core.OpenXmlFormat.XlsxWorkbook Excel.ExcelOpenXmlReader::_workbook
	XlsxWorkbook_t837 * ____workbook_0;
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
	ZipWorker_t841 * ____zipWorker_7;
	// System.Xml.XmlReader Excel.ExcelOpenXmlReader::_xmlReader
	XmlReader_t843 * ____xmlReader_8;
	// System.IO.Stream Excel.ExcelOpenXmlReader::_sheetStream
	Stream_t844 * ____sheetStream_9;
	// System.Object[] Excel.ExcelOpenXmlReader::_cellsValues
	ObjectU5BU5D_t300* ____cellsValues_10;
	// System.Object[] Excel.ExcelOpenXmlReader::_savedCellsValues
	ObjectU5BU5D_t300* ____savedCellsValues_11;
	// System.Boolean Excel.ExcelOpenXmlReader::disposed
	bool ___disposed_12;
	// System.Boolean Excel.ExcelOpenXmlReader::_isFirstRowAsColumnNames
	bool ____isFirstRowAsColumnNames_13;
	// System.String Excel.ExcelOpenXmlReader::instanceId
	String_t* ___instanceId_14;
	// System.Collections.Generic.List`1<System.Int32> Excel.ExcelOpenXmlReader::_defaultDateTimeStyles
	List_1_t154 * ____defaultDateTimeStyles_15;
	// System.String Excel.ExcelOpenXmlReader::_namespaceUri
	String_t* ____namespaceUri_16;
};
