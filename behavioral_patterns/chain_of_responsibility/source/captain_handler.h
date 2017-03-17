#ifndef HELENDP_SOURCE_CAPTAIN_HANDLER_H_
#define HELENDP_SOURCE_CAPTAIN_HANDLER_H_
#include "handler.h"

class CaptainHandler : public Handler{
public:
	CaptainHandler(string name);
	~CaptainHandler();
	virtual void Accept(Girl *girl);
};
#endif