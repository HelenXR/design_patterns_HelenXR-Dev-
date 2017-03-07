#ifndef HELENDP_SOURCE_RUNNER_PEOPLE_H_
#define HELENDP_SOURCE_RUNNER_PEOPLE_H_
#include "people.h"

class RunnerPeople : public People{
public:
	RunnerPeople(string name);
	~RunnerPeople();
	void Update(string message);
};
#endif
