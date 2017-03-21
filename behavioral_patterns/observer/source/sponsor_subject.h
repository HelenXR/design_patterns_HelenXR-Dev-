#ifndef HELENDP_SOURCE_SPONSOR_SUBJECT_H_
#define HELENDP_SOURCE_SPONSOR_SUBJECT_H_
#include "people.h"
#include <string>
#include <list>
#include "subject.h"
using namespace std;

class SponsorSubject : public Subject{
public:
	SponsorSubject();
	~SponsorSubject();
	void Add(People *people);
	void Remove(People *people);
	void Notify(string message);
	string notify_message_;
};
#endif