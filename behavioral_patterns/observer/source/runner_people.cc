#include "runner_people.h"
#include <iostream>
using namespace std;

RunnerPeople::RunnerPeople(SponsorSubject *sponsor_subject,string name)
	:People(name){
	sponsor_subject_ = sponsor_subject;
}

RunnerPeople::~RunnerPeople(){

}

void RunnerPeople::Update(){
	cout << "runner(" << this->GetName() << ") get message:" << sponsor_subject_->notify_message_<< endl;
}
