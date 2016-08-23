#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t1556;
// System.String
struct String_t;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;

// System.Void Mono.Xml.DTDEntityBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityBase__ctor_m7490 (DTDEntityBase_t1556 * __this, DTDObjectModel_t1528 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityBase::get_IsInvalid()
extern "C" bool DTDEntityBase_get_IsInvalid_m7491 (DTDEntityBase_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_LoadFailed(System.Boolean)
extern "C" void DTDEntityBase_set_LoadFailed_m7492 (DTDEntityBase_t1556 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_Name()
extern "C" String_t* DTDEntityBase_get_Name_m7493 (DTDEntityBase_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_Name(System.String)
extern "C" void DTDEntityBase_set_Name_m7494 (DTDEntityBase_t1556 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_PublicId()
extern "C" String_t* DTDEntityBase_get_PublicId_m7495 (DTDEntityBase_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_PublicId(System.String)
extern "C" void DTDEntityBase_set_PublicId_m7496 (DTDEntityBase_t1556 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_SystemId()
extern "C" String_t* DTDEntityBase_get_SystemId_m7497 (DTDEntityBase_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_SystemId(System.String)
extern "C" void DTDEntityBase_set_SystemId_m7498 (DTDEntityBase_t1556 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_LiteralEntityValue()
extern "C" String_t* DTDEntityBase_get_LiteralEntityValue_m7499 (DTDEntityBase_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_LiteralEntityValue(System.String)
extern "C" void DTDEntityBase_set_LiteralEntityValue_m7500 (DTDEntityBase_t1556 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_ReplacementText()
extern "C" String_t* DTDEntityBase_get_ReplacementText_m7501 (DTDEntityBase_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_ReplacementText(System.String)
extern "C" void DTDEntityBase_set_ReplacementText_m7502 (DTDEntityBase_t1556 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDEntityBase_set_XmlResolver_m7503 (DTDEntityBase_t1556 * __this, XmlResolver_t1520 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_ActualUri()
extern "C" String_t* DTDEntityBase_get_ActualUri_m7504 (DTDEntityBase_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::Resolve()
extern "C" void DTDEntityBase_Resolve_m7505 (DTDEntityBase_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
