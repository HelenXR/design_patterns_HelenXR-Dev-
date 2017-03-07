#ifndef HELENDP_SOURCE_SLOW_RUN_H_
#define HELENDP_SOURCE_SLOW_RUN_H_
#include "run.h"

class SlowRun : public Run{
public:
	SlowRun();
	~SlowRun();

	void Running();
};
#endif

