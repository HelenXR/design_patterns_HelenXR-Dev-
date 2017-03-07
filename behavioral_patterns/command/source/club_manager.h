#ifndef HELENDP_SOURCE_CLUB_MANAGER_H_
#define HELENDP_SOURCE_CLUB_MANAGER_H_
#include "command.h"
#include <list>
using namespace std;

class ClubManager{
public:
	ClubManager();
	~ClubManager();
	void AddCommand(Command *command);
	void DeleteCommand(Command *command);
	void Action();
private:
	list<Command *> command_list_;
};
#endif