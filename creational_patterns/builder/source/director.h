#ifndef HELENDP_SOURCE_DIRECTOR_H_
#define HELENDP_SOURCE_DIRECTOR_H_
#include "phone.h"
#include "builder.h"

class Director{
public:
	Director();
	~Director();
	Phone *AssemblePhone();
	void SetBuilder(Builder *builder);
private:
	Builder *builder_;
};
#endif
