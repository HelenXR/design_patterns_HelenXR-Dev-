#include "run_action.h"
#include <iostream>
using namespace std;

RunAction::RunAction(){

}

RunAction::~RunAction(){

}

void RunAction::GetMaleFeedBack(MalePeople * male_people){
	cout << "GetMaleFeedBack(run):������,��ʹ��!" << endl;
}

void RunAction::GetFemaleFeedBack(FemalePeople * female_people){
	cout << "GetFemaleFeedBack(run):����������!" << endl;
}
