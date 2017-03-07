#ifndef HELENDP_SOURCE_LISI_RUNNER_H_
#define HELENDP_SOURCE_LISI_RUNNER_H_
#include <string>
using namespace std;
#include "runner.h"

class LisiRunner : public Runner{
public:
	LisiRunner();
	virtual ~LisiRunner();
	void Exam();
	void Swim();
	void Bike();
	void Run();
private:
	string name_;
};
#endif

