#include "bike_action.h"
#include <iostream>
using namespace std;

BikeAction::BikeAction(){

}

BikeAction::~BikeAction(){

}

void BikeAction::GetMaleFeedBack(MalePeople * male_people){
	cout << "GetMaleFeedBack(bike):一个人骑车,好无聊!" << endl;
}

void BikeAction::GetFemaleFeedBack(FemalePeople * female_people){
	cout << "GetFemaleFeedBack(bike):风景很好,心情很好!" << endl;
}
