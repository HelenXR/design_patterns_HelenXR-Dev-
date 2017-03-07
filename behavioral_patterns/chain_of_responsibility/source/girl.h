#ifndef HELENDP_SOURCE_GIRL_H_
#define HELENDP_SOURCE_GIRL_H_
#include <string>
using namespace std;

class Girl{
public:
	Girl(string name,int size);
	~Girl();
	string GetName();
	int GetSize();
private:
	string name_;
	int size_;
};
#endif