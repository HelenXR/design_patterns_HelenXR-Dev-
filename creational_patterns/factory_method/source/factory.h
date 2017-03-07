#ifndef HELENDP_SOURCE_FACTORY_H_
#define HELENDP_SOURCE_FACTORY_H_
#include "running_shoe.h"

class Factory{
public:
	Factory();
	virtual ~Factory();
	
	virtual RunningShoe *CreateRunningShoe() = 0;
};
#endif
