/*
Ϊ������ܲ��ɼ��ܶ��˻�ѡ���Ъ�ܵķ�ʽ:
����(6����/����)--->������(5����/����)--->�����(4����/����)����ѭ��.
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