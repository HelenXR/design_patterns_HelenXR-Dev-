#include "operator_nonterminal_expression.h"

OperatorNonTerminalExpression::OperatorNonTerminalExpression(Expression *expression_1,Expression *expression_2){
	expression_1_ = expression_1;
	expression_2_ = expression_2;
}

OperatorNonTerminalExpression::~OperatorNonTerminalExpression(){

}

int OperatorNonTerminalExpression::interpreter(Context context){
	int result;
	switch(context.expression_[1]){
	case '+':
		result = expression_1_->interpreter(context) + expression_2_->interpreter(context);
		break;
	case '-':
		result = expression_1_->interpreter(context) - expression_2_->interpreter(context);
		break;
	case '*':
		result = expression_1_->interpreter(context) * expression_2_->interpreter(context);
		break;
	case '/':
		result = expression_1_->interpreter(context) / expression_2_->interpreter(context);
		break;
	}
	return result;
}