#include <windows.h>
#include "caretaker.h"
#include "player.h"
#include <string>
#include <iostream>
using namespace std;

/*
design_patterns:"memento"
Each run a marathon, always dissatisfied with their results, Use this mode, you can return to the state before the game
*/
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