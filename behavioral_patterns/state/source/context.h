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
	Run *old_run_;//ÿ�δ���������һ����һ״̬�Ķ���,�����϶�����Ҫɾ��
};
#endif

