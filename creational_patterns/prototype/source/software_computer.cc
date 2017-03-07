#include "software_computer.h"
#include "assistant_computer.h"
#include <iostream>
using namespace std;

SoftwareComputer::SoftwareComputer(){

}

SoftwareComputer::SoftwareComputer(SoftwareComputer& software_computer){
	processor_ = software_computer.processor_;
	display_ = software_computer.display_;
	keyboard_ = "cherry!";
}

SoftwareComputer::~SoftwareComputer(){

}

AssistantComputer* SoftwareComputer::clone(){
	return new SoftwareComputer(*this);
}
