#ifndef HELENDP_SOURCE_PERSON_H_
#define HELENDP_SOURCE_PERSON_H_
#include <string>
using namespace std;

class Person{
public:
	Person(string name);
	virtual ~Person();
	virtual void Run();
	string GetName();

	
private:
	string name_;
};
#endif