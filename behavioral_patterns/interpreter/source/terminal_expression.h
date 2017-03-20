#ifndef HELENDP_SOURCE_TERMINAL_EXPRESSION_H_
#define HELENDP_SOURCE_TERMINAL_EXPRESSION_H_
#include "expression.h"

class TerminalExpression : public Expression{
public:
	TerminalExpression(unsigned char value);
	~TerminalExpression();
	int interpreter(Context context);
private:
	int value_;
};
#endif