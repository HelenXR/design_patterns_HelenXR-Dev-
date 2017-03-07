#ifndef HELENDP_SOURCE_CONTEXT_H_
#define HELENDP_SOURCE_CONTEXT_H_
#include "run.h"

class Context{
public:
	Context(Run *run);
	~Context();
	void Training();
	void SetRun(Run *run);
private:
	Run *run_;
	Run *old_run_;//每次处理都会生成一个下一状态的对象,所以老对象需要删除
};
#endif

