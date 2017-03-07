#ifndef HELENDP_SOURCE_MEMENTO_H_
#define HELENDP_SOURCE_MEMENTO_H_
#include <string>
using namespace std;

class Memento{
public:
	Memento(string date);
	~Memento();
	string GetDate();
private:
	string date_;
};
#endif