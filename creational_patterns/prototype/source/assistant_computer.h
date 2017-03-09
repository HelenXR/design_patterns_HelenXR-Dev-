#ifndef HELENDP_SOURCE_ASSISTANT_COMPUTER_H_
#define HELENDP_SOURCE_ASSISTANT_COMPUTER_H_
#include <string>
using namespace std;

class AssistantComputer{
public:
	AssistantComputer();
	virtual ~AssistantComputer();

	AssistantComputer* clone();
	virtual void ShowConfig();

	string	processor_;
	string  monitor_;
	string  keyboard_;
};
#endif