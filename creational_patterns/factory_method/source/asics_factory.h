#ifndef HELENDP_SOURCE_ASICS_FACTORY_H_
#define HELENDP_SOURCE_ASICS_FACTORY_H_
#include "factory.h"

class AsicsFactory : public Factory{
public:
	AsicsFactory();
	~AsicsFactory();
	
	RunningShoe *CreateRunningShoe();
};
#endif
