#ifndef HELENDP_SOURCE_HAIER_FACTORY_H_
#define HELENDP_SOURCE_HAIER_FACTORY_H_
#include "abstract_factory.h"
#include "abstract_cooker.h"
#include "abstract_washer.h"

class HaierFactory:public AbstractFactory{
public:
	HaierFactory();
	~HaierFactory();	
	AbstractCooker* CreateCooker();
	AbstractWasher* CreateWasher();
};
#endif
