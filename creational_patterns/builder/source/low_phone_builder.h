#ifndef HELENDP_SOURCE_LOW_PHONE_BUILDER_H_
#define HELENDP_SOURCE_LOW_PHONE_BUILDER_H_
#include "builder.h"
#include "phone.h"

class LowPhoneBuilder:public Builder{
public:
	LowPhoneBuilder();
	~LowPhoneBuilder();
	void AssembleStepOne();
	void AssembleStepTwo();
	void AssembleStepThree();
	Phone* GetPhone();
private:
	Phone* phone_;
};
#endif
