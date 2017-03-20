#ifndef HELENDP_SOURCE_OPERATOR_NONTERMINAL_EXPRESSION_H_
#define HELENDP_SOURCE_OPERATOR_NONTERMINAL_EXPRESSION_H_
#include "expression.h"

class OperatorNonTerminalExpression : public Expression{
public:
	OperatorNonTerminalExpression(Expression *expression_1,Expression *expression_2);
	~OperatorNonTerminalExpression();
	int interpreter(Context context);
private:
	unsigned char operator_;
	Expression *expression_1_;
	Expression *expression_2_;	
};
#endif
