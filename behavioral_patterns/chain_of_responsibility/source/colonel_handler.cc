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
		cout << "�ų�" << "(" << name_ << "):�㻹̫С,�ȳ���������!" << endl;
	}
	else{
		if(handler_)
		{
			cout << "�ų�" << "(" << name_ << "):ͦ��,�������쿴��!" << endl;
			handler_->Accept(girl);
		}
	}
}

