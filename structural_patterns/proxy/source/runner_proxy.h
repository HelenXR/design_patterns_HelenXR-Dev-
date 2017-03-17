#ifndef HELENDP_SOURCE_RUNNER_PROXY_H_
#define HELENDP_SOURCE_RUNNER_PROXY_H_
#include "person.h"
#include "runner.h"

class RunnerProxy : public Person{
public:
	RunnerProxy(string name);
	~RunnerProxy();
	void Run();
	void SetRunner(Runner *runner);
private:
	Runner *runner_;
};
#endif