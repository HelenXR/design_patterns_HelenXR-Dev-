#ifndef HELENDP_SOURCE_OBJECT_STRUCTURE_H_
#define HELENDP_SOURCE_OBJECT_STRUCTURE_H_
#include "people.h"
#include "action.h"
#include <list>
using namespace std;

class ObjectStructure{
public:
	ObjectStructure();
	~ObjectStructure();
	void Add(People *people);
	void Remove(People *people);
	void FeedBack(Action *action);
private:
	list<People *> people_list_;
};
#endif