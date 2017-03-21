#include "player.h"
#include "slow_run.h"
#include "middle_run.h"
#include "fast_run.h"
#include <windows.h>

/*
design_pattern:"strategy"
Marathon training method:
speed slow ,distance long
speed middle , distance middle
speed fast,distance short
*/
int main(){
	Player *player = new Player();
	Run *slow_run = new SlowRun();
	Run *middle_run = new MiddleRun();
	Run *fast_run = new FastRun();
	player->SetRun(slow_run);
	player->Training();
	player->SetRun(middle_run);
	player->Training();
	player->SetRun(fast_run);
	player->Training();

	//clear
	delete player;
	delete slow_run;
	delete middle_run;
	delete fast_run;
	system("Pause");
	return 0;
}