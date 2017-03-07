/*
俱乐部发展到一定阶段,俱乐部管理者想看一下有多少成员,这时就需要一个遍历所有成员的方法.
*/
#include <windows.h>
#include "runner_club.h"
#include "runner_iterator.h"
#include <iostream>
using namespace std;

int main(){
	RunnerClub *runner_club = new RunnerClub();
	runner_club->Append("zhang san");
	runner_club->Append("li si");
	runner_club->Append("wang wu");
	Iterator *iterator = runner_club->CreateIterator();
	for(;!iterator->IsEnd();iterator->Next()){
		cout << iterator->GetCurrent() << endl;
	}
	//clear
	delete runner_club;
	system("Pause");
	return 0;
}
