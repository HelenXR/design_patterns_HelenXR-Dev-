#ifndef HELENDP_SOURCE_PEOPLE_H_
#define HELENDP_SOURCE_PEOPLE_H_
#include "action.h"

class People{
public:
	People();
	virtual ~People();
	virtual void Join(Action *action) = 0;	
};
#endif