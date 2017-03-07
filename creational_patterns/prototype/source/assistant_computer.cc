#include "assistant_computer.h"
#include <iostream>
using namespace std;

AssistantComputer::AssistantComputer(){
	processor_ = "i5 processor";
	display_ = "19inch monitor";
	keyboard_ = "shuangfeiyan";
}

AssistantComputer::~AssistantComputer(){

}

void AssistantComputer::SetDisplay(string display){
	display_ = display;
}

void AssistantComputer::SetKeyboard(string keyboard){
	keyboard_ = keyboard;
}

AssistantComputer* AssistantComputer::clone(){
	return 0;
}
void AssistantComputer::ShowConfig(){
	cout << "Assistant ShowConfig:" << endl;
	cout << processor_ << endl;
	cout << display_ << endl;
	cout << keyboard_ << endl;
}