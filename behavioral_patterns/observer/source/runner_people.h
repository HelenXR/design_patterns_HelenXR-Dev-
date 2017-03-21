#ifndef HELENDP_SOURCE_RUNNER_PEOPLE_H_
#define HELENDP_SOURCE_RUNNER_PEOPLE_H_
#include "people.h"
#include "sponsor_subject.h"

class RunnerPeople : public People{
public:
	RunnerPeople(SponsorSubject *sponsor_subject,string name);
	~RunnerPeople();
	void Update();
private:
	SponsorSubject *sponsor_subject_;
};
#endif
