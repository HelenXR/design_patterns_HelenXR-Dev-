#include "colonel_handler.h"
#include <iostream>
using namespace std;

ColonelHandler::ColonelHandler(string name){
	name_ = name;
	handler_ = NULL;
}

ColonelHandler::~ColonelHandler(){

}

void ColonelHandler::Accept(Girl *girl){
	if(girl->GetSize() < 'C'){
		cout << "colone" << "(" << name_ << "):too small,not pass!" << endl;
	}
	else{
		if(handler_)
		{
			cout << "colone" << "(" << name_ << "):Good,I'll submit to the chief" << endl;
			handler_->Accept(girl);
		}
	}
}
