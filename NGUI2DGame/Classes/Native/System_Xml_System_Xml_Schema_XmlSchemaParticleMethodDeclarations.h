#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t1105;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1149;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Xml.Schema.XmlSchemaParticle::.ctor()
extern "C" void XmlSchemaParticle__ctor_m9404 (XmlSchemaParticle_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::get_Empty()
extern "C" XmlSchemaParticle_t1105 * XmlSchemaParticle_get_Empty_m9405 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MinOccursString()
extern "C" String_t* XmlSchemaParticle_get_MinOccursString_m9406 (XmlSchemaParticle_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccursString(System.String)
extern "C" void XmlSchemaParticle_set_MinOccursString_m9407 (XmlSchemaParticle_t1105 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MaxOccursString()
extern "C" String_t* XmlSchemaParticle_get_MaxOccursString_m9408 (XmlSchemaParticle_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccursString(System.String)
extern "C" void XmlSchemaParticle_set_MaxOccursString_m9409 (XmlSchemaParticle_t1105 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MinOccurs()
extern "C" Decimal_t698  XmlSchemaParticle_get_MinOccurs_m5204 (XmlSchemaParticle_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccurs(System.Decimal)
extern "C" void XmlSchemaParticle_set_MinOccurs_m9410 (XmlSchemaParticle_t1105 * __this, Decimal_t698  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MaxOccurs()
extern "C" Decimal_t698  XmlSchemaParticle_get_MaxOccurs_m5209 (XmlSchemaParticle_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccurs(System.Decimal)
extern "C" void XmlSchemaParticle_set_MaxOccurs_m9411 (XmlSchemaParticle_t1105 * __this, Decimal_t698  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMinOccurs()
extern "C" Decimal_t698  XmlSchemaParticle_get_ValidatedMinOccurs_m9412 (XmlSchemaParticle_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMaxOccurs()
extern "C" Decimal_t698  XmlSchemaParticle_get_ValidatedMaxOccurs_m9413 (XmlSchemaParticle_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t1105 * XmlSchemaParticle_GetOptimizedParticle_m9414 (XmlSchemaParticle_t1105 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetShallowClone()
extern "C" XmlSchemaParticle_t1105 * XmlSchemaParticle_GetShallowClone_m9415 (XmlSchemaParticle_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CompileOccurence(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaParticle_CompileOccurence_m9416 (XmlSchemaParticle_t1105 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C" void XmlSchemaParticle_CopyInfo_m9417 (XmlSchemaParticle_t1105 * __this, XmlSchemaParticle_t1105 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateOccurenceRangeOK(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaParticle_ValidateOccurenceRangeOK_m9418 (XmlSchemaParticle_t1105 * __this, XmlSchemaParticle_t1105 * ___other, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRange()
extern "C" Decimal_t698  XmlSchemaParticle_GetMinEffectiveTotalRange_m9419 (XmlSchemaParticle_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRangeAllAndSequence()
extern "C" Decimal_t698  XmlSchemaParticle_GetMinEffectiveTotalRangeAllAndSequence_m9420 (XmlSchemaParticle_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateIsEmptiable()
extern "C" bool XmlSchemaParticle_ValidateIsEmptiable_m9421 (XmlSchemaParticle_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaParticle_ValidateDerivationByRestriction_m9422 (XmlSchemaParticle_t1105 * __this, XmlSchemaParticle_t1105 * ___baseParticle, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaParticle_ValidateUniqueParticleAttribution_m9423 (XmlSchemaParticle_t1105 * __this, XmlSchemaObjectTable_t1149 * ___qnames, ArrayList_t913 * ___nsNames, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaParticle_ValidateUniqueTypeAttribution_m9424 (XmlSchemaParticle_t1105 * __this, XmlSchemaObjectTable_t1149 * ___labels, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaParticle_CheckRecursion_m9425 (XmlSchemaParticle_t1105 * __this, int32_t ___depth, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool XmlSchemaParticle_ParticleEquals_m9426 (XmlSchemaParticle_t1105 * __this, XmlSchemaParticle_t1105 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
