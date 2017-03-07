#ifndef HELENDP_SOURCE_HANDLER_H_
#define HELENDP_SOURCE_HANDLER_H_
#include <string>
#include "girl.h"
using namespace std;

class Handler{
public:
	Handler();
	virtual ~Handler();
	virtual void SetHandler(Handler *handler) = 0;
	virtual void Accept(Girl *girl) = 0;
protected:	
	string name_;
	Handler *handler_;
};
#endif