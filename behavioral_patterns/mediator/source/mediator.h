#ifndef HELENDP_SOURCE_MEDIATOR_H_
#define HELENDP_SOURCE_MEDIATOR_H_
#include <string>
using namespace std;
#include "people.h"

class Mediator{
public:
	Mediator();
	~Mediator();
	virtual void Communicate(People *people,string message) = 0;
};
#endif