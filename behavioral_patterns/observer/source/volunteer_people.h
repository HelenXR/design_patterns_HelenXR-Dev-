#ifndef HELENDP_SOURCE_VOLUNTEER_PEOPLE_H_
#define HELENDP_SOURCE_VOLUNTEER_PEOPLE_H_
#include "people.h"

class VolunteerPeople : public People{
public:
	VolunteerPeople(string name);
	~VolunteerPeople();
	void Update(string message);
};
#endif

