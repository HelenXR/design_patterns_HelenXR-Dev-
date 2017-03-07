#ifndef HELENDP_SOURCE_FEMALE_PEOPLE_H_
#define HELENDP_SOURCE_FEMALE_PEOPLE_H_
#include "people.h"

class FemalePeople : public People{
public:
	FemalePeople();
	~FemalePeople();
	void Join(Action *action);	
};
#endif
