#pragma once
#include <stdint.h>
// System.Data.DataSet
struct DataSet_t346;
// System.Xml.XmlDocument
struct XmlDocument_t978;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.TableMappingCollection
struct TableMappingCollection_t975;
// System.Data.RelationStructureCollection
struct RelationStructureCollection_t979;
// System.Object
#include "mscorlib_System_Object.h"
// System.Data.XmlReadMode
#include "System_Data_System_Data_XmlReadMode.h"
// System.Data.XmlDataInferenceLoader
struct  XmlDataInferenceLoader_t980  : public Object_t
{
	// System.Data.DataSet System.Data.XmlDataInferenceLoader::dataset
	DataSet_t346 * ___dataset_0;
	// System.Xml.XmlDocument System.Data.XmlDataInferenceLoader::document
	XmlDocument_t978 * ___document_1;
	// System.Data.XmlReadMode System.Data.XmlDataInferenceLoader::mode
	int32_t ___mode_2;
	// System.Collections.ArrayList System.Data.XmlDataInferenceLoader::ignoredNamespaces
	ArrayList_t913 * ___ignoredNamespaces_3;
	// System.Data.TableMappingCollection System.Data.XmlDataInferenceLoader::tables
	TableMappingCollection_t975 * ___tables_4;
	// System.Data.RelationStructureCollection System.Data.XmlDataInferenceLoader::relations
	RelationStructureCollection_t979 * ___relations_5;
};
