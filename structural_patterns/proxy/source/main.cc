#include "runner.h"
#include "runner_proxy.h"
#include <windows.h>
using namespace std;

/*
design_pattern:"proxy"
December 10, 2016, Xiamen marathon sudden death occurs, one of the players for the run
real runner:lin
proxy runner:wu
*/
int main(){
	Runner *runner = new Runner("lin");
	RunnerProxy *runner_proxy = new RunnerProxy("wu");
	runner_proxy->SetRunner(runner);
	runner_proxy->Run();

	//clear
	delete runner;
	delete runner_proxy;
	system("Pause");
	return 0;
}