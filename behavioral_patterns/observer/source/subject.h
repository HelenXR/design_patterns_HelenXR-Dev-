#ifndef HELENDP_SOURCE_SUBJECT_H_
#define HELENDP_SOURCE_SUBJECT_H_
#include "people.h"
#include <list>

class Subject{
public:
	Subject();
	~Subject();
	virtual void Add(People *people) = 0;
	virtual void Remove(People *people) = 0;
	virtual void Notify(string message) = 0;
protected:	
	list<People *> people_list_;
};
#endif