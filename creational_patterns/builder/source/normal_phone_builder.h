#ifndef HELENDP_SOURCE_NORMAL_PHONE_BUILDER_H_
#define HELENDP_SOURCE_NORMAL_PHONE_BUILDER_H_
#include "builder.h"
#include "phone.h"

class NormalPhoneBuilder:public Builder{
public:
	NormalPhoneBuilder();
	~NormalPhoneBuilder();
	void AssembleStepOne();
	void AssembleStepTwo();
	void AssembleStepThree();
	Phone* GetPhone();
private:
	Phone* phone_;
};
#endif
