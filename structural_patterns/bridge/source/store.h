#ifndef HELENDP_SOURCE_STORE_H_
#define HELENDP_SOURCE_STORE_H_
#include "shoe.h"

class Store{
public:
	Shoe* shoe_;
public:
	Store(Shoe *shoe);
	virtual ~Store();

	Shoe* GetShoe();
	virtual void Selling();
};
#endif