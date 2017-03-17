#ifndef HELENDP_SOURCE_COLONEL_HANDLER_H_
#define HELENDP_SOURCE_COLONEL_HANDLER_H_
#include "handler.h"

class ColonelHandler : public Handler{
public:
	ColonelHandler(string name);
	~ColonelHandler();
	virtual void Accept(Girl *girl);
};
#endif
