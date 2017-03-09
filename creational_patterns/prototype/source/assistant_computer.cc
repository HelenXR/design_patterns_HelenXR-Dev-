#include "assistant_computer.h"
#include <iostream>
using namespace std;

AssistantComputer::AssistantComputer(){
	processor_ = "i5 processor";
	monitor_ = "19 inch monitor";
	keyboard_ = "Double Birds";
}

AssistantComputer::~AssistantComputer(){

}

AssistantComputer* AssistantComputer::clone(){
	AssistantComputer *assistant_computer = new AssistantComputer();
	assistant_computer->processor_ = processor_;
	assistant_computer->monitor_ = monitor_;
	assistant_computer->keyboard_ = keyboard_;
	return assistant_computer;
}

void AssistantComputer::ShowConfig(){
	cout << "Assistant ShowConfig:" << endl;
	cout << processor_ << endl;
	cout << monitor_ << endl;
	cout << keyboard_ << endl;
}