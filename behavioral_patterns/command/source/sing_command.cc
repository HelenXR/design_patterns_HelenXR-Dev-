#include "sing_command.h"

SingCommand::SingCommand(RunnerClub *runner_club)
	:Command(runner_club){
}

SingCommand::~SingCommand(){
	
}

void SingCommand::ExcuteCommand(){
	runner_club_->Sing();
}

