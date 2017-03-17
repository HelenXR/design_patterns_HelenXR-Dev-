#include "chief_handler.h"
#include <iostream>
using namespace std;

ChiefHandler::ChiefHandler(string name){
	name_ = name;
	handler_ = NULL;
}

ChiefHandler::~ChiefHandler(){

}

void ChiefHandler::Accept(Girl *girl){
	if(girl->GetSize() < 'D'){
		cout << "chief" << "(" << name_ << "):too small,not pass!" << endl;
	}
	else{
		cout << "chief(" << name_ << "):the gril("<< girl->GetName() <<") big enough,pass!" << endl;
	}
}
