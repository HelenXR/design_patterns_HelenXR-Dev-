#ifndef HELENDP_SOURCE_MIDDLE_RUN_H_
#define HELENDP_SOURCE_MIDDLE_RUN_H_
#include "run.h"
#include "context.h"

class MiddleRun : public Run{
public:
	MiddleRun();
	~MiddleRun();
	void Handle(Context *context);
};
#endif                                                                                                                                                     
