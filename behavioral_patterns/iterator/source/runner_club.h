#ifndef HELENDP_SOURCE_RUNNER_CLUB_H_
#define HELENDP_SOURCE_RUNNER_CLUB_H_
#include "club.h"
#include <vector>
using namespace std;

class RunnerClub : public Club{
public:
	RunnerClub();
	~RunnerClub();
	int GetTotal();
	void Append(string name);
	string Gain(int index); 
	Iterator* CreateIterator();
private:
	Iterator *iterator_;
	vector<string> vector_;
};
#endif