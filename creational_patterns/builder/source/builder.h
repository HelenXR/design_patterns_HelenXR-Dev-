#ifndef HELENDP_SOURCE_BUILDER_H_
#define HELENDP_SOURCE_BUILDER_H_
#include <string>
#include "phone.h"
using namespace std;

class Builder{
public:
	Builder();
	virtual ~Builder();
	virtual void AssembleStepOne() = 0;
	virtual void AssembleStepTwo() = 0;
	virtual void AssembleStepThree() = 0;
	virtual Phone* GetPhone() = 0;
};
#endif
