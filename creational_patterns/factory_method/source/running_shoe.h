#ifndef HELENDP_SOURCE_RUNNING_SHOE_H_
#define HELENDP_SOURCE_RUNNING_SHOE_H_

class RunningShoe
{
public:
	RunningShoe();
	virtual ~RunningShoe();

	virtual void run() = 0;
};
#endif
