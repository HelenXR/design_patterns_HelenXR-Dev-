#ifndef HELENDP_SOURCE_SIMPLE_FACTORY_H_
#define HELENDP_SOURCE_SIMPLE_FACTORY_H_
#include "watch.h"

typedef enum{
	APPLE_TYPE = 0,
	HUAWEI_TYPE	
}WatchType;

class SimpleFactory{
public:
	SimpleFactory();
	~SimpleFactory();
	Watch* CreateWatch(WatchType type);
};
#endif