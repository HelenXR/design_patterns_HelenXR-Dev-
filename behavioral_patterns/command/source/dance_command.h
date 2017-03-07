#ifndef HELENDP_SOURCE_DANCE_COMMAND_H_
#define HELENDP_SOURCE_DANCE_COMMAND_H_
#include "command.h"

class DanceCommand : public Command{
public:
	DanceCommand(RunnerClub *runner_club);
	virtual ~DanceCommand();
	virtual void ExcuteCommand();
protected:
	RunnerClub *runner_club_;
};

#endif

