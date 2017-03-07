#ifndef HELENDP_SOURCE_SELLER_PEOPLE_H_
#define HELENDP_SOURCE_SELLER_PEOPLE_H_
#include "people.h"

class SellerPeole : public People{
public:
	SellerPeole(Mediator* mediator_);
	~SellerPeole();

	void Say(string message);
	void ReceiveMessage(string message);
};
#endif
