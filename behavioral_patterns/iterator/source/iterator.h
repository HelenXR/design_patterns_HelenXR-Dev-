#ifndef HELENDP_SOURCE_ITERATOR_H_
#define HELENDP_SOURCE_ITERATOR_H_
#include <string>
using namespace std;

class Iterator{
public:
	Iterator();
	virtual ~Iterator();
	virtual string First() = 0;
	virtual string Next() = 0;
	virtual bool IsEnd() = 0;
	virtual string GetCurrent() = 0;
};
#endif