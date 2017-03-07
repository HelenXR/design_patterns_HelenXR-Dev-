#include "buyer_people.h"
#include "mediator.h"
#include <iostream>
using namespace std;

BuyerPeole::BuyerPeole(Mediator* mediator) : People(mediator){
	
}

BuyerPeole::~BuyerPeole(){

}

void BuyerPeole::Say(string message){
	mediator_->Communicate(this,message);
}

void BuyerPeole::ReceiveMessage(string message){
	cout << "buyer receive message:" << message << endl;
}