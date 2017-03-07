#ifndef HELENDP_SOURCE_HOURSE_MEDIATOR_H_
#define HELENDP_SOURCE_HOURSE_MEDIATOR_H_
#include "mediator.h"
#include "seller_people.h"
#include "buyer_people.h"

class HourseMediator : public Mediator{
public:
	HourseMediator();
	~HourseMediator();
	void SetBuyer(BuyerPeole *buyer);
	void SetSeller(SellerPeole *seller);
	void Communicate(People *people,string message);
private:
	SellerPeole *seller_people_;
	BuyerPeole  *buyer_people_;
};
#endif