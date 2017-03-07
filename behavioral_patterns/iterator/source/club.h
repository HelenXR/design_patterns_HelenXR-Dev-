#ifndef HELENDP_SOURCE_CLUB_H_
#define HELENDP_SOURCE_CLUB_H_
#include "iterator.h"
#include <string>
using namespace std;

class Club{
public:
	Club();
	virtual ~Club();
	virtual int GetTotal() = 0;
	virtual void Append(string name) = 0;
	virtual string Gain(int index) = 0; 
	virtual Iterator* CreateIterator() = 0;
};
#endif