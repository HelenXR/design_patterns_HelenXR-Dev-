#ifndef HELENDP_SOURCE_MIDEA_WASHER_H_
#define HELENDP_SOURCE_MIDEA_WASHER_H_
#include "abstract_washer.h"

class MideaWasher:public AbstractWasher{
public:
	MideaWasher();
	~MideaWasher();
	void Clothing();
};
#endif
