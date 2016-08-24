#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.XmlWriter
struct XmlWriter_t1048088568;
// System.Collections.Generic.List`1<System.Data.DataTable>
struct List_1_t2636733556;
// System.Collections.Generic.List`1<System.Data.DataRelation>
struct List_1_t159232844;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "System_Data_System_Data_XmlWriteMode996295013.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Data_System_Data_DataRowVersion3411859714.h"

// System.Void XmlTableWriter::WriteTables(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Collections.Generic.List`1<System.Data.DataTable>,System.Collections.Generic.List`1<System.Data.DataRelation>,System.String,System.String)
extern "C"  void XmlTableWriter_WriteTables_m3701515798 (Il2CppObject * __this /* static, unused */, XmlWriter_t1048088568 * ___writer0, int32_t ___mode1, List_1_t2636733556 * ___tables2, List_1_t159232844 * ___relations3, String_t* ___mainDataTable4, String_t* ___dataSetName5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XmlTableWriter::WriteTableList(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Collections.Generic.List`1<System.Data.DataTable>,System.Data.DataRowVersion)
extern "C"  void XmlTableWriter_WriteTableList_m2522002349 (Il2CppObject * __this /* static, unused */, XmlWriter_t1048088568 * ___writer0, int32_t ___mode1, List_1_t2636733556 * ___tables2, int32_t ___version3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
