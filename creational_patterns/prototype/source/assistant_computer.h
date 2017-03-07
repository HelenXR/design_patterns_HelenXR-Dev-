#ifndef HELENDP_SOURCE_ASSISTANT_COMPUTER_H_
#define HELENDP_SOURCE_ASSISTANT_COMPUTER_H_
#include <string>
using namespace std;

class AssistantComputer{
public:
	AssistantComputer();
	virtual ~AssistantComputer();

	virtual AssistantComputer* clone();
	void SetDisplay(string display);
	void SetKeyboard(string keyboard_);
	virtual void ShowConfig();

	string	processor_;
	string  display_;
	string  keyboard_;
};
#endif