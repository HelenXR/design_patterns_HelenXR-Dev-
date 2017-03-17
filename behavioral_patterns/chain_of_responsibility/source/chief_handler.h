#ifndef HELENDP_SOURCE_CHIEF_HANDLER_H_
#define HELENDP_SOURCE_CHIEF_HANDLER_H_
#include "handler.h"

class ChiefHandler : public Handler{
public:
	ChiefHandler(string name);
	~ChiefHandler();
	virtual void Accept(Girl *girl);
};
#endif
