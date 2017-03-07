#ifndef HELENDP_SOURCE_HAIER_WASHER_H_
#define HELENDP_SOURCE_HAIER_WASHER_H_
#include "abstract_washer.h"

class HaierWasher:public AbstractWasher{
public:
	HaierWasher();
	~HaierWasher();
	void Clothing();
};
#endif
