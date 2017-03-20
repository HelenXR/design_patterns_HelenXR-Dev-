#ifndef HELENDP_SOURCE_RUNNER_ITERATOR_H_
#define HELENDP_SOURCE_RUNNER_ITERATOR_H_
#include "iterator.h"
#include "club.h"

class RunnerIterator : public Iterator{
public:
	RunnerIterator(Club* club);
	~RunnerIterator();

	string First();
	string Next();
	bool IsEnd();
	string GetCurrent();	
private:
	int index_;
	Club *club_;
};
#endif