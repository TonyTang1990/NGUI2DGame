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

// System.Data.XmlDataReader
struct XmlDataReader_t1109197734;
// System.Data.DataSet
struct DataSet_t3097402844;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Data.DataRow
struct DataRow_t321465356;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3097402844.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Data_System_Data_XmlReadMode2037225274.h"
#include "System_Data_System_Data_DataRow321465356.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Data.XmlDataReader::.ctor(System.Data.DataSet,System.Xml.XmlReader,System.Data.XmlReadMode)
extern "C"  void XmlDataReader__ctor_m2420783971 (XmlDataReader_t1109197734 * __this, DataSet_t3097402844 * ___ds0, XmlReader_t3675626668 * ___xr1, int32_t ___m2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadXml(System.Data.DataSet,System.Xml.XmlReader,System.Data.XmlReadMode)
extern "C"  void XmlDataReader_ReadXml_m3349656688 (Il2CppObject * __this /* static, unused */, DataSet_t3097402844 * ___dataset0, XmlReader_t3675626668 * ___reader1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::Process()
extern "C"  void XmlDataReader_Process_m643489426 (XmlDataReader_t1109197734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlDataReader::IsTopLevelDataSet()
extern "C"  bool XmlDataReader_IsTopLevelDataSet_m2907275022 (XmlDataReader_t1109197734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadTopLevelElement()
extern "C"  void XmlDataReader_ReadTopLevelElement_m2406853570 (XmlDataReader_t1109197734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadDataSetContent()
extern "C"  void XmlDataReader_ReadDataSetContent_m3742625126 (XmlDataReader_t1109197734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElement(System.Data.DataRow)
extern "C"  void XmlDataReader_ReadElement_m2749598594 (XmlDataReader_t1109197734 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElementAttribute(System.Data.DataRow)
extern "C"  void XmlDataReader_ReadElementAttribute_m3404880590 (XmlDataReader_t1109197734 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElementContent(System.Data.DataRow)
extern "C"  void XmlDataReader_ReadElementContent_m4179593367 (XmlDataReader_t1109197734 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElementElement(System.Data.DataRow)
extern "C"  void XmlDataReader_ReadElementElement_m1609777002 (XmlDataReader_t1109197734 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.XmlDataReader::StringToObject(System.Type,System.String)
extern "C"  Il2CppObject * XmlDataReader_StringToObject_m3733001322 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
