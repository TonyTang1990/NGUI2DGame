#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t1413;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Configuration.PropertyInformation
struct PropertyInformation_t1446;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Configuration.ConfigurationElementCollectionType
#include "System_Configuration_System_Configuration_ConfigurationEleme.h"
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.ConfigurationElementCollection::.ctor()
extern "C" void ConfigurationElementCollection__ctor_m6580 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ConfigurationElementCollection_System_Collections_ICollection_CopyTo_m6581 (ConfigurationElementCollection_t1413 * __this, Array_t * ___arr, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::InitFromProperty(System.Configuration.PropertyInformation)
extern "C" void ConfigurationElementCollection_InitFromProperty_m6582 (ConfigurationElementCollection_t1413 * __this, PropertyInformation_t1446 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType()
extern "C" int32_t ConfigurationElementCollection_get_CollectionType_m6583 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsBasic()
extern "C" bool ConfigurationElementCollection_get_IsBasic_m6584 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsAlternate()
extern "C" bool ConfigurationElementCollection_get_IsAlternate_m6585 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::get_Count()
extern "C" int32_t ConfigurationElementCollection_get_Count_m6586 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_ElementName()
extern "C" String_t* ConfigurationElementCollection_get_ElementName_m6587 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::set_EmitClear(System.Boolean)
extern "C" void ConfigurationElementCollection_set_EmitClear_m6588 (ConfigurationElementCollection_t1413 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElementCollection::get_SyncRoot()
extern "C" Object_t * ConfigurationElementCollection_get_SyncRoot_m6589 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_ThrowOnDuplicate()
extern "C" bool ConfigurationElementCollection_get_ThrowOnDuplicate_m6590 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_AddElementName()
extern "C" String_t* ConfigurationElementCollection_get_AddElementName_m6591 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_ClearElementName()
extern "C" String_t* ConfigurationElementCollection_get_ClearElementName_m6592 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_RemoveElementName()
extern "C" String_t* ConfigurationElementCollection_get_RemoveElementName_m6593 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement)
extern "C" void ConfigurationElementCollection_BaseAdd_m6594 (ConfigurationElementCollection_t1413 * __this, ConfigurationElement_t1416 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement,System.Boolean)
extern "C" void ConfigurationElementCollection_BaseAdd_m6595 (ConfigurationElementCollection_t1413 * __this, ConfigurationElement_t1416 * ___element, bool ___throwIfExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseClear()
extern "C" void ConfigurationElementCollection_BaseClear_m6596 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Int32)
extern "C" ConfigurationElement_t1416 * ConfigurationElementCollection_BaseGet_m6597 (ConfigurationElementCollection_t1413 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Object)
extern "C" ConfigurationElement_t1416 * ConfigurationElementCollection_BaseGet_m6598 (ConfigurationElementCollection_t1413 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::BaseIndexOf(System.Configuration.ConfigurationElement)
extern "C" int32_t ConfigurationElementCollection_BaseIndexOf_m6599 (ConfigurationElementCollection_t1413 * __this, ConfigurationElement_t1416 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::IndexOfKey(System.Object)
extern "C" int32_t ConfigurationElementCollection_IndexOfKey_m6600 (ConfigurationElementCollection_t1413 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemove(System.Object)
extern "C" void ConfigurationElementCollection_BaseRemove_m6601 (ConfigurationElementCollection_t1413 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemoveAt(System.Int32)
extern "C" void ConfigurationElementCollection_BaseRemoveAt_m6602 (ConfigurationElementCollection_t1413 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::CompareKeys(System.Object,System.Object)
extern "C" bool ConfigurationElementCollection_CompareKeys_m6603 (ConfigurationElementCollection_t1413 * __this, Object_t * ___key1, Object_t * ___key2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement()
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement(System.String)
extern "C" ConfigurationElement_t1416 * ConfigurationElementCollection_CreateNewElement_m6604 (ConfigurationElementCollection_t1413 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElementInternal(System.String)
extern "C" ConfigurationElement_t1416 * ConfigurationElementCollection_CreateNewElementInternal_m6605 (ConfigurationElementCollection_t1413 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::Equals(System.Object)
extern "C" bool ConfigurationElementCollection_Equals_m6606 (ConfigurationElementCollection_t1413 * __this, Object_t * ___compareTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
// System.Int32 System.Configuration.ConfigurationElementCollection::GetHashCode()
extern "C" int32_t ConfigurationElementCollection_GetHashCode_m6607 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationElementCollection::GetEnumerator()
extern "C" Object_t * ConfigurationElementCollection_GetEnumerator_m6608 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementName(System.String)
extern "C" bool ConfigurationElementCollection_IsElementName_m6609 (ConfigurationElementCollection_t1413 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementRemovable(System.Configuration.ConfigurationElement)
extern "C" bool ConfigurationElementCollection_IsElementRemovable_m6610 (ConfigurationElementCollection_t1413 * __this, ConfigurationElement_t1416 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsModified()
extern "C" bool ConfigurationElementCollection_IsModified_m6611 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly()
extern "C" bool ConfigurationElementCollection_IsReadOnly_m6612 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::HasValues()
extern "C" bool ConfigurationElementCollection_HasValues_m6613 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::Reset(System.Configuration.ConfigurationElement)
extern "C" void ConfigurationElementCollection_Reset_m6614 (ConfigurationElementCollection_t1413 * __this, ConfigurationElement_t1416 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::ResetModified()
extern "C" void ConfigurationElementCollection_ResetModified_m6615 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::SetReadOnly()
extern "C" void ConfigurationElementCollection_SetReadOnly_m6616 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C" bool ConfigurationElementCollection_SerializeElement_m6617 (ConfigurationElementCollection_t1413 * __this, XmlWriter_t1056 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C" bool ConfigurationElementCollection_OnDeserializeUnrecognizedElement_m6618 (ConfigurationElementCollection_t1413 * __this, String_t* ___elementName, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C" void ConfigurationElementCollection_Unmerge_m6619 (ConfigurationElementCollection_t1413 * __this, ConfigurationElement_t1416 * ___sourceElement, ConfigurationElement_t1416 * ___parentElement, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
