#include "volunteer_people.h"
#include <iostream>
using namespace std;

VolunteerPeople::VolunteerPeople(string name)
	:People(name){

}

VolunteerPeople::~VolunteerPeople(){

}

void VolunteerPeople::Update(string message){
	cout << "volunteer(" << this->GetName() << ") update message:" << message << endl;
}

