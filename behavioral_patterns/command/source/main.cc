#include <windows.h>
#include "club_manager.h"
#include "sing_command.h"
#include "dance_command.h"
#include "chicken_command.h"
#include <iostream>
using namespace std;

/*
design_pattern:"command"
Running club needs funding, funding from sponsors, of course, 
the sponsor is not the volunteer, to give you the money, 
there will be a corresponding request,These requests will be handed out by the Club manager.
request contains : sing,dance,chicken joy.
*/
int main(){
	RunnerClub *runner_club = new RunnerClub();
	Command *sing_command = new SingCommand(runner_club);
	Command *dance_command = new DanceCommand(runner_club);
	Command *chicken_command = new ChickenCommand(runner_club);
	ClubManager *club_manager = new ClubManager();
	club_manager->AddCommand(sing_command);
	club_manager->AddCommand(dance_command);
	club_manager->AddCommand(chicken_command);
	//After a while, the sponsor thought that the scene was too noisy and called 
	//the club manager to cancel the singing
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