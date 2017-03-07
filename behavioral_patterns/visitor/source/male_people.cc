#include "male_people.h"

MalePeople::MalePeople(){

}

MalePeople::~MalePeople(){

}

void MalePeople::Join(Action *action){
	action->GetMaleFeedBack(this);
}

