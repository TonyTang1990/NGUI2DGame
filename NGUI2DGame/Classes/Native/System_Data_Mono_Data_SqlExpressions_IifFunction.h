#pragma once
#include <stdint.h>
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// Mono.Data.SqlExpressions.UnaryExpression
#include "System_Data_Mono_Data_SqlExpressions_UnaryExpression.h"
// Mono.Data.SqlExpressions.IifFunction
struct  IifFunction_t1081  : public UnaryExpression_t1064
{
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IifFunction::trueExpr
	Object_t * ___trueExpr_1;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IifFunction::falseExpr
	Object_t * ___falseExpr_2;
};
