#include "captain_handler.h"
#include <iostream>
using namespace std;

CaptainHandler::CaptainHandler(string name){
	name_ = name;
	handler_ = NULL;
}

CaptainHandler::~CaptainHandler(){

}

void CaptainHandler::SetHandler(Handler * handler){
	handler_ = handler;
}

void CaptainHandler::Accept(Girl *girl){
	cout << "开始审核(" << girl->GetName() << ")" << endl;
	if(girl->GetSize() < 'B'){
		cout << "队长" << "(" << name_ << "):你还太小,等长大了再来!" << endl;
	}
	else{
		if(handler_)
		{
			cout << "队长" << "(" << name_ << "):挺好,我让团长看看!" << endl;
			handler_->Accept(girl);
		}
	}
}