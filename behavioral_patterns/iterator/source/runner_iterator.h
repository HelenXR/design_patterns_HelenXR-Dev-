#ifndef HELENDP_SOURCE_RUNNER_ITERATOR_H_
#define HELENDP_SOURCE_RUNNER_ITERATOR_H_
#include "iterator.h"
#include "club.h"

class RunnerIterator : public Iterator{
public:
	RunnerIterator(Club* club);
	~RunnerIterator();

	virtual string First();
	virtual string Next();
	virtual bool IsEnd();
	virtual string GetCurrent();	
private:
	int index_;
	Club *club_;
};
#endif