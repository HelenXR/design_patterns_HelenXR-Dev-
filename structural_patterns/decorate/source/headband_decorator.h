#ifndef HELENDP_SOURCE_HEADBAND_DECORATOR_H_
#define HELENDP_SOURCE_HEADBAND_DECORATOR_H_
#include "decorator.h"

class HeadbandDecorator : public Decorator{
public:
	HeadbandDecorator(Runner *runner);
	~HeadbandDecorator();
	void Show();
private:
	void HeadbandShow();
};
#endif