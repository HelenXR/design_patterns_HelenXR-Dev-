/*
马拉松训练方法:
耐力跑(LSD)
排酸跑
间歇跑

第一次,耐力跑,一般跑的速度中等,距离很远,乳酸堆积较多,第二次最好安排一次排酸跑,即速度慢,距离短,第三次,身体恢复后,进行间歇跑,提高PB.
*/
#include "player.h"
#include "slow_run.h"
#include "middle_run.h"
#include "fast_run.h"
#include <windows.h>

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