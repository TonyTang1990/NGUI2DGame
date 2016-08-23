#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.Configuration.Configuration
struct Configuration_t1398;
// System.Configuration.ElementInformation
struct ElementInformation_t1414;
// System.String
struct String_t;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t1415;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t1429;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Configuration.PropertyInformation
struct PropertyInformation_t1446;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t1413;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.ConfigurationElement::.ctor()
extern "C" void ConfigurationElement__ctor_m6531 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationElement::get_Configuration()
extern "C" Configuration_t1398 * ConfigurationElement_get_Configuration_m6532 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Configuration(System.Configuration.Configuration)
extern "C" void ConfigurationElement_set_Configuration_m6533 (ConfigurationElement_t1416 * __this, Configuration_t1398 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitFromProperty(System.Configuration.PropertyInformation)
extern "C" void ConfigurationElement_InitFromProperty_m6534 (ConfigurationElement_t1416 * __this, PropertyInformation_t1446 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::get_ElementInformation()
extern "C" ElementInformation_t1414 * ConfigurationElement_get_ElementInformation_m6535 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElement::get_RawXml()
extern "C" String_t* ConfigurationElement_get_RawXml_m6536 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_RawXml(System.String)
extern "C" void ConfigurationElement_set_RawXml_m6537 (ConfigurationElement_t1416 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Init()
extern "C" void ConfigurationElement_Init_m6538 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllAttributesExcept()
extern "C" ConfigurationLockCollection_t1415 * ConfigurationElement_get_LockAllAttributesExcept_m6539 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllElementsExcept()
extern "C" ConfigurationLockCollection_t1415 * ConfigurationElement_get_LockAllElementsExcept_m6540 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAttributes()
extern "C" ConfigurationLockCollection_t1415 * ConfigurationElement_get_LockAttributes_m6541 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockElements()
extern "C" ConfigurationLockCollection_t1415 * ConfigurationElement_get_LockElements_m6542 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_LockItem(System.Boolean)
extern "C" void ConfigurationElement_set_LockItem_m6543 (ConfigurationElement_t1416 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetPropertyValue(System.Configuration.ConfigurationProperty,System.Object,System.Boolean)
extern "C" void ConfigurationElement_SetPropertyValue_m6544 (ConfigurationElement_t1416 * __this, ConfigurationProperty_t1429 * ___prop, Object_t * ___value, bool ___ignoreLocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::GetKeyProperties()
extern "C" ConfigurationPropertyCollection_t1412 * ConfigurationElement_GetKeyProperties_m6545 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::GetDefaultCollection()
extern "C" ConfigurationElementCollection_t1413 * ConfigurationElement_GetDefaultCollection_m6546 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.Configuration.ConfigurationProperty)
extern "C" Object_t * ConfigurationElement_get_Item_m6547 (ConfigurationElement_t1416 * __this, ConfigurationProperty_t1429 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.Configuration.ConfigurationProperty,System.Object)
extern "C" void ConfigurationElement_set_Item_m6548 (ConfigurationElement_t1416 * __this, ConfigurationProperty_t1429 * ___property, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.String)
extern "C" Object_t * ConfigurationElement_get_Item_m6549 (ConfigurationElement_t1416 * __this, String_t* ___property_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.String,System.Object)
extern "C" void ConfigurationElement_set_Item_m6550 (ConfigurationElement_t1416 * __this, String_t* ___property_name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * ConfigurationElement_get_Properties_m6551 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object)
extern "C" bool ConfigurationElement_Equals_m6552 (ConfigurationElement_t1416 * __this, Object_t * ___compareTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElement::GetHashCode()
extern "C" int32_t ConfigurationElement_GetHashCode_m6553 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValues()
extern "C" bool ConfigurationElement_HasValues_m6554 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasLocalModifications()
extern "C" bool ConfigurationElement_HasLocalModifications_m6555 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C" void ConfigurationElement_DeserializeElement_m6556 (ConfigurationElement_t1416 * __this, XmlReader_t843 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C" bool ConfigurationElement_OnDeserializeUnrecognizedAttribute_m6557 (ConfigurationElement_t1416 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C" bool ConfigurationElement_OnDeserializeUnrecognizedElement_m6558 (ConfigurationElement_t1416 * __this, String_t* ___element, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::OnRequiredPropertyNotFound(System.String)
extern "C" Object_t * ConfigurationElement_OnRequiredPropertyNotFound_m6559 (ConfigurationElement_t1416 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PreSerialize(System.Xml.XmlWriter)
extern "C" void ConfigurationElement_PreSerialize_m6560 (ConfigurationElement_t1416 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PostDeserialize()
extern "C" void ConfigurationElement_PostDeserialize_m6561 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitializeDefault()
extern "C" void ConfigurationElement_InitializeDefault_m6562 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsModified()
extern "C" bool ConfigurationElement_IsModified_m6563 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetReadOnly()
extern "C" void ConfigurationElement_SetReadOnly_m6564 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsReadOnly()
extern "C" bool ConfigurationElement_IsReadOnly_m6565 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement)
extern "C" void ConfigurationElement_Reset_m6566 (ConfigurationElement_t1416 * __this, ConfigurationElement_t1416 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ResetModified()
extern "C" void ConfigurationElement_ResetModified_m6567 (ConfigurationElement_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C" bool ConfigurationElement_SerializeElement_m6568 (ConfigurationElement_t1416 * __this, XmlWriter_t1056 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String)
extern "C" bool ConfigurationElement_SerializeToXmlElement_m6569 (ConfigurationElement_t1416 * __this, XmlWriter_t1056 * ___writer, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C" void ConfigurationElement_Unmerge_m6570 (ConfigurationElement_t1416 * __this, ConfigurationElement_t1416 * ___source, ConfigurationElement_t1416 * ___parent, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValue(System.String)
extern "C" bool ConfigurationElement_HasValue_m6571 (ConfigurationElement_t1416 * __this, String_t* ___propName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ValidateValue(System.Configuration.ConfigurationProperty,System.String)
extern "C" void ConfigurationElement_ValidateValue_m6572 (ConfigurationElement_t1416 * __this, ConfigurationProperty_t1429 * ___p, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
