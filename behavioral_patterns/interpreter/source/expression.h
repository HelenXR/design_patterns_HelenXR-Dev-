#ifndef HELENDP_SOURCE_EXPRESSION_H_
#define HELENDP_SOURCE_EXPRESSION_H_
#include "context.h"

class Expression{
public:
	Expression();
	~Expression();
	virtual int interpreter(Context context) = 0;
};
#endif