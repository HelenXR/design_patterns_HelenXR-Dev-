#include "chief_handler.h"
#include <iostream>
using namespace std;

ChiefHandler::ChiefHandler(string name){
	name_ = name;
	handler_ = NULL;
}

ChiefHandler::~ChiefHandler(){

}

void ChiefHandler::SetHandler(Handler * handler){
	handler_ = handler;
}

void ChiefHandler::Accept(Girl *girl){
	if(girl->GetSize() < 'D'){
		cout << "首领" << "(" << name_ << "):你还太小,等长大了再来!" << endl;
	}
	else{
		cout << "首领(" << name_ << "):这个女孩("<< girl->GetName() <<")审核通过!" << endl;
	}
}

