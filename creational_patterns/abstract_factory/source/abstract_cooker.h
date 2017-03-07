#ifndef HELENDP_SOURCE_ABSTRACT_COOKER_H_
#define HELENDP_SOURCE_ABSTRACT_COOKER_H_

class AbstractCooker
{
public:
	AbstractCooker();
	virtual ~AbstractCooker();
	//电饭煲的主要功能:煮饭
	virtual void Cooking() = 0;
};
#endif
