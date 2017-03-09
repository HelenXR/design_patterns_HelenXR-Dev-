#include <windows.h>
#include "software_computer.h"

/*
design_pattern:"prototype"
For example, the company to employees with computers.
Assistant computer configuration: I5 processor, 19 inch display, ordinary keyboard.
Software Engineer computer configuration: keyboard for cherry, the other with the assistantFollow up .
all the same software engineers.
*/
int main(){
	SoftwareComputer *software_computer = new SoftwareComputer();
	software_computer->ShowConfig();
	AssistantComputer *software_computer_2 = software_computer->clone();
	software_computer_2->ShowConfig();
	AssistantComputer *software_computer_3 = software_computer->clone();
	software_computer_3->ShowConfig();

	//clear
	delete software_computer;
	delete software_computer_2;
	delete software_computer_3;
	system("Pause");
	return 0;
}
