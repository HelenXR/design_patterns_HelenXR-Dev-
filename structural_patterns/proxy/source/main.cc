/*
����ͷ�����������ǲ�����,����Ҫ�������,�����������ǩ,�鵽�˲��ܲμӱ���.
2016�����Ű������2��,������һ���������ܵ�....
���ܸ����ģʽ�Ĵ������
�����������μ�����������
*/
#include "marathon.h"
#include "runner.h"
#include "runner_proxy.h"
#include <windows.h>
using namespace std;

int main(){
	Marathon *marathon = new Marathon("xiamen");
	Runner *runner = new Runner("����",marathon);
	RunnerProxy *runner_proxy = new RunnerProxy("����",marathon);
	runner_proxy->SetRunner(runner);
	runner_proxy->Run();

	//clear
	delete marathon;
	delete runner;
	delete runner_proxy;
	system("Pause");
	return 0;
}