#ifndef HELENDP_SOURCE_MALE_PEOPLE_H_
#define HELENDP_SOURCE_MALE_PEOPLE_H_
#include "people.h"

class MalePeople : public People{
public:
	MalePeople();
	~MalePeople();
	void Join(Action *action);	
};
#endif
