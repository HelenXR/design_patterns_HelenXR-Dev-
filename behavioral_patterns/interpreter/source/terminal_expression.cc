#include "terminal_expression.h"

TerminalExpression::TerminalExpression(unsigned char value){
	value_ = value - '0';
}

TerminalExpression::~ TerminalExpression(){

}

int TerminalExpression::interpreter(Context context){
	return value_;
}