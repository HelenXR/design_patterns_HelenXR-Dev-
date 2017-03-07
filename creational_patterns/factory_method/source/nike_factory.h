#ifndef HELENDP_SOURCE_NIKE_FACTORY_H_
#define HELENDP_SOURCE_NIKE_FACTORY_H_
#include "factory.h"

class NikeFactory : public Factory{
public:
	NikeFactory();
	~NikeFactory();
	
	RunningShoe *CreateRunningShoe();
};
#endif
