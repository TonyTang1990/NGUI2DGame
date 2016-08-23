#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t1406;
// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t1464;
// System.Configuration.ConfigInfo
struct ConfigInfo_t1402;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t1398;
// System.Xml.XmlReader
struct XmlReader_t843;

// System.Void System.Configuration.SectionGroupInfo::.ctor()
extern "C" void SectionGroupInfo__ctor_m6836 (SectionGroupInfo_t1406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::.cctor()
extern "C" void SectionGroupInfo__cctor_m6837 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::AddChild(System.Configuration.ConfigInfo)
extern "C" void SectionGroupInfo_AddChild_m6838 (SectionGroupInfo_t1406 * __this, ConfigInfo_t1402 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::Clear()
extern "C" void SectionGroupInfo_Clear_m6839 (SectionGroupInfo_t1406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.SectionGroupInfo::HasChild(System.String)
extern "C" bool SectionGroupInfo_HasChild_m6840 (SectionGroupInfo_t1406 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::RemoveChild(System.String)
extern "C" void SectionGroupInfo_RemoveChild_m6841 (SectionGroupInfo_t1406 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Sections()
extern "C" ConfigInfoCollection_t1464 * SectionGroupInfo_get_Sections_m6842 (SectionGroupInfo_t1406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Groups()
extern "C" ConfigInfoCollection_t1464 * SectionGroupInfo_get_Groups_m6843 (SectionGroupInfo_t1406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern "C" void SectionGroupInfo_ReadConfig_m6844 (SectionGroupInfo_t1406 * __this, Configuration_t1398 * ___cfg, String_t* ___streamName, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadRemoveSection(System.Xml.XmlReader)
extern "C" void SectionGroupInfo_ReadRemoveSection_m6845 (SectionGroupInfo_t1406 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadRootData(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean)
extern "C" void SectionGroupInfo_ReadRootData_m6846 (SectionGroupInfo_t1406 * __this, XmlReader_t843 * ___reader, Configuration_t1398 * ___config, bool ___overrideAllowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C" void SectionGroupInfo_ReadData_m6847 (SectionGroupInfo_t1406 * __this, Configuration_t1398 * ___config, XmlReader_t843 * ___reader, bool ___overrideAllowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadContent(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean,System.Boolean)
extern "C" void SectionGroupInfo_ReadContent_m6848 (SectionGroupInfo_t1406 * __this, XmlReader_t843 * ___reader, Configuration_t1398 * ___config, bool ___overrideAllowed, bool ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfo System.Configuration.SectionGroupInfo::GetConfigInfo(System.Xml.XmlReader,System.Configuration.SectionGroupInfo)
extern "C" ConfigInfo_t1402 * SectionGroupInfo_GetConfigInfo_m6849 (SectionGroupInfo_t1406 * __this, XmlReader_t843 * ___reader, SectionGroupInfo_t1406 * ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::Merge(System.Configuration.ConfigInfo)
extern "C" void SectionGroupInfo_Merge_m6850 (SectionGroupInfo_t1406 * __this, ConfigInfo_t1402 * ___newData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
