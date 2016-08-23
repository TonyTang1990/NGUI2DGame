#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.PropertyInformation
struct PropertyInformation_t1446;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t1429;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.Configuration.PropertyValueOrigin
#include "System_Configuration_System_Configuration_PropertyValueOrigi.h"

// System.Void System.Configuration.PropertyInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationProperty)
extern "C" void PropertyInformation__ctor_m6782 (PropertyInformation_t1446 * __this, ConfigurationElement_t1416 * ___owner, ConfigurationProperty_t1429 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.PropertyInformation::get_DefaultValue()
extern "C" Object_t * PropertyInformation_get_DefaultValue_m6783 (PropertyInformation_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsKey()
extern "C" bool PropertyInformation_get_IsKey_m6784 (PropertyInformation_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsModified()
extern "C" bool PropertyInformation_get_IsModified_m6785 (PropertyInformation_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::set_IsModified(System.Boolean)
extern "C" void PropertyInformation_set_IsModified_m6786 (PropertyInformation_t1446 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsRequired()
extern "C" bool PropertyInformation_get_IsRequired_m6787 (PropertyInformation_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.PropertyInformation::get_Name()
extern "C" String_t* PropertyInformation_get_Name_m6788 (PropertyInformation_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.PropertyInformation::get_Type()
extern "C" Type_t * PropertyInformation_get_Type_m6789 (PropertyInformation_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.PropertyInformation::get_Value()
extern "C" Object_t * PropertyInformation_get_Value_m6790 (PropertyInformation_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::set_Value(System.Object)
extern "C" void PropertyInformation_set_Value_m6791 (PropertyInformation_t1446 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::Reset(System.Configuration.PropertyInformation)
extern "C" void PropertyInformation_Reset_m6792 (PropertyInformation_t1446 * __this, PropertyInformation_t1446 * ___parentProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsElement()
extern "C" bool PropertyInformation_get_IsElement_m6793 (PropertyInformation_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyValueOrigin System.Configuration.PropertyInformation::get_ValueOrigin()
extern "C" int32_t PropertyInformation_get_ValueOrigin_m6794 (PropertyInformation_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.PropertyInformation::GetStringValue()
extern "C" String_t* PropertyInformation_GetStringValue_m6795 (PropertyInformation_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::SetStringValue(System.String)
extern "C" void PropertyInformation_SetStringValue_m6796 (PropertyInformation_t1446 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationProperty System.Configuration.PropertyInformation::get_Property()
extern "C" ConfigurationProperty_t1429 * PropertyInformation_get_Property_m6797 (PropertyInformation_t1446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
