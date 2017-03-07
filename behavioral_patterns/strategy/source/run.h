#ifndef HELENDP_SOURCE_RUN_H_
#define HELENDP_SOURCE_RUN_H_

class Run{
public:
	Run();
	virtual ~Run();

	virtual void Running() = 0;
};
#endif