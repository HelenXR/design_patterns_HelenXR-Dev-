#include "captain_handler.h"
#include <iostream>
using namespace std;

CaptainHandler::CaptainHandler(string name){
	name_ = name;
	handler_ = NULL;
}

CaptainHandler::~CaptainHandler(){

}

void CaptainHandler::Accept(Girl *girl){
	cout << endl << "audit(" << girl->GetName() << ")" << endl;
	if(girl->GetSize() < 'B'){
		cout << "captain" << "(" << name_ << "):too small,not pass!" << endl;
	}
	else{
		if(handler_)
		{
			cout << "captain" << "(" << name_ << "):Good,I'll submit to the colonel" << endl;
			handler_->Accept(girl);
		}
	}
}