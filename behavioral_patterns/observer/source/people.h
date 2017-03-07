#ifndef HELENDP_SOURCE_PEOPLE_H_
#define HELENDP_SOURCE_PEOPLE_H_
#include <string>
using namespace std;

class People{
public:
	People(string name);
	virtual ~People();
	virtual void Update(string message);
	void SetName(string name);
	string GetName();
private:
	string name_;
};
#endif