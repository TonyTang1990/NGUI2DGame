#pragma once
#include <stdint.h>
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Data.DataTable[]
struct DataTableU5BU5D_t859;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t1057;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t897;
// System.Globalization.CultureInfo
struct CultureInfo_t693;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Object
#include "mscorlib_System_Object.h"
// System.Data.XmlSchemaWriter
struct  XmlSchemaWriter_t1058  : public Object_t
{
	// System.Xml.XmlWriter System.Data.XmlSchemaWriter::w
	XmlWriter_t1056 * ___w_0;
	// System.Data.DataTable[] System.Data.XmlSchemaWriter::tables
	DataTableU5BU5D_t859* ___tables_1;
	// System.Data.DataRelation[] System.Data.XmlSchemaWriter::relations
	DataRelationU5BU5D_t1057* ___relations_2;
	// System.String System.Data.XmlSchemaWriter::mainDataTable
	String_t* ___mainDataTable_3;
	// System.String System.Data.XmlSchemaWriter::dataSetName
	String_t* ___dataSetName_4;
	// System.String System.Data.XmlSchemaWriter::dataSetNamespace
	String_t* ___dataSetNamespace_5;
	// System.Data.PropertyCollection System.Data.XmlSchemaWriter::dataSetProperties
	PropertyCollection_t897 * ___dataSetProperties_6;
	// System.Globalization.CultureInfo System.Data.XmlSchemaWriter::dataSetLocale
	CultureInfo_t693 * ___dataSetLocale_7;
	// System.Collections.ArrayList System.Data.XmlSchemaWriter::globalTypeTables
	ArrayList_t913 * ___globalTypeTables_8;
	// System.Collections.Hashtable System.Data.XmlSchemaWriter::additionalNamespaces
	Hashtable_t915 * ___additionalNamespaces_9;
	// System.Collections.ArrayList System.Data.XmlSchemaWriter::annotation
	ArrayList_t913 * ___annotation_10;
};
