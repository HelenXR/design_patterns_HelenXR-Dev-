#include "seller_people.h"
#include "mediator.h"
#include <iostream>
using namespace std;

SellerPeole::SellerPeole(Mediator* mediator) : People(mediator){
	
}

SellerPeole::~SellerPeole(){

}

void SellerPeole::Say(string message){
	mediator_->Communicate(this,message);
}

void SellerPeole::ReceiveMessage(string message){
	cout << "Seller receive message:" << message << endl;
}