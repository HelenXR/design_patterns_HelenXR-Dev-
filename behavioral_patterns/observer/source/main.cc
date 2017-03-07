/*
马拉松比赛时,主办方需要根据天气情况给参与者发送一些信息,如果下雨了,运动员和志愿者就要穿一次性雨衣,如果没下雨,大家就照常.
*/
#include <windows.h>
#include "runner_people.h"
#include "volunteer_people.h"
#include "sponsor.h"

int main(){
	Sponsor *sponsor = new Sponsor();
	RunnerPeople *zhang_san = new RunnerPeople("张三");
	RunnerPeople *li_si = new RunnerPeople("李四");
	VolunteerPeople *volunteer = new VolunteerPeople("志愿者");

	sponsor->Add(zhang_san);
	sponsor->Add(li_si);
	sponsor->Add(volunteer);

	sponsor->Notify("下雨了,穿雨衣");
	/*
	sponsor->Notify("没下雨,照常进行");
	*/
	//clear
	delete sponsor;
	delete zhang_san;
	delete li_si;
	delete volunteer;
	system("Pause");
	return 0;
	}