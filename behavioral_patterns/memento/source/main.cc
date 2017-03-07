/*
ÿ�����������ɵ���,���Լ��ĳɼ����ǲ������,5Сʱ�������,����ϣ����ǰ�������׼��,�ǿ����ܽ�4Сʱ30�ֵ�,4Сʱ30�ֵ�������ϣ���ص���ǰ��ѵ��,�ܽ�4Сʱ��.
�������ģʽ,�Ϳ��Իص���ǰ��״̬.
*/
#include <windows.h>
#include "caretaker.h"
#include "player.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
	Caretaker *caretaker = new Caretaker();
	Player *player = new Player("before the game");
	Memento *memento = new Memento(player->GetDate());

	cout << player->GetDate() << endl;
	caretaker->SetMemento(memento);
	player->SetDate("after the game");
	cout << player->GetDate() << endl;
	player->Recovery(caretaker->GetMemento());
	cout << player->GetDate() << endl;

	//clear
	delete caretaker;
	delete player;
	delete memento;
	system("Pause");
	return 0;
	}