#include "bike_action.h"
#include <iostream>
using namespace std;

BikeAction::BikeAction(){

}

BikeAction::~BikeAction(){

}

void BikeAction::GetMaleFeedBack(MalePeople * male_people){
	cout << "GetMaleFeedBack(bike):һ�����ﳵ,������!" << endl;
}

void BikeAction::GetFemaleFeedBack(FemalePeople * female_people){
	cout << "GetFemaleFeedBack(bike):�羰�ܺ�,����ܺ�!" << endl;
}

