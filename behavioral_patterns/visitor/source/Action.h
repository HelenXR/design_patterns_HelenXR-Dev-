#ifndef HELENDP_SOURCE_ACTION_H_
#define HELENDP_SOURCE_ACTION_H_
class MalePeople;
class FemalePeople;

class Action{
public:
	Action();
	virtual ~Action();
	virtual void GetMaleFeedBack(MalePeople *male_people) = 0;
	virtual void GetFemaleFeedBack(FemalePeople *female_people) = 0;
};
#endif