#include "swim_action.h"
#include <iostream>
using namespace std;

SwimAction::SwimAction(){

}

SwimAction::~SwimAction(){

}

void SwimAction::GetMaleFeedBack(MalePeople * male_people){
	cout << "GetMaleFeedBack(swim):���Կ���Ů,�ܺ�!" << endl;
}

void SwimAction::GetFemaleFeedBack(FemalePeople * female_people){
	cout << "GetFemaleFeedBack(swim):���������,�ܲ���!" << endl;
}