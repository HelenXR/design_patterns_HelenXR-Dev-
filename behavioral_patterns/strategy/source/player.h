#ifndef HELENDP_SOURCE_PLAYER_H_
#define HELENDP_SOURCE_PLAYER_H_
#include "run.h"

class Player{
public:
	Player();
	~Player();
	void SetRun(Run *run);
	void Training();
private:
	Run *run_;
};
#endif