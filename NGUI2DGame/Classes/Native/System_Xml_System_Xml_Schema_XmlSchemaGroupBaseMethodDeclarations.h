#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t1106;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1141;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t1105;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t1516;

// System.Void System.Xml.Schema.XmlSchemaGroupBase::.ctor()
extern "C" void XmlSchemaGroupBase__ctor_m9263 (XmlSchemaGroupBase_t1106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::get_Items()
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::get_CompiledItems()
extern "C" XmlSchemaObjectCollection_t1141 * XmlSchemaGroupBase_get_CompiledItems_m9264 (XmlSchemaGroupBase_t1106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CopyOptimizedItems(System.Xml.Schema.XmlSchemaGroupBase)
extern "C" void XmlSchemaGroupBase_CopyOptimizedItems_m9265 (XmlSchemaGroupBase_t1106 * __this, XmlSchemaGroupBase_t1106 * ___gb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool XmlSchemaGroupBase_ParticleEquals_m9266 (XmlSchemaGroupBase_t1106 * __this, XmlSchemaParticle_t1105 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaGroupBase_CheckRecursion_m9267 (XmlSchemaGroupBase_t1106 * __this, int32_t ___depth, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateNSRecurseCheckCardinality(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaGroupBase_ValidateNSRecurseCheckCardinality_m9268 (XmlSchemaGroupBase_t1106 * __this, XmlSchemaAny_t1516 * ___any, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateRecurse(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaGroupBase_ValidateRecurse_m9269 (XmlSchemaGroupBase_t1106 * __this, XmlSchemaGroupBase_t1106 * ___baseGroup, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateSeqRecurseMapSumCommon(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean,System.Boolean,System.Boolean)
extern "C" bool XmlSchemaGroupBase_ValidateSeqRecurseMapSumCommon_m9270 (XmlSchemaGroupBase_t1106 * __this, XmlSchemaGroupBase_t1106 * ___baseGroup, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, bool ___isLax, bool ___isMapAndSum, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
