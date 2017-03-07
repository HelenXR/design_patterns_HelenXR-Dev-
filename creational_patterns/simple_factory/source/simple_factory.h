#ifndef HELENDP_SOURCE_SIMPLE_FACTORY_H_
#define HELENDP_SOURCE_SIMPLE_FACTORY_H_
#include "watch.h"

#define APPLE_TYPE	0
#define HUAWEI_TYPE	1
class SimpleFactory{
public:
	SimpleFactory();
	~SimpleFactory();

	Watch* CreateWatch(unsigned char type);
};
#endif