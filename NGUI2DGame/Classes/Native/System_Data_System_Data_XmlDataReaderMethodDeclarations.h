#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.XmlDataReader
struct XmlDataReader_t982;
// System.Data.DataSet
struct DataSet_t346;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Data.DataRow
struct DataRow_t352;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Data.XmlReadMode
#include "System_Data_System_Data_XmlReadMode.h"

// System.Void System.Data.XmlDataReader::.ctor(System.Data.DataSet,System.Xml.XmlReader,System.Data.XmlReadMode)
extern "C" void XmlDataReader__ctor_m4237 (XmlDataReader_t982 * __this, DataSet_t346 * ___ds, XmlReader_t843 * ___xr, int32_t ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadXml(System.Data.DataSet,System.Xml.XmlReader,System.Data.XmlReadMode)
extern "C" void XmlDataReader_ReadXml_m4238 (Object_t * __this /* static, unused */, DataSet_t346 * ___dataset, XmlReader_t843 * ___reader, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::Process()
extern "C" void XmlDataReader_Process_m4239 (XmlDataReader_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlDataReader::IsTopLevelDataSet()
extern "C" bool XmlDataReader_IsTopLevelDataSet_m4240 (XmlDataReader_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadTopLevelElement()
extern "C" void XmlDataReader_ReadTopLevelElement_m4241 (XmlDataReader_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadDataSetContent()
extern "C" void XmlDataReader_ReadDataSetContent_m4242 (XmlDataReader_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElement(System.Data.DataRow)
extern "C" void XmlDataReader_ReadElement_m4243 (XmlDataReader_t982 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElementAttribute(System.Data.DataRow)
extern "C" void XmlDataReader_ReadElementAttribute_m4244 (XmlDataReader_t982 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElementContent(System.Data.DataRow)
extern "C" void XmlDataReader_ReadElementContent_m4245 (XmlDataReader_t982 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElementElement(System.Data.DataRow)
extern "C" void XmlDataReader_ReadElementElement_m4246 (XmlDataReader_t982 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.XmlDataReader::StringToObject(System.Type,System.String)
extern "C" Object_t * XmlDataReader_StringToObject_m4247 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
