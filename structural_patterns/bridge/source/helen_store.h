#ifndef HELENDP_SOURCE_HELEN_STORE_H_
#define HELENDP_SOURCE_HELEN_STORE_H_
#include "store.h"

class HelenStore : public Store{
public:
	HelenStore(Shoe *shoe);
	~HelenStore();
	void Selling();
};
#endif