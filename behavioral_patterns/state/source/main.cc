#include <windows.h>
#include "slow_run.h"
#include "middle_run.h"
#include "context.h"

/*
design_pattern:"state"
In order to improve the performance of running a lot of people will choose intermittent running:
slow speed run(6km/minute)--->middle speed run(5km/minute)--->fast speed run(4km/minute)
--->slow speed run(6km/minute)--->middle speed run(5km/minute)--->fast speed run(4km/minute).
*/
int main(){
	Run *slow = new SlowRun();
	Context *context = new Context(slow);

	context->Training();
	context->Training();
	context->Training();
	context->Training();
	context->Training();
	context->Training();

	//clear,need to delete object which created in last Handle method.
	delete context;
	system("Pause");
	return 0;
}