#ifndef HELENDP_SOURCE_SPONSOR_H_
#define HELENDP_SOURCE_SPONSOR_H_
#include "people.h"
#include <string>
#include <list>
using namespace std;

class Sponsor{
public:
	Sponsor();
	~Sponsor();
	void Add(People *people);
	void Remove(People *people);
	void Notify(string message);
private:
	list<People *> people_list_;
};
#endif