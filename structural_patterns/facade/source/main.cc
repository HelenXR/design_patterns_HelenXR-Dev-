#include <windows.h>
#include "runner_club.h"

/*
design_pattern:"facade"
Runner club two activitys:
recruit runner (Propaganda System, Human Resources System)
Long-distance race(Public Relation System, organizational Systems)
*/
int main(){
	RunnerClub *runner_club = new RunnerClub();
	runner_club->RecruitRunner();
	runner_club->LongDistanceRace();

	//clear
	delete runner_club;
	system("Pause");
	return 0;
}