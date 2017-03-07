#ifndef HELENDP_SOURCE_SING_COMMAND_H_
#define HELENDP_SOURCE_SING_COMMAND_H_
#include "command.h"

class SingCommand : public Command{
public:
	SingCommand(RunnerClub *runner_club);
	virtual ~SingCommand();
	virtual void ExcuteCommand();
protected:
	RunnerClub *runner_club_;
};

#endif
