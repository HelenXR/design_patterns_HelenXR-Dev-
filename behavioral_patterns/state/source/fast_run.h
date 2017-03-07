#ifndef HELENDP_SOURCE_FAST_RUN_H_
#define HELENDP_SOURCE_FAST_RUN_H_
#include "run.h"
#include "context.h"

class FastRun : public Run{
public:
	FastRun();
	~FastRun();
	void Handle(Context *context);
};
#endif        

