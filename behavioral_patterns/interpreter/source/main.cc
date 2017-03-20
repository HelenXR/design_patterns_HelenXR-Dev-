#include <windows.h>
#include "context.h"
#include "terminal_expression.h"
#include "operator_nonterminal_expression.h"

/*
design_pattern:"interpreter"
Two digit Four arithmetic operations.
*/
int main(){
	string express = "8*4";//8+4,8-4,8*4,8/4
	Context context = Context(express);
	Expression *expression_num_1 = new TerminalExpression(context.expression_[0]);
	Expression *expression_num_2 = new TerminalExpression(context.expression_[2]);
	Expression *expression_operator = new OperatorNonTerminalExpression(expression_num_1,expression_num_2);
	
	printf("%s=%d\n",express.c_str(),expression_operator->interpreter(context));
	//clear
	delete expression_num_1;
	delete expression_num_2;
	delete expression_operator;
	system("Pause");
	return 0;
}
