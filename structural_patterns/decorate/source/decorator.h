#ifndef HELENDP_SOURCE_DECORATOR_H_
#define HELENDP_SOURCE_DECORATOR_H_
#include "runner.h"

class Decorator : public Runner{
public:
	Decorator(Runner *runner);
	~Decorator();
	void Show();
private:
	Runner *runner_;
};
#endif