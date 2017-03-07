#ifndef HELENDP_SOURCE_CHICKEN_COMMAND_H_
#define HELENDP_SOURCE_CHICKEN_COMMAND_H_
#include "command.h"

class ChickenCommand : public Command{
public:
	ChickenCommand(RunnerClub *runner_club);
	virtual ~ChickenCommand();
	virtual void ExcuteCommand();
protected:
	RunnerClub *runner_club_;
};

#endif

