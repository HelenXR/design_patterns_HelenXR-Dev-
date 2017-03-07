#ifndef HELENDP_SOURCE_ABSTRACT_FACTORY_H_
#define HELENDP_SOURCE_ABSTRACT_FACTORY_H_
#include "abstract_cooker.h"
#include "abstract_washer.h"

class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();
	virtual AbstractCooker* CreateCooker() = 0;
	virtual AbstractWasher* CreateWasher() = 0;
};
#endif
