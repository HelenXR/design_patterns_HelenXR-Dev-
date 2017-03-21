#include "volunteer_people.h"
#include <iostream>
using namespace std;

VolunteerPeople::VolunteerPeople(SponsorSubject *sponsor_subject,string name)
	:People(name){
	sponsor_subject_ = sponsor_subject;
}

VolunteerPeople::~VolunteerPeople(){

}

void VolunteerPeople::Update(){
	cout << "volunteer(" << this->GetName() << ") get message:" << sponsor_subject_->notify_message_ << endl;
}
