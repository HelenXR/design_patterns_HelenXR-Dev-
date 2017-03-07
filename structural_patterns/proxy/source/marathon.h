#ifndef HELENDP_SOURCE_MARATHON_H_
#define HELENDP_SOURCE_MARATHON_H_
#include <string>
using namespace std;

class Marathon{
public:
	Marathon(string name);
	~Marathon();
	string GetName();
private:
	string name_;
};
#endif