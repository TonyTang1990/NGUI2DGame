#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.XmlDiffLoader
struct XmlDiffLoader_t987;
// System.Data.DataSet
struct DataSet_t346;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataRow
struct DataRow_t352;
// System.String
struct String_t;
// System.Data.DataRowVersion
#include "System_Data_System_Data_DataRowVersion.h"

// System.Void System.Data.XmlDiffLoader::.ctor(System.Data.DataSet)
extern "C" void XmlDiffLoader__ctor_m4249 (XmlDiffLoader_t987 * __this, DataSet_t346 * ___DSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::Load(System.Xml.XmlReader)
extern "C" void XmlDiffLoader_Load_m4250 (XmlDiffLoader_t987 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadCurrent(System.Xml.XmlReader)
extern "C" void XmlDiffLoader_LoadCurrent_m4251 (XmlDiffLoader_t987 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadBefore(System.Xml.XmlReader)
extern "C" void XmlDiffLoader_LoadBefore_m4252 (XmlDiffLoader_t987 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadErrors(System.Xml.XmlReader)
extern "C" void XmlDiffLoader_LoadErrors_m4253 (XmlDiffLoader_t987 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadColumns(System.Data.DataTable,System.Data.DataRow,System.Xml.XmlReader,System.Data.DataRowVersion)
extern "C" void XmlDiffLoader_LoadColumns_m4254 (XmlDiffLoader_t987 * __this, DataTable_t296 * ___Table, DataRow_t352 * ___Row, XmlReader_t843 * ___reader, int32_t ___loadType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadColumnAttributes(System.Data.DataTable,System.Data.DataRow,System.Xml.XmlReader,System.Data.DataRowVersion)
extern "C" void XmlDiffLoader_LoadColumnAttributes_m4255 (XmlDiffLoader_t987 * __this, DataTable_t296 * ___Table, DataRow_t352 * ___Row, XmlReader_t843 * ___reader, int32_t ___loadType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadColumnChildren(System.Data.DataTable,System.Data.DataRow,System.Xml.XmlReader,System.Data.DataRowVersion)
extern "C" void XmlDiffLoader_LoadColumnChildren_m4256 (XmlDiffLoader_t987 * __this, DataTable_t296 * ___Table, DataRow_t352 * ___Row, XmlReader_t843 * ___reader, int32_t ___loadType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadBeforeTable(System.Data.DataTable,System.Xml.XmlReader)
extern "C" void XmlDiffLoader_LoadBeforeTable_m4257 (XmlDiffLoader_t987 * __this, DataTable_t296 * ___Table, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadCurrentTable(System.Data.DataTable,System.Xml.XmlReader)
extern "C" void XmlDiffLoader_LoadCurrentTable_m4258 (XmlDiffLoader_t987 * __this, DataTable_t296 * ___Table, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.XmlDiffLoader::GetTable(System.String)
extern "C" DataTable_t296 * XmlDiffLoader_GetTable_m4259 (XmlDiffLoader_t987 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
