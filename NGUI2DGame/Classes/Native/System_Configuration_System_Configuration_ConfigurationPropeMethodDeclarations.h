#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t1429;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t1428;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t1410;
// System.ComponentModel.TypeConverter
struct TypeConverter_t1427;
// System.Configuration.ConfigurationPropertyOptions
#include "System_Configuration_System_Configuration_ConfigurationPrope_0.h"

// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type)
extern "C" void ConfigurationProperty__ctor_m6660 (ConfigurationProperty_t1429 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object)
extern "C" void ConfigurationProperty__ctor_m6661 (ConfigurationProperty_t1429 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.Configuration.ConfigurationPropertyOptions)
extern "C" void ConfigurationProperty__ctor_m6662 (ConfigurationProperty_t1429 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions)
extern "C" void ConfigurationProperty__ctor_m6663 (ConfigurationProperty_t1429 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t1427 * ___converter, ConfigurationValidatorBase_t1428 * ___validation, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions,System.String)
extern "C" void ConfigurationProperty__ctor_m6664 (ConfigurationProperty_t1429 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t1427 * ___converter, ConfigurationValidatorBase_t1428 * ___validation, int32_t ___flags, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.cctor()
extern "C" void ConfigurationProperty__cctor_m6665 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::get_DefaultValue()
extern "C" Object_t * ConfigurationProperty_get_DefaultValue_m6666 (ConfigurationProperty_t1429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsKey()
extern "C" bool ConfigurationProperty_get_IsKey_m6667 (ConfigurationProperty_t1429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsRequired()
extern "C" bool ConfigurationProperty_get_IsRequired_m6668 (ConfigurationProperty_t1429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsDefaultCollection()
extern "C" bool ConfigurationProperty_get_IsDefaultCollection_m6669 (ConfigurationProperty_t1429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::get_Name()
extern "C" String_t* ConfigurationProperty_get_Name_m6670 (ConfigurationProperty_t1429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.ConfigurationProperty::get_Type()
extern "C" Type_t * ConfigurationProperty_get_Type_m6671 (ConfigurationProperty_t1429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationProperty::get_Validator()
extern "C" ConfigurationValidatorBase_t1428 * ConfigurationProperty_get_Validator_m6672 (ConfigurationProperty_t1429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::ConvertFromString(System.String)
extern "C" Object_t * ConfigurationProperty_ConvertFromString_m6673 (ConfigurationProperty_t1429 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::ConvertToString(System.Object)
extern "C" String_t* ConfigurationProperty_ConvertToString_m6674 (ConfigurationProperty_t1429 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsElement()
extern "C" bool ConfigurationProperty_get_IsElement_m6675 (ConfigurationProperty_t1429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ConfigurationProperty::get_CollectionAttribute()
extern "C" ConfigurationCollectionAttribute_t1410 * ConfigurationProperty_get_CollectionAttribute_m6676 (ConfigurationProperty_t1429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::set_CollectionAttribute(System.Configuration.ConfigurationCollectionAttribute)
extern "C" void ConfigurationProperty_set_CollectionAttribute_m6677 (ConfigurationProperty_t1429 * __this, ConfigurationCollectionAttribute_t1410 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::Validate(System.Object)
extern "C" void ConfigurationProperty_Validate_m6678 (ConfigurationProperty_t1429 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
