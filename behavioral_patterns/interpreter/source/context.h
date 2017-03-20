#ifndef HELENDP_SOURCE_CONTEXT_H_
#define HELENDP_SOURCE_CONTEXT_H_
#include <string>
using namespace std;
#define EXPRESSION_MAX_LENGTH	3	

class Context{
public:
	Context(string string);
	~Context();
	char expression_[EXPRESSION_MAX_LENGTH];//byte0:num1,byte1:operator,byte2:num2
};
#endif