/*
以跑步俱乐部为例.
跑步俱乐部对外提供组织活动的接口.
内部实现一个组织活动包括:宣传系统,报名系统,活动系统,财务系统.
*/
#include <windows.h>
#include "runner_club.h"
int main(){
	RunnerClub *runner_club = new RunnerClub();
	runner_club->RunnerGroupActivity();
	system("Pause");
	return 0;
}