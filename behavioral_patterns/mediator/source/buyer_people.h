#ifndef HELENDP_SOURCE_BUYER_PEOPLE_H_
#define HELENDP_SOURCE_BUYER_PEOPLE_H_
#include "people.h"

class BuyerPeole : public People{
public:
	BuyerPeole(Mediator* mediator_);
	~BuyerPeole();

	void Say(string message);
	void ReceiveMessage(string message);
};
#endif

