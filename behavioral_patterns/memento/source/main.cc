/*
每个跑完马拉松的人,对自己的成绩总是不满意的,5小时跑完的人,总是希望跑前如果多做准备,是可以跑进4小时30分的,4小时30分的人总是希望回到赛前多训练,跑进4小时的.
利用这个模式,就可以回到赛前的状态.
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