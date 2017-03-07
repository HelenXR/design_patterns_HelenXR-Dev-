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
		cout << "����" << "(" << name_ << "):�㻹̫С,�ȳ���������!" << endl;
	}
	else{
		cout << "����(" << name_ << "):���Ů��("<< girl->GetName() <<")���ͨ��!" << endl;
	}
}

