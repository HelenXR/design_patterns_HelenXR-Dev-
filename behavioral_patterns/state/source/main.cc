/*
为了提高跑步成绩很多人会选择间歇跑的方式:
慢跑(6分钟/公里)--->中速跑(5分钟/公里)--->冲刺跑(4分钟/公里)反复循环.
*/
#include <windows.h>
#include "slow_run.h"
#include "middle_run.h"
#include "context.h"

int main(){
	Run *slow = new SlowRun();
	Context *context = new Context(slow);

	context->Training();
	context->Training();
	context->Training();
	context->Training();
	context->Training();
	context->Training();

	//clear
	delete context;
	//slow delete in context->Training method;
	system("Pause");
	return 0;
}