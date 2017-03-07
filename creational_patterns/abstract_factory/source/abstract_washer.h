#ifndef HELENDP_SOURCE_ABSTRACT_WASHER_H_
#define HELENDP_SOURCE_ABSTRACT_WASHER_H_

class AbstractWasher{
public:
	AbstractWasher();
	virtual ~AbstractWasher();
	//洗衣机的主要功能:洗衣机
	virtual void Clothing() = 0;
};
#endif
