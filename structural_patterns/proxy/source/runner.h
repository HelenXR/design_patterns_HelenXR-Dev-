#ifndef HELENDP_SOURCE_RUNNER_H_
#define HELENDP_SOURCE_RUNNER_H_
#include "person.h"
#include "marathon.h"

class Runner : public Person{
public:
	Runner(string name,Marathon *marathon);
	~Runner();
	void Run();
private:
	Marathon *marathon_;
};
#endif