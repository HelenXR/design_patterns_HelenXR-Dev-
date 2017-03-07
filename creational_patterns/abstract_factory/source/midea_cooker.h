#ifndef HELENDP_SOURCE_MIDEA_COOKER_H_
#define HELENDP_SOURCE_MIDEA_COOKER_H_
#include "abstract_cooker.h"

class MideaCooker:public AbstractCooker{
public:
	MideaCooker();
	~MideaCooker();
	void Cooking();
};
#endif

