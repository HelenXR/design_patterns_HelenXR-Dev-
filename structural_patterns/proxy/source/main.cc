/*
这年头跑马拉松真是不容易,不但要辛苦锻炼,参赛还必须抽签,抽到了才能参加比赛.
2016年厦门半马挂了2个,其中有一个就是替跑的....
替跑跟设计模式的代理很像
李四替张三参加厦门马拉松
*/
#include "marathon.h"
#include "runner.h"
#include "runner_proxy.h"
#include <windows.h>
using namespace std;

int main(){
	Marathon *marathon = new Marathon("xiamen");
	Runner *runner = new Runner("张三",marathon);
	RunnerProxy *runner_proxy = new RunnerProxy("李四",marathon);
	runner_proxy->SetRunner(runner);
	runner_proxy->Run();

	//clear
	delete marathon;
	delete runner;
	delete runner_proxy;
	system("Pause");
	return 0;
}