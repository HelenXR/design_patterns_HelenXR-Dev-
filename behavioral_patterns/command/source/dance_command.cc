#include "dance_command.h"

DanceCommand::DanceCommand(RunnerClub *runner_club)
	:Command(runner_club){
}

DanceCommand::~DanceCommand(){
	
}

void DanceCommand::ExcuteCommand(){
	runner_club_->Dance();
}
