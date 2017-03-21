#ifndef HELENDP_SOURCE_CONTEXT_H_
#define HELENDP_SOURCE_CONTEXT_H_
#include "run.h"

class Context{
public:
	Context(Run *run);
	~Context();
	void Training();
	void SetRun(Run *run);
private:
	Run *run_;
	Run *old_run_;//Each process generates an object in the next state, so the old object needs to be deleted
};
#endif

