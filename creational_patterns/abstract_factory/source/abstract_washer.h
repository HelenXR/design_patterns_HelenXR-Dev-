#ifndef HELENDP_SOURCE_ABSTRACT_WASHER_H_
#define HELENDP_SOURCE_ABSTRACT_WASHER_H_

class AbstractWasher{
public:
	AbstractWasher();
	virtual ~AbstractWasher();

	virtual void Clothing() = 0;
};
#endif
