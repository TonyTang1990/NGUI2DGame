#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// XmlTableWriter
struct XmlTableWriter_t1059;
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Collections.Generic.List`1<System.Data.DataTable>
struct List_1_t857;
// System.Collections.Generic.List`1<System.Data.DataRelation>
struct List_1_t1114;
// System.String
struct String_t;
// System.Data.XmlWriteMode
#include "System_Data_System_Data_XmlWriteMode.h"
// System.Data.DataRowVersion
#include "System_Data_System_Data_DataRowVersion.h"

// System.Void XmlTableWriter::WriteTables(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Collections.Generic.List`1<System.Data.DataTable>,System.Collections.Generic.List`1<System.Data.DataRelation>,System.String,System.String)
extern "C" void XmlTableWriter_WriteTables_m4815 (Object_t * __this /* static, unused */, XmlWriter_t1056 * ___writer, int32_t ___mode, List_1_t857 * ___tables, List_1_t1114 * ___relations, String_t* ___mainDataTable, String_t* ___dataSetName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XmlTableWriter::WriteTableList(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Collections.Generic.List`1<System.Data.DataTable>,System.Data.DataRowVersion)
extern "C" void XmlTableWriter_WriteTableList_m4816 (Object_t * __this /* static, unused */, XmlWriter_t1056 * ___writer, int32_t ___mode, List_1_t857 * ___tables, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
