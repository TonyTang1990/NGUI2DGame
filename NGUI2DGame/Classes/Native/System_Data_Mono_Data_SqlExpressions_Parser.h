#pragma once
#include <stdint.h>
// System.Data.DataRow[]
struct DataRowU5BU5D_t883;
// System.IO.TextWriter
struct TextWriter_t884;
// Mono.Data.SqlExpressions.yydebug.yyDebug
struct yyDebug_t885;
// System.String[]
struct StringU5BU5D_t258;
// System.Int16[]
struct Int16U5BU5D_t886;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Data.SqlExpressions.Parser
struct  Parser_t887  : public Object_t
{
	// System.Boolean Mono.Data.SqlExpressions.Parser::cacheAggregationResults
	bool ___cacheAggregationResults_0;
	// System.Data.DataRow[] Mono.Data.SqlExpressions.Parser::aggregationRows
	DataRowU5BU5D_t883* ___aggregationRows_1;
	// System.IO.TextWriter Mono.Data.SqlExpressions.Parser::ErrorOutput
	TextWriter_t884 * ___ErrorOutput_3;
	// System.Int32 Mono.Data.SqlExpressions.Parser::eof_token
	int32_t ___eof_token_4;
	// Mono.Data.SqlExpressions.yydebug.yyDebug Mono.Data.SqlExpressions.Parser::debug
	Object_t * ___debug_5;
	// System.Int32 Mono.Data.SqlExpressions.Parser::yyExpectingState
	int32_t ___yyExpectingState_8;
	// System.Int32 Mono.Data.SqlExpressions.Parser::yyMax
	int32_t ___yyMax_9;
};
struct Parser_t887_StaticFields{
	// System.Int32 Mono.Data.SqlExpressions.Parser::yacc_verbose_flag
	int32_t ___yacc_verbose_flag_2;
	// System.Int32 Mono.Data.SqlExpressions.Parser::yyFinal
	int32_t ___yyFinal_6;
	// System.String[] Mono.Data.SqlExpressions.Parser::yyNames
	StringU5BU5D_t258* ___yyNames_7;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyLhs
	Int16U5BU5D_t886* ___yyLhs_10;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyLen
	Int16U5BU5D_t886* ___yyLen_11;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyDefRed
	Int16U5BU5D_t886* ___yyDefRed_12;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyDgoto
	Int16U5BU5D_t886* ___yyDgoto_13;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yySindex
	Int16U5BU5D_t886* ___yySindex_14;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyRindex
	Int16U5BU5D_t886* ___yyRindex_15;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyGindex
	Int16U5BU5D_t886* ___yyGindex_16;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyTable
	Int16U5BU5D_t886* ___yyTable_17;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyCheck
	Int16U5BU5D_t886* ___yyCheck_18;
};
