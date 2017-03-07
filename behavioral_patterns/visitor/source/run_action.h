#ifndef HELENDP_SOURCE_RUN_ACTION_h_
#define HELENDP_SOURCE_RUN_ACTION_h_
#include "action.h"

class RunAction : public Action{
public:
	RunAction();
	~RunAction();
	void GetMaleFeedBack(MalePeople *male_people);
	void GetFemaleFeedBack(FemalePeople *female_people);	
};
#endif

