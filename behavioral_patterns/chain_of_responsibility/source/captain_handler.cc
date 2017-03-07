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
	cout << "��ʼ���(" << girl->GetName() << ")" << endl;
	if(girl->GetSize() < 'B'){
		cout << "�ӳ�" << "(" << name_ << "):�㻹̫С,�ȳ���������!" << endl;
	}
	else{
		if(handler_)
		{
			cout << "�ӳ�" << "(" << name_ << "):ͦ��,�����ų�����!" << endl;
			handler_->Accept(girl);
		}
	}
}