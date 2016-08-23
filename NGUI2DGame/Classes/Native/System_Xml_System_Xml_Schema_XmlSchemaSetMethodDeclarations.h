#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1149;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t1710;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.ICollection
struct ICollection_t793;

// System.Void System.Xml.Schema.XmlSchemaSet::.ctor()
extern "C" void XmlSchemaSet__ctor_m9434 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlSchemaSet__ctor_m9435 (XmlSchemaSet_t1102 * __this, XmlNameTable_t1543 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::add_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSet_add_ValidationEventHandler_m9436 (XmlSchemaSet_t1102 * __this, ValidationEventHandler_t1144 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::remove_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSet_remove_ValidationEventHandler_m9437 (XmlSchemaSet_t1102 * __this, ValidationEventHandler_t1144 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSet::get_Count()
extern "C" int32_t XmlSchemaSet_get_Count_m5121 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalAttributes()
extern "C" XmlSchemaObjectTable_t1149 * XmlSchemaSet_get_GlobalAttributes_m9438 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalElements()
extern "C" XmlSchemaObjectTable_t1149 * XmlSchemaSet_get_GlobalElements_m9439 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalTypes()
extern "C" XmlSchemaObjectTable_t1149 * XmlSchemaSet_get_GlobalTypes_m9440 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::get_IsCompiled()
extern "C" bool XmlSchemaSet_get_IsCompiled_m9441 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::get_CompilationSettings()
extern "C" XmlSchemaCompilationSettings_t1710 * XmlSchemaSet_get_CompilationSettings_m9442 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XmlSchemaSet_set_XmlResolver_m9443 (XmlSchemaSet_t1102 * __this, XmlResolver_t1520 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaSet::get_XmlResolver()
extern "C" XmlResolver_t1520 * XmlSchemaSet_get_XmlResolver_m9444 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::get_IDCollection()
extern "C" Hashtable_t915 * XmlSchemaSet_get_IDCollection_m9445 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_NamedIdentities()
extern "C" XmlSchemaObjectTable_t1149 * XmlSchemaSet_get_NamedIdentities_m9446 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaSet::Add(System.Xml.Schema.XmlSchema)
extern "C" XmlSchema_t1053 * XmlSchemaSet_Add_m5126 (XmlSchemaSet_t1102 * __this, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::Compile()
extern "C" void XmlSchemaSet_Compile_m9447 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::ClearGlobalComponents()
extern "C" void XmlSchemaSet_ClearGlobalComponents_m9448 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::AddGlobalComponents(System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaSet_AddGlobalComponents_m9449 (XmlSchemaSet_t1102 * __this, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::Contains(System.String)
extern "C" bool XmlSchemaSet_Contains_m9450 (XmlSchemaSet_t1102 * __this, String_t* ___targetNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::Contains(System.Xml.Schema.XmlSchema)
extern "C" bool XmlSchemaSet_Contains_m9451 (XmlSchemaSet_t1102 * __this, XmlSchema_t1053 * ___targetNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::CopyTo(System.Array,System.Int32)
extern "C" void XmlSchemaSet_CopyTo_m9452 (XmlSchemaSet_t1102 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaSet::GetSafeNs(System.String)
extern "C" String_t* XmlSchemaSet_GetSafeNs_m9453 (XmlSchemaSet_t1102 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::ResetCompile()
extern "C" void XmlSchemaSet_ResetCompile_m9454 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaSet::Schemas()
extern "C" Object_t * XmlSchemaSet_Schemas_m9455 (XmlSchemaSet_t1102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaSet::Schemas(System.String)
extern "C" Object_t * XmlSchemaSet_Schemas_m9456 (XmlSchemaSet_t1102 * __this, String_t* ___targetNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::MissedSubComponents(System.String)
extern "C" bool XmlSchemaSet_MissedSubComponents_m9457 (XmlSchemaSet_t1102 * __this, String_t* ___targetNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
