#ifndef HELENDP_SOURCE_BIKE_ACTION_h_
#define HELENDP_SOURCE_BIKE_ACTION_h_
#include "action.h"

class BikeAction : public Action{
public:
	BikeAction();
	~BikeAction();
	void GetMaleFeedBack(MalePeople *male_people);
	void GetFemaleFeedBack(FemalePeople *female_people);	
};
#endif

