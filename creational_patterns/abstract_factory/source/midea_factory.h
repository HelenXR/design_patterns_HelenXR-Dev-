#ifndef HELENDP_SOURCE_MIDEA_FACTORY_H_
#define HELENDP_SOURCE_MIDEA_FACTORY_H_
#include "abstract_factory.h"
#include "abstract_cooker.h"
#include "abstract_washer.h"

class MideaFactory:public AbstractFactory{
public:

	MideaFactory();
	~MideaFactory();	
	AbstractCooker* CreateCooker();
	AbstractWasher* CreateWasher();
};
#endif
