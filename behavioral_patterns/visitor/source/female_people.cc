#include "female_people.h"

FemalePeople::FemalePeople(){

}

FemalePeople::~FemalePeople(){

}

void FemalePeople::Join(Action *action){
	action->GetFemaleFeedBack(this);
}