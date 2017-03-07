#include "run_action.h"
#include <iostream>
using namespace std;

RunAction::RunAction(){

}

RunAction::~RunAction(){

}

void RunAction::GetMaleFeedBack(MalePeople * male_people){
	cout << "GetMaleFeedBack(run):大汗淋淋,够痛快!" << endl;
}

void RunAction::GetFemaleFeedBack(FemalePeople * female_people){
	cout << "GetFemaleFeedBack(run):又累又无聊!" << endl;
}

