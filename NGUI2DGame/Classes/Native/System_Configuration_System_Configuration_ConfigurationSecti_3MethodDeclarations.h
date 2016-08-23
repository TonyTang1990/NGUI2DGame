#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1440;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1468;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t1404;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t1398;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t1406;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Configuration.ConfigurationSectionGroupCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C" void ConfigurationSectionGroupCollection__ctor_m6721 (ConfigurationSectionGroupCollection_t1440 * __this, Configuration_t1398 * ___config, SectionGroupInfo_t1406 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionGroupCollection::get_Keys()
extern "C" KeysCollection_t1468 * ConfigurationSectionGroupCollection_get_Keys_m6722 (ConfigurationSectionGroupCollection_t1440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionGroupCollection::get_Count()
extern "C" int32_t ConfigurationSectionGroupCollection_get_Count_m6723 (ConfigurationSectionGroupCollection_t1440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::get_Item(System.String)
extern "C" ConfigurationSectionGroup_t1404 * ConfigurationSectionGroupCollection_get_Item_m6724 (ConfigurationSectionGroupCollection_t1440 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionGroupCollection::GetEnumerator()
extern "C" Object_t * ConfigurationSectionGroupCollection_GetEnumerator_m6725 (ConfigurationSectionGroupCollection_t1440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationSectionGroupCollection_GetObjectData_m6726 (ConfigurationSectionGroupCollection_t1440 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
