#ifndef HELENDP_SOURCE_COMMAND_H_
#define HELENDP_SOURCE_COMMAND_H_
#include "runner_club.h"

class Command{
public:
	Command(RunnerClub *runner_club);
	virtual ~Command();
	virtual void ExcuteCommand();
protected:
	RunnerClub *runner_club_;
};
#endif