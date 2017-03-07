/*
跑团运作需要经费,经费来自赞助商,赞助商当然不是红十字,给了你钱,就会有相应的请求.
比如:马拉松快开始前,赞助商要求跑团搞一些活动宣传自己的品牌.
第一个命令:唱歌
第二个命令:跳舞
第三个命令:穿红衣服,摆成鸡造型,鸡年哄哄火火.
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
	//过了一会赞助商想一想觉得现场太吵了,打电话给俱乐部管理者说把唱歌取消
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