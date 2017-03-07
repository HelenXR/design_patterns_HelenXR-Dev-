#include "swim_action.h"
#include <iostream>
using namespace std;

SwimAction::SwimAction(){

}

SwimAction::~SwimAction(){

}

void SwimAction::GetMaleFeedBack(MalePeople * male_people){
	cout << "GetMaleFeedBack(swim):可以看美女,很好!" << endl;
}

void SwimAction::GetFemaleFeedBack(FemalePeople * female_people){
	cout << "GetFemaleFeedBack(swim):可以秀身材,很不错!" << endl;
}