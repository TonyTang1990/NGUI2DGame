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

// System.Data.XmlDiffLoader
struct XmlDiffLoader_t1575285317;
// System.Data.DataSet
struct DataSet_t3097402844;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Data.DataRow
struct DataRow_t321465356;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3097402844.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_Data_System_Data_DataRow321465356.h"
#include "System_Data_System_Data_DataRowVersion3411859714.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Data.XmlDiffLoader::.ctor(System.Data.DataSet)
extern "C"  void XmlDiffLoader__ctor_m1713931939 (XmlDiffLoader_t1575285317 * __this, DataSet_t3097402844 * ___DSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::Load(System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_Load_m3151647502 (XmlDiffLoader_t1575285317 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadCurrent(System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadCurrent_m3326391003 (XmlDiffLoader_t1575285317 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadBefore(System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadBefore_m1420065711 (XmlDiffLoader_t1575285317 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadErrors(System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadErrors_m3895295245 (XmlDiffLoader_t1575285317 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadColumns(System.Data.DataTable,System.Data.DataRow,System.Xml.XmlReader,System.Data.DataRowVersion)
extern "C"  void XmlDiffLoader_LoadColumns_m3999573468 (XmlDiffLoader_t1575285317 * __this, DataTable_t3267612424 * ___Table0, DataRow_t321465356 * ___Row1, XmlReader_t3675626668 * ___reader2, int32_t ___loadType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadColumnAttributes(System.Data.DataTable,System.Data.DataRow,System.Xml.XmlReader,System.Data.DataRowVersion)
extern "C"  void XmlDiffLoader_LoadColumnAttributes_m490227218 (XmlDiffLoader_t1575285317 * __this, DataTable_t3267612424 * ___Table0, DataRow_t321465356 * ___Row1, XmlReader_t3675626668 * ___reader2, int32_t ___loadType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadColumnChildren(System.Data.DataTable,System.Data.DataRow,System.Xml.XmlReader,System.Data.DataRowVersion)
extern "C"  void XmlDiffLoader_LoadColumnChildren_m1480798540 (XmlDiffLoader_t1575285317 * __this, DataTable_t3267612424 * ___Table0, DataRow_t321465356 * ___Row1, XmlReader_t3675626668 * ___reader2, int32_t ___loadType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadBeforeTable(System.Data.DataTable,System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadBeforeTable_m1982504958 (XmlDiffLoader_t1575285317 * __this, DataTable_t3267612424 * ___Table0, XmlReader_t3675626668 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadCurrentTable(System.Data.DataTable,System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadCurrentTable_m4106954534 (XmlDiffLoader_t1575285317 * __this, DataTable_t3267612424 * ___Table0, XmlReader_t3675626668 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.XmlDiffLoader::GetTable(System.String)
extern "C"  DataTable_t3267612424 * XmlDiffLoader_GetTable_m1294408002 (XmlDiffLoader_t1575285317 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
