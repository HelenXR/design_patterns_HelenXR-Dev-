#ifndef HELENDP_SOURCE_PLAYER_H_
#define HELENDP_SOURCE_PLAYER_H_
#include "memento.h"

class Player{
public:
	Player(string date);
	~Player();
	void CreateMemento();
	void Recovery(Memento *memento);
	void SetDate(string date);
	string GetDate();
private:
	string date_;
	Memento *memento_;
};
#endif