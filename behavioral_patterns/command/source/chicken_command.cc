#include "chicken_command.h"

ChickenCommand::ChickenCommand(RunnerClub *runner_club)
	:Command(runner_club){
}

ChickenCommand::~ChickenCommand(){
	
}

void ChickenCommand::ExcuteCommand(){
	runner_club_->CosplayChicken();
}

