#ifndef HELENDP_SOURCE_HIGH_PHONE_BUILDER_H_
#define HELENDP_SOURCE_HIGH_PHONE_BUILDER_H_
#include "builder.h"
#include "Phone.h"

class HighPhoneBuilder:public Builder{
public:
	HighPhoneBuilder();
	~HighPhoneBuilder();
	void AssembleStepOne();
	void AssembleStepTwo();
	void AssembleStepThree();
	Phone* GetPhone();
private:	
	Phone *phone_;
};
#endif
