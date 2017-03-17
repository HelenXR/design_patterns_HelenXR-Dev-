#ifndef HELENDP_SOURCE_RUNNER_H_
#define HELENDP_SOURCE_RUNNER_H_
#include "person.h"

class Runner : public Person{
public:
	Runner(string name);
	~Runner();
	void Run();
};
#endif