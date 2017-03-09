#include "software_computer.h"
#include "assistant_computer.h"
#include <iostream>
using namespace std;

SoftwareComputer::SoftwareComputer():AssistantComputer(){
	keyboard_ = "Cherry";
}

SoftwareComputer::~SoftwareComputer(){

}

SoftwareComputer* SoftwareComputer::clone(){
	SoftwareComputer *software_computer = new SoftwareComputer();
	((AssistantComputer *)software_computer)->clone();
	return software_computer;
}

void SoftwareComputer::ShowConfig(){
	cout << "software ShowConfig:" << endl;
	cout << processor_ << endl;
	cout << monitor_ << endl;
	cout << keyboard_ << endl;
}