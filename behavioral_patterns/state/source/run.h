#ifndef HELENDP_SOURCE_RUN_H_
#define HELENDP_SOURCE_RUN_H_

class Context;
class Run{
public:
	Run();
	virtual ~Run();

	virtual void Handle(Context *context);
};
#endif