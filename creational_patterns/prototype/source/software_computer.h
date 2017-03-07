#ifndef HELENDP_SOURCE_SOFTWARE_COMPUTER_H_
#define HELENDP_SOURCE_SOFTWARE_COMPUTER_H_
#include <string>
#include "assistant_computer.h"
using namespace std;

class SoftwareComputer : public AssistantComputer{
public:
	SoftwareComputer();
	SoftwareComputer(SoftwareComputer& software_computer);
	~SoftwareComputer();
	virtual AssistantComputer* clone();
};
#endif

