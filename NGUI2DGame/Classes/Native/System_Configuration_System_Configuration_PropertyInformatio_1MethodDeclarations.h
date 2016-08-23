#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t1447;
// System.Configuration.PropertyInformation
struct PropertyInformation_t1446;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Configuration.PropertyInformationCollection::.ctor()
extern "C" void PropertyInformationCollection__ctor_m6801 (PropertyInformationCollection_t1447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformation System.Configuration.PropertyInformationCollection::get_Item(System.String)
extern "C" PropertyInformation_t1446 * PropertyInformationCollection_get_Item_m6802 (PropertyInformationCollection_t1447 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.PropertyInformationCollection::GetEnumerator()
extern "C" Object_t * PropertyInformationCollection_GetEnumerator_m6803 (PropertyInformationCollection_t1447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::Add(System.Configuration.PropertyInformation)
extern "C" void PropertyInformationCollection_Add_m6804 (PropertyInformationCollection_t1447 * __this, PropertyInformation_t1446 * ___pi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void PropertyInformationCollection_GetObjectData_m6805 (PropertyInformationCollection_t1447 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
