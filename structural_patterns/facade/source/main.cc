/*
���ܲ����ֲ�Ϊ��.
�ܲ����ֲ������ṩ��֯��Ľӿ�.
�ڲ�ʵ��һ����֯�����:����ϵͳ,����ϵͳ,�ϵͳ,����ϵͳ.
*/
#include <windows.h>
#include "runner_club.h"
int main(){
	RunnerClub *runner_club = new RunnerClub();
	runner_club->RunnerGroupActivity();
	system("Pause");
	return 0;
}