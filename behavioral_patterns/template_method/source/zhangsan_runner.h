#ifndef HELENDP_SOURCE_ZHANGSAN_RUNNER_H_
#define HELENDP_SOURCE_ZHANGSAN_RUNNER_H_
#include <string>
using namespace std;
#include "runner.h"

class ZhangsanRunner : public Runner{
public:
	ZhangsanRunner();
	virtual ~ZhangsanRunner();
	void Exam();
	void Swim();
	void Bike();
	void Run();
private:
	string name_;
};
#endif

