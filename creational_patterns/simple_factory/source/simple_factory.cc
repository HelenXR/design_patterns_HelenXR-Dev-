#include "simple_factory.h"
#include "huawei_watch.h"
#include "apple_watch.h"
#include <stdio.h>

SimpleFactory::SimpleFactory(){

}

SimpleFactory::~SimpleFactory(){

}

Watch* SimpleFactory::CreateWatch(unsigned char type){
	if (APPLE_TYPE == type)
		return new AppleWatch();
	else if (HUAWEI_TYPE == type)
		return new HuaweiWatch();
	else
		return NULL;
}