#include "phone.h"
#include <iostream>
using namespace std;

Phone::Phone(){
	base_config_ = "base config";
}

Phone::~Phone(){
	
}

void Phone::AssembleProcessor(string processor){
	processor_ = processor;
}

void Phone::AssembleMemory(string memory){
	memory_ = memory;
}

void Phone::AssemblePanel(string panel){
	panel_ = panel;
}

void Phone::ShowConfig(){
	cout << "ShowConfig:" << endl;
	cout << base_config_ << endl;
	cout << processor_ << endl;
	cout << memory_ << endl;
	cout << panel_ << endl << endl;
}
