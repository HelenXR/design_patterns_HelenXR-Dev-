#ifndef HELENDP_SOURCE_ABSTRACT_COOKER_H_
#define HELENDP_SOURCE_ABSTRACT_COOKER_H_

class AbstractCooker
{
public:
	AbstractCooker();
	virtual ~AbstractCooker();

	virtual void Cooking() = 0;
};
#endif
