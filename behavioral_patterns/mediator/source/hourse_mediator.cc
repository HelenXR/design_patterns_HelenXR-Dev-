#include "hourse_mediator.h"
#include <iostream>
using namespace std;

HourseMediator::HourseMediator(){
}

HourseMediator::~HourseMediator(){

}

void HourseMediator::SetBuyer(BuyerPeole * buyer){
	buyer_people_ = buyer;
}

void HourseMediator::SetSeller(SellerPeole * seller){
	seller_people_ = seller;
}

void HourseMediator::Communicate(People *people,string message){
	if(people == seller_people_){
		buyer_people_->ReceiveMessage(message);
	}
	else if(people == buyer_people_){
		seller_people_->ReceiveMessage(message);
	}
	else
		cout << "error!" << endl;
}