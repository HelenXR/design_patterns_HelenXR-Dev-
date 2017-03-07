#ifndef HELENDP_SOURCE_SWIM_ACTION_h_
#define HELENDP_SOURCE_SWIM_ACTION_h_
#include "action.h"

class SwimAction : public Action{
public:
	SwimAction();
	~SwimAction();
	void GetMaleFeedBack(MalePeople *male_people);
	void GetFemaleFeedBack(FemalePeople *female_people);	
};
#endif