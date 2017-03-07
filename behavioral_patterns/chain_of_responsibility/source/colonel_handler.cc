#include "colonel_handler.h"
#include <iostream>
using namespace std;

ColonelHandler::ColonelHandler(string name){
	name_ = name;
	handler_ = NULL;
}

ColonelHandler::~ColonelHandler(){

}

void ColonelHandler::SetHandler(Handler * handler){
	handler_ = handler;
}

void ColonelHandler::Accept(Girl *girl){
	if(girl->GetSize() < 'C'){
		cout << "团长" << "(" << name_ << "):你还太小,等长大了再来!" << endl;
	}
	else{
		if(handler_)
		{
			cout << "团长" << "(" << name_ << "):挺好,我让首领看看!" << endl;
			handler_->Accept(girl);
		}
	}
}

