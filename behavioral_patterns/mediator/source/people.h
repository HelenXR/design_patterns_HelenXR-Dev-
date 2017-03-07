#ifndef HELENDP_SOURCE_PEOPLE_H_
#define HELENDP_SOURCE_PEOPLE_H_
#include <string>
using namespace std;
class Mediator;

class People{
public:
	People(Mediator *mediator);
	~People();
public:
	Mediator *mediator_;
};
#endif