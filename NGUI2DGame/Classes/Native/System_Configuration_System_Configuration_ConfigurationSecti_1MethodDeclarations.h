#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t1437;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1468;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t1436;
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

// System.Void System.Configuration.ConfigurationSectionCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C" void ConfigurationSectionCollection__ctor_m6710 (ConfigurationSectionCollection_t1437 * __this, Configuration_t1398 * ___config, SectionGroupInfo_t1406 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionCollection::get_Keys()
extern "C" KeysCollection_t1468 * ConfigurationSectionCollection_get_Keys_m6711 (ConfigurationSectionCollection_t1437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionCollection::get_Count()
extern "C" int32_t ConfigurationSectionCollection_get_Count_m6712 (ConfigurationSectionCollection_t1437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.ConfigurationSectionCollection::get_Item(System.String)
extern "C" ConfigurationSection_t1436 * ConfigurationSectionCollection_get_Item_m6713 (ConfigurationSectionCollection_t1437 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionCollection::GetEnumerator()
extern "C" Object_t * ConfigurationSectionCollection_GetEnumerator_m6714 (ConfigurationSectionCollection_t1437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationSectionCollection_GetObjectData_m6715 (ConfigurationSectionCollection_t1437 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
