#ifndef HELENDP_SOURCE_HAIER_COOKER_H_
#define HELENDP_SOURCE_HAIER_COOKER_H_
#include "abstract_cooker.h"

class HaierCooker:public AbstractCooker{
public:
	HaierCooker();
	~HaierCooker();
	void Cooking();
};
#endif
