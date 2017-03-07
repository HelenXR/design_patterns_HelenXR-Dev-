/*
����������Ҫ����,��������������,�����̵�Ȼ���Ǻ�ʮ��,������Ǯ,�ͻ�����Ӧ������.
����:�����ɿ쿪ʼǰ,������Ҫ�����Ÿ�һЩ������Լ���Ʒ��.
��һ������:����
�ڶ�������:����
����������:�����·�,�ڳɼ�����,��������.
*/
#include <windows.h>
#include "club_manager.h"
#include "sing_command.h"
#include "dance_command.h"
#include "chicken_command.h"
#include <iostream>
using namespace std;

int main(){
	RunnerClub *runner_club = new RunnerClub();
	Command *sing_command = new SingCommand(runner_club);
	Command *dance_command = new DanceCommand(runner_club);
	Command *chicken_command = new ChickenCommand(runner_club);
	ClubManager *club_manager = new ClubManager();
	club_manager->AddCommand(sing_command);
	club_manager->AddCommand(dance_command);
	club_manager->AddCommand(chicken_command);
	//����һ����������һ������ֳ�̫����,��绰�����ֲ�������˵�ѳ���ȡ��
	club_manager->DeleteCommand(sing_command);
	club_manager->Action();

	//clear
	delete runner_club;
	delete sing_command;
	delete dance_command;
	delete chicken_command;
	delete club_manager;
	system("Pause");
	return 0;
}