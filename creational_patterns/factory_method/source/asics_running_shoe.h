#ifndef HELENDP_SOURCE_ASICS_RUNNING_SHOE_H_
#define HELENDP_SOURCE_ASICS_RUNNING_SHOE_H_
#include "running_shoe.h"

class AsicsRunningShoe : public RunningShoe
{
public:
	AsicsRunningShoe();
	~AsicsRunningShoe();
	
	void run();
};
#endif
