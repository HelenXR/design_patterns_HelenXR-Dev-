#ifndef HELENDP_SOURCE_CUFF_DECORATOR_H_
#define HELENDP_SOURCE_CUFF_DECORATOR_H_
#include "decorator.h"

class CuffDecorator : public Decorator{
public:
	CuffDecorator(Runner *runner);
	~CuffDecorator();
	void Show();
private:
	void CuffShow();
};
#endif

