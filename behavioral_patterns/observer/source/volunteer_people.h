#ifndef HELENDP_SOURCE_VOLUNTEER_PEOPLE_H_
#define HELENDP_SOURCE_VOLUNTEER_PEOPLE_H_
#include "people.h"
#include "sponsor_subject.h"


class VolunteerPeople : public People{
public:
	VolunteerPeople(SponsorSubject *sponsor_subject,string name);
	~VolunteerPeople();
	void Update();
private:
	SponsorSubject *sponsor_subject_;
};
#endif
