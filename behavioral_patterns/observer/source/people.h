#ifndef HELENDP_SOURCE_PEOPLE_H_
#define HELENDP_SOURCE_PEOPLE_H_
#include <string>
using namespace std;

class People{
public:
	People(string name);
	~People();
	virtual void Update() = 0;
	void SetName(string name);
	string GetName();
private:
	string name_;
};
#endif