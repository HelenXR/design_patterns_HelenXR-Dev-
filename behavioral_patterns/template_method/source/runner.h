#ifndef HELENDP_SOURCE_RUNNER_H_
#define HELENDP_SOURCE_RUNNER_H_
#include <string>
using namespace std;

class Runner{
public:
	Runner();
	virtual ~Runner();
	void Exam();
	virtual void Swim();
	virtual void Bike();
	virtual void Run();
};
#endif